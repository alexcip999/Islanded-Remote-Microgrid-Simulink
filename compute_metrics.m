%% =========================================================
%  METRICI DE PERFORMANTA — VERSIUNEA CORECTATA v2
%  Detectie automata V_nom, filtrare ripple, prag perturbatii
% ==========================================================

clc;
fprintf('===========================================\n');
fprintf('  METRICI DE PERFORMANTA MICROGRID\n');
fprintf('===========================================\n\n');

%% ── CONFIGURARE ──────────────────────────────────────────
CONSENSUS_ACTIVE = false;
SCENARIO_NAME    = 'Zi_Mai_FaraConsens';
T_START_ANALYSIS = 1.0;
T_END_ANALYSIS   = 12.0;
F_NOM            = 60.0;
SAVE_RESULTS     = true;

%% ── VERIFICA DATE ────────────────────────────────────────
vars_needed = {'tout','V1','V2','V3','V4','f1','f2','f3','f4'};
for i = 1:length(vars_needed)
    if ~exist(vars_needed{i},'var')
        error('Variabila %s lipseste din Workspace!', vars_needed{i});
    end
end

%% ── EXTRAGE INTERVALUL ───────────────────────────────────
idx  = find(tout >= T_START_ANALYSIS & tout <= T_END_ANALYSIS);
t_a  = tout(idx);
n    = length(idx);
fprintf('Interval: t=%.1f → %.1f s (%d puncte)\n\n', ...
    T_START_ANALYSIS, T_END_ANALYSIS, n);

V_raw = [V1(idx), V2(idx), V3(idx), V4(idx)];
f_raw = [f1(idx), f2(idx), f3(idx), f4(idx)];

%% ── FILTRARE RIPPLE (medie mobila 0.1s) ─────────────────
dt_sim = mean(diff(t_a));
win    = max(1, round(0.1 / dt_sim));
fprintf('Fereastra filtrare: %.3f s (%d puncte)\n\n', win*dt_sim, win);

V_mat = zeros(n, 4);
f_mat = zeros(n, 4);
for k = 1:4
    V_mat(:,k) = movmean(V_raw(:,k), win);
    f_mat(:,k) = movmean(f_raw(:,k), win);
end

%% ── DETECTIE AUTOMATA V_nom ──────────────────────────────
idx_stable = find(t_a >= 2.0 & t_a <= 8.0);
V_nom = median(mean(V_mat(idx_stable,:), 2));
fprintf('V_nom detectat automat: %.4f p.u.\n', V_nom);
fprintf('(valoare mediana in intervalul stabil t=2-8s)\n\n');

%% =========================================================
%  METRICI TENSIUNE
% =========================================================
fprintf('─── METRICI TENSIUNE ───────────────────────\n');

V_err_mean  = abs(V_nom - mean(V_mat(:)));
V_rmse      = sqrt(mean((V_mat(:) - V_nom).^2));
V_spread    = max(V_mat,[],2) - min(V_mat,[],2);
dV_mean     = mean(V_spread);
dV_max      = max(V_spread);
dV_p95      = prctile(V_spread, 95);
V_in_band5  = sum(sum(abs(V_mat - V_nom) <= 0.05*V_nom)) / (n*4) * 100;
V_in_band10 = sum(sum(abs(V_mat - V_nom) <= 0.10*V_nom)) / (n*4) * 100;
V_var       = mean(var(V_mat, 0, 1));
[V_min_val, V_min_inv] = min(min(V_mat,[],1));

fprintf('M1  Eroare medie V fata de V_nom=%.4f:   %.4f p.u. (%.2f%%)\n', ...
    V_nom, V_err_mean, V_err_mean/V_nom*100);
fprintf('M2  RMSE tensiune:                         %.4f p.u.\n', V_rmse);
fprintf('M3  Dezechilibru V inter-invertor:\n');
fprintf('    medie=%.4f  max=%.4f  P95=%.4f p.u.\n', dV_mean, dV_max, dV_p95);
fprintf('M4  Timp V in banda ±5%% din V_nom:        %.1f%%\n', V_in_band5);
fprintf('M5  Timp V in banda ±10%% din V_nom:       %.1f%%\n', V_in_band10);
fprintf('M6  Varianta medie tensiuni:               %.6f\n', V_var);
fprintf('M7  Tensiune minima:                       %.4f p.u. (Inv%d)\n', ...
    V_min_val, V_min_inv);

%% =========================================================
%  METRICI FRECVENTA
% =========================================================
fprintf('\n─── METRICI FRECVENTA ──────────────────────\n');

f_err_mean = abs(F_NOM - mean(f_mat(:)));
f_rmse     = sqrt(mean((f_mat(:) - F_NOM).^2));
f_spread   = max(f_mat,[],2) - min(f_mat,[],2);
df_mean    = mean(f_spread);
df_max     = max(f_spread);
f_in_band  = sum(sum(abs(f_mat - F_NOM) <= 0.5)) / (n*4) * 100;
f_std      = mean(std(f_mat, 0, 1));

fprintf('M8  Eroare medie f fata de 60 Hz:          %.4f Hz\n', f_err_mean);
fprintf('M9  RMSE frecventa (filtrata):             %.4f Hz\n', f_rmse);
fprintf('M10 Dezechilibru f inter-invertor:\n');
fprintf('    medie=%.4f Hz   max=%.4f Hz\n', df_mean, df_max);
fprintf('M11 Timp f in banda ±0.5 Hz:               %.1f%%\n', f_in_band);
fprintf('M12 Std medie frecventa:                   %.4f Hz\n', f_std);

%% =========================================================
%  METRICI LOAD SHARING
% =========================================================
has_power = exist('P1','var') && exist('P2','var') && ...
            exist('P3','var') && exist('P4','var');
if has_power
    fprintf('\n─── METRICI LOAD SHARING ───────────────────\n');
    P_mat = [P1(idx), P2(idx), P3(idx), P4(idx)];
    for k = 1:4
        P_mat(:,k) = movmean(P_mat(:,k), win);
    end
    P_spread = max(P_mat,[],2) - min(P_mat,[],2);
    dP_mean  = mean(P_spread);
    dP_max   = max(P_spread);
    P_cv     = mean(std(P_mat,0,2)./(mean(P_mat,2)+eps))*100;
    fprintf('M13 Dezechilibru P inter-invertor:\n');
    fprintf('    medie=%.4f p.u.  max=%.4f p.u.\n', dP_mean, dP_max);
    fprintf('M14 Coef. variatie putere (CV):            %.2f%%\n', P_cv);
end

%% =========================================================
%  ANALIZA PERTURBATII
% =========================================================
fprintf('\n─── ANALIZA PERTURBATII ─────────────────────\n');

V_mean_sys  = mean(V_mat, 2);
dV_dt       = diff(V_mean_sys) / dt_sim;
thresh_pert = -0.5 * V_nom;       % cadere > 50% V_nom per secunda
min_sep_pts = round(1.0 / dt_sim);% minim 1s intre evenimente

idx_drops = find(dV_dt < thresh_pert);

if isempty(idx_drops)
    fprintf('Nu au fost detectate perturbatii semnificative.\n');
    n_events = 0;
    recovery_times = [];
else
    % Grupeaza evenimentele apropiate
    events = idx_drops(1);
    for k = 2:length(idx_drops)
        if idx_drops(k) - events(end) > min_sep_pts
            events(end+1) = idx_drops(k);
        end
    end
    n_events = length(events);
    fprintf('Perturbatii semnificative detectate: %d\n', n_events);

    recovery_times = [];
    for ip = 1:n_events
        ep       = events(ip);
        t_pert   = t_a(ep);
        V_before = mean(V_mean_sys(max(1,ep-round(0.5/dt_sim)):ep));
        V_target = V_before * 0.97;
        idx_rec  = find(t_a > t_pert+0.1 & V_mean_sys >= V_target, 1);
        if ~isempty(idx_rec)
            recovery_times(end+1) = t_a(idx_rec) - t_pert;
        end
        if ip <= 5
            t_real = 7 + t_pert;
            fprintf('  t=%.2fs (%02.0f:%02.0f): cadere=%.3f p.u./s\n', ...
                t_pert, floor(t_real), mod(t_real,1)*60, abs(dV_dt(ep)));
        end
    end
    if ~isempty(recovery_times)
        fprintf('Timp mediu recuperare: %.3f s\n', mean(recovery_times));
        fprintf('Timp max recuperare:   %.3f s\n', max(recovery_times));
    end
end

%% =========================================================
%  SCOR GLOBAL CALIBRAT
% =========================================================
fprintf('\n─── SCOR GLOBAL ─────────────────────────────\n');

score_V    = max(0, 100*(1 - V_rmse/0.20));
score_f    = max(0, 100*(1 - f_rmse/2.0));
score_dV   = max(0, 100*(1 - dV_mean/0.20));
score_df   = max(0, 100*(1 - df_mean/2.0));
score_band = V_in_band10;

score_global = 0.25*score_V  + 0.20*score_f + ...
               0.25*score_dV + 0.15*score_df + 0.15*score_band;

fprintf('Scor tensiune RMSE:        %5.1f/100\n', score_V);
fprintf('Scor frecventa RMSE:       %5.1f/100\n', score_f);
fprintf('Scor echilibru V:          %5.1f/100\n', score_dV);
fprintf('Scor echilibru f:          %5.1f/100\n', score_df);
fprintf('Scor banda ±10%%:          %5.1f/100\n', score_band);
fprintf('─────────────────────────────────────\n');
fprintf('SCOR GLOBAL:               %5.1f/100\n', score_global);

if     score_global >= 75; status = 'EXCELENT';
elseif score_global >= 55; status = 'BUN';
elseif score_global >= 35; status = 'ACCEPTABIL';
else;                      status = 'NECESITA AJUSTARI';
end
fprintf('STATUS: %s\n', status);

%% =========================================================
%  SALVARE
% =========================================================
if SAVE_RESULTS
    timestamp = datestr(now,'yyyymmdd_HHMMSS');
    filename  = sprintf('metrics_%s_%s.mat', SCENARIO_NAME, timestamp);
    metrics   = struct(...
        'scenario',SCENARIO_NAME,'consensus',CONSENSUS_ACTIVE,...
        'timestamp',timestamp,'V_nom',V_nom,'F_nom',F_NOM,...
        'V_err_mean',V_err_mean,'V_rmse',V_rmse,...
        'dV_inter_mean',dV_mean,'dV_inter_max',dV_max,...
        'dV_inter_p95',dV_p95,'V_in_band_5pct',V_in_band5,...
        'V_in_band_10pct',V_in_band10,'V_var',V_var,'V_min',V_min_val,...
        'f_err_mean',f_err_mean,'f_rmse',f_rmse,...
        'df_inter_mean',df_mean,'df_inter_max',df_max,...
        'f_in_band',f_in_band,'f_std',f_std,...
        'score_global',score_global,'score_V',score_V,'score_f',score_f,...
        'score_dV',score_dV,'score_df',score_df,'score_band',score_band,...
        't_vec',t_a,'V_mat',V_mat,'f_mat',f_mat,...
        'V_spread',V_spread,'f_spread',f_spread,...
        'n_perturbatii',n_events);
    save(filename,'metrics');
    fprintf('\nSalvat in: %s\n', filename);
end

%% =========================================================
%  GRAFICE
% =========================================================
ore_labels = {'07:00','08:00','09:00','10:00','11:00','12:00',...
              '13:00','14:00','15:00','16:00','17:00','18:00','19:00'};
colors = {'b','r','g','m'};

figure('Name',sprintf('Metrici — %s',SCENARIO_NAME),...
       'Position',[50 50 1200 750]);

subplot(2,3,1); hold on;
for k=1:4
    plot(t_a,V_mat(:,k),colors{k},'LineWidth',1.2,'DisplayName',sprintf('Inv%d',k));
end
yline(V_nom,     'k--','V_{nom}','LineWidth',1.5);
yline(V_nom*1.10,'r:','LineWidth',1);
yline(V_nom*0.90,'r:','LineWidth',1);
ylabel('V [p.u.]'); title('Tensiuni (filtrate 0.1s)');
legend('Location','southeast','NumColumns',2); grid on;
xticks(0:1:12); xticklabels(ore_labels); xtickangle(45);

subplot(2,3,2);
area(t_a,V_spread,'FaceColor',[0.8 0.2 0.2],'FaceAlpha',0.5);
hold on;
yline(dV_mean,'k--',sprintf('μ=%.3f',dV_mean),'LineWidth',1.5);
ylabel('ΔV [p.u.]');
title(sprintf('Dezechilibru V inter-invertor (μ=%.3f)',dV_mean));
grid on; xticks(0:1:12); xticklabels(ore_labels); xtickangle(45);

subplot(2,3,3); hold on;
for k=1:4
    plot(t_a,f_mat(:,k),colors{k},'LineWidth',1.2,'DisplayName',sprintf('Inv%d',k));
end
yline(60,'k--','60 Hz','LineWidth',1.5);
yline(60.5,'r:','LineWidth',1); yline(59.5,'r:','LineWidth',1);
ylabel('f [Hz]'); title('Frecvente (filtrate 0.1s)');
ylim([58 62]); legend('Location','southeast','NumColumns',2); grid on;
xticks(0:1:12); xticklabels(ore_labels); xtickangle(45);

subplot(2,3,4);
area(t_a,f_spread,'FaceColor',[0.2 0.2 0.8],'FaceAlpha',0.5);
hold on;
yline(df_mean,'k--',sprintf('μ=%.3f Hz',df_mean),'LineWidth',1.5);
ylabel('Δf [Hz]');
title(sprintf('Dezechilibru f inter-invertor (μ=%.3f Hz)',df_mean));
grid on; xticks(0:1:12); xticklabels(ore_labels); xtickangle(45);

subplot(2,3,5);
b = bar([score_V,score_f,score_dV,score_df,score_band],'FaceColor','flat');
b.CData = [0.2 0.7 0.2; 0.2 0.4 0.8; 0.8 0.5 0.1; 0.5 0.2 0.8; 0.8 0.2 0.2];
hold on;
yline(score_global,'k--',sprintf('Global=%.1f',score_global),'LineWidth',2);
xticklabels({'V RMSE','f RMSE','ΔV','Δf','Banda'}); xtickangle(30);
ylabel('Scor'); ylim([0 110]);
title(sprintf('Scor Global: %.1f/100 — %s',score_global,status)); grid on;

subplot(2,3,6);
histogram(V_spread,40,'FaceColor',[0.8 0.4 0.1],'FaceAlpha',0.7,...
    'Normalization','probability');
hold on;
xline(dV_mean,'r--',sprintf('μ=%.3f',dV_mean),'LineWidth',2);
xline(dV_p95,'b--',sprintf('P95=%.3f',dV_p95),'LineWidth',2);
xlabel('ΔV [p.u.]'); ylabel('Probabilitate');
title('Distributia Dezechilibrului V'); grid on;

sgtitle(sprintf('Metrici — %s | Consens: %s | Scor: %.1f/100',...
    strrep(SCENARIO_NAME,'_',' '),mat2str(CONSENSUS_ACTIVE),score_global),...
    'FontSize',12,'FontWeight','bold');

fprintf('\nGrafice generate.\n');
fprintf('===========================================\n');