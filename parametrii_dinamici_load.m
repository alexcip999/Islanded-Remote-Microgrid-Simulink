%% =========================================================
%  SCENARIU ZI DE MAI — 07:00 la 19:00
%  12 secunde simulare = 12 ore reale
%  1 secundă = 1 oră reală
%  =========================================================
%  t=0s  → 07:00    t=3s  → 10:00    t=6s  → 13:00
%  t=9s  → 16:00    t=12s → 19:00
%
%  Locație: România (lat ~45°N), 15 Mai
%  Iradianță măsurată tipică zi de mai senină cu nori parțiali
% ==========================================================

clc;
fprintf('=== SCENARIU ZI DE MAI (07:00-19:00) ===\n\n');

dt = 0.005;                    % pas 5ms — foarte fin
t  = (0:dt:12)';               % 0 la 12 secunde
N  = length(t);

%% =========================================================
%  IRADIANȚĂ SOLARĂ — DATE REALISTE 15 MAI, ROMÂNIA
%  Valori bazate pe date meteorologice tipice:
%  07:00 → G≈200 W/m²   (soare jos la orizont)
%  08:00 → G≈380 W/m²
%  09:00 → G≈560 W/m²
%  10:00 → G≈710 W/m²
%  11:00 → G≈820 W/m²
%  12:00 → G≈890 W/m²
%  13:00 → G≈910 W/m²   (vârf)
%  14:00 → G≈870 W/m²
%  15:00 → G≈780 W/m²
%  16:00 → G≈640 W/m²
%  17:00 → G≈470 W/m²
%  18:00 → G≈300 W/m²
%  19:00 → G≈140 W/m²
% =========================================================

%% Date orare G [W/m²] — interpolare pentru curba de baza
t_hours   = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12];
G_hourly  = [200, 380, 560, 710, 820, 890, 910, 870, 780, 640, 470, 300, 140];

%% Interpolare smooth (spline) pentru curba de baza
G_base_interp = interp1(t_hours, G_hourly, t, 'pchip');
G_base_interp = max(G_base_interp, 0);

%% Nori parțiali — eveniment tipic zi de mai
% Mai → nori cumuluși după-amiaza, posibil dimineața devreme
cloud_events = [
%   t_start  durata  reducere  forma
    1.2,     0.20,   0.25,     1;   % 08:12 — nor mic
    2.8,     0.35,   0.40,     1;   % 09:48 — nor mediu
    4.5,     0.15,   0.20,     1;   % 11:30 — nor rapid
    5.8,     0.50,   0.55,     1;   % 12:48 — nor mare (vârf solar afectat)
    7.3,     0.40,   0.45,     1;   % 14:18 — nor mare după-amiaza
    8.1,     0.25,   0.30,     1;   % 15:06 — nor mediu
    9.5,     0.35,   0.35,     1;   % 16:30 — nor
    10.8,    0.20,   0.25,     1;   % 17:48 — nor mic seara
];

G_cloud_effect = zeros(N, 1);
for c = 1:size(cloud_events, 1)
    t_c   = cloud_events(c, 1);
    dur_c = cloud_events(c, 2);
    red_c = cloud_events(c, 3);
    tau   = dur_c * 0.25;   % timp de rampa 25% din durata
    for i = 1:N
        ti = t(i);
        if ti >= t_c && ti <= (t_c + dur_c)
            % Forma trapezoidala: rampa sus, platou, rampa jos
            if ti < (t_c + tau)
                alpha = (ti - t_c) / tau;
            elseif ti > (t_c + dur_c - tau)
                alpha = (t_c + dur_c - ti) / tau;
            else
                alpha = 1.0;
            end
            alpha = max(min(alpha, 1.0), 0.0);
            G_cloud_effect(i) = G_cloud_effect(i) - red_c * alpha;
        end
    end
end

%% Turbulenta atmosferica (fluctuatii rapide)
G_turb = 12*sin(2*pi*0.7*t)  + ...
          8*sin(2*pi*1.5*t)  + ...
          5*cos(2*pi*2.8*t)  + ...
          3*sin(2*pi*5.3*t);

%% Iradianță totala de baza
G_base_total = max(G_base_interp .* (1 + G_cloud_effect) + G_turb, 0);

%% =========================================================
%  IRADIANȚĂ PER INVERTOR
%  Diferente realiste bazate pe instalare tipica
%  Inv1: panou S, inclinare 35° (optima pt mai)  → referinta
%  Inv2: panou S-SE, inclinare 35°               → varf cu ~20min mai devreme
%  Inv3: panou S, inclinare 35°, umbra partiala  → -20-30% dimineata
%  Inv4: panou S-SV, inclinare 30°               → varf cu ~15min mai tarziu
% =========================================================

%% INV1 — referinta, optima
G1 = G_base_total + 6*sin(2*pi*0.25*t+0.4) + 4*cos(2*pi*0.9*t+1.1);
G1 = max(min(G1, 1000), 0);

%% INV2 — S-SE, varf mai devreme (shift -0.33s ≈ 20 min)
t_shift2  = max(t - 0.33, 0);
G2_shifted = interp1(t, G_base_interp, t_shift2, 'linear', G_base_interp(1));
% Eficienta usor mai mica dupa-amiaza (orientare S-SE)
eff2 = ones(N,1);
for i=1:N
    if t(i) > 6   % dupa 13:00
        eff2(i) = 1 - 0.08*(t(i)-6)/6;
    end
end
G2 = G2_shifted .* eff2 .* (1 + G_cloud_effect) + G_turb + ...
     5*sin(2*pi*0.3*t+1.2) + 3*cos(2*pi*1.1*t+0.5);
G2 = max(min(G2, 1000), 0);

%% INV3 — umbra partiala dimineata (07:00-09:30 = t=0-2.5s)
G3 = G_base_total;
for i = 1:N
    ti = t(i);
    % Umbra copac/cladire: maxima la 07:00, dispare la 09:30
    if ti < 1.5
        shadow_factor = 0.30;   % -30% la 07:00-08:30
    elseif ti < 2.5
        shadow_factor = 0.30 * (1 - (ti-1.5)/1.0);  % scade la 0% pana 09:30
    else
        shadow_factor = 0;
    end
    G3(i) = G3(i) * (1 - shadow_factor);
end
G3 = G3 + 7*sin(2*pi*0.4*t+2.1) + 4*cos(2*pi*0.8*t+0.7);
G3 = max(min(G3, 1000), 0);

%% INV4 — S-SV, inclinare 30°, varf mai tarziu (+0.25s ≈ 15 min)
t_shift4  = min(t + 0.25, 12);
G4_shifted = interp1(t, G_base_interp, t_shift4, 'linear', G_base_interp(end));
% Eficienta usor mai buna dupa-amiaza (orientare S-SV)
eff4 = ones(N,1);
for i=1:N
    if t(i) > 6
        eff4(i) = 1 + 0.04*(t(i)-6)/6;  % +4% max dupa-amiaza
    else
        eff4(i) = 0.95;  % usor mai slab dimineata
    end
end
G4 = G4_shifted .* eff4 .* (1 + G_cloud_effect) + G_turb + ...
     6*sin(2*pi*0.35*t+0.8) + 5*cos(2*pi*0.7*t+1.5);
G4 = max(min(G4, 1000), 0);

%% =========================================================
%  SARCINA DINAMICA — MICROGRID INDUSTRIAL/REZIDENTIAL
%  07:00-19:00, Zi de Mai
%  Profil bazat pe date reale de consum
%  =========================================================

%% Date orare P [W] — profil tipic zi lucratoare mai
%  07:00 → 14 kW  (pornire activitate, aer conditionat)
%  08:00 → 18 kW  (activitate plina)
%  09:00 → 20 kW  (varf matinal)
%  10:00 → 19 kW  (stabilizare)
%  11:00 → 21 kW  (pre-pranz)
%  12:00 → 23 kW  (pranz — bucatarie, AC maxim)
%  13:00 → 22 kW  (post-pranz)
%  14:00 → 19 kW  (activitate normala)
%  15:00 → 20 kW  (activitate normala)
%  16:00 → 22 kW  (pre-inchidere, echipamente)
%  17:00 → 18 kW  (inchidere partiala)
%  18:00 → 14 kW  (consum rezidential creste)
%  19:00 → 16 kW  (seara acasa)

t_h_load = [0, 1, 2, 3, 4,  5,  6,  7,  8,  9,  10, 11, 12];
P_hourly  = [14000, 18000, 20000, 19000, 21000, 23000, 22000, ...
             19000, 20000, 22000, 18000, 14000, 16000];

%% Interpolare smooth
P_base_interp = interp1(t_h_load, P_hourly, t, 'pchip');
P_base_interp = max(P_base_interp, 5000);

%% Evenimente specifice
P_event = zeros(N, 1);

for i = 1:N
    ti = t(i);
    ev = 0;

    % AC industrial ciclic — pornit toata ziua (zi calda de mai)
    % Ciclu: 2min ON, 1min OFF → in simulare: 0.033s ON, 0.017s OFF
    t_ac = mod(ti, 0.05);
    if t_ac < 0.033
        ev = ev + 2200;
    end

    % Elevator/pompa — porniri periodice
    t_elev = mod(ti, 0.25);
    if t_elev < 0.02
        ev = ev + 1500*(ti/0.02);
    elseif t_elev < 0.08
        ev = ev + 1500;
    elseif t_elev < 0.10
        ev = ev + 1500*(0.10-ti)/0.02;
    end

    % Cuptoare electrice la pranz (t=4.5-6.5s = 11:30-13:30)
    if ti >= 4.5 && ti < 4.7
        ev = ev + 4000*(ti-4.5)/0.2;
    elseif ti >= 4.7 && ti < 6.3
        ev = ev + 4000;
    elseif ti >= 6.3 && ti < 6.5
        ev = ev + 4000*(6.5-ti)/0.2;
    end

    % Compressor industrial (t=2-4s = 09:00-11:00)
    if ti >= 2.0 && ti < 4.0
        t_comp = mod(ti - 2.0, 0.3);
        if t_comp < 0.18
            ev = ev + 3000;
        end
    end

    % Sistem de iluminat exterior (incepe sa scada la t=3s = 10:00)
    if ti < 1.0
        ev = ev + 800;   % iluminat necesar dimineata devreme
    elseif ti < 2.0
        ev = ev + 800*(2.0-ti)/1.0;
    end

    % Incarcare vehicule electrice la pranz (t=5-7s = 12:00-14:00)
    if ti >= 5.0 && ti < 7.0
        n_masini = 2;   % 2 masini la incarcat
        ev = ev + n_masini * 7400;  % 7.4 kW/masina (AC charging)
    end

    P_event(i) = ev;
end

%% Fluctuatii realiste
P_noise = 300*sin(2*pi*0.5*t)  + ...
          200*sin(2*pi*1.2*t)  + ...
          150*cos(2*pi*2.3*t)  + ...
          100*sin(2*pi*4.1*t+0.7) + ...
           80*cos(2*pi*6.7*t+1.2);

%% Total cu limitare
P_total = P_base_interp + P_event + P_noise;
P_load  = max(min(P_total, 25000), 5000);

%% Putere reactiva — PF variabil (0.88-0.97)
PF_profile = zeros(N,1);
for i = 1:N
    ti = t(i);
    % PF de baza depinde de tipul de sarcina dominanta
    PF_base = 0.95;
    % AC si motoare reduc PF
    if P_event(i) > 3000
        PF_base = PF_base - 0.05;
    end
    % Incarcatoare EV la pranz
    if ti >= 5.0 && ti < 7.0
        PF_base = PF_base - 0.03;
    end
    PF_profile(i) = max(min(PF_base, 0.97), 0.88);
end
Q_load = P_load .* tan(acos(PF_profile));

%% =========================================================
%  CREARE TIMESERIES
% =========================================================
G1_ts     = timeseries(G1,     t);
G2_ts     = timeseries(G2,     t);
G3_ts     = timeseries(G3,     t);
G4_ts     = timeseries(G4,     t);
P_load_ts = timeseries(P_load, t);
Q_load_ts = timeseries(Q_load, t);

%% =========================================================
%  RAPORT
% =========================================================
fprintf('IRADIANȚĂ (W/m²):\n');
fprintf('  Inv1: max=%4.0f, medie=%4.0f\n', max(G1), mean(G1));
fprintf('  Inv2: max=%4.0f, medie=%4.0f  (S-SE, varf devreme)\n', max(G2), mean(G2));
fprintf('  Inv3: max=%4.0f, medie=%4.0f  (umbra dimineata)\n', max(G3), mean(G3));
fprintf('  Inv4: max=%4.0f, medie=%4.0f  (S-SV, varf tarziu)\n', max(G4), mean(G4));

fprintf('\nSARCINĂ:\n');
fprintf('  P: min=%.1f kW, max=%.1f kW, medie=%.1f kW\n', ...
    min(P_load)/1000, max(P_load)/1000, mean(P_load)/1000);
fprintf('  Q: min=%.1f kVAR, max=%.1f kVAR\n', ...
    min(Q_load)/1000, max(Q_load)/1000);

%% =========================================================
%  VIZUALIZARE
% =========================================================
ore_labels = {'07:00','08:00','09:00','10:00','11:00','12:00', ...
              '13:00','14:00','15:00','16:00','17:00','18:00','19:00'};

figure('Name','Zi de Mai 07:00-19:00','Position',[20 20 1300 850]);

%% Plot 1 — Iradianță
subplot(3,1,1);
hold on;
patch([t; flipud(t)], [G1; zeros(N,1)], [1 0.9 0.2], ...
    'FaceAlpha',0.15,'EdgeColor','none');
p1=plot(t, G1, 'b-',  'LineWidth',1.8);
p2=plot(t, G2, 'r-',  'LineWidth',1.8);
p3=plot(t, G3, 'g-',  'LineWidth',1.8);
p4=plot(t, G4, 'm-',  'LineWidth',1.8);
% Marcheaza evenimentele de nor
for c=1:size(cloud_events,1)
    xregion(cloud_events(c,1), cloud_events(c,1)+cloud_events(c,2), ...
        'FaceColor','k','FaceAlpha',0.08);
end
ylabel('G [W/m²]'); ylim([0 1050]); xlim([0 12]); grid on;
title('Iradianță Solară per Invertor — Zi de Mai, România (07:00-19:00)');
legend([p1 p2 p3 p4], 'Inv1 (S, 35°)', 'Inv2 (S-SE, 35°)', ...
    'Inv3 (S, umbră matin)', 'Inv4 (S-SV, 30°)', 'Location','north','NumColumns',4);
xticks(0:1:12); xticklabels(ore_labels); xtickangle(30);
text(0.1, 950, 'Nori →','FontSize',8,'Color',[0.4 0.4 0.4]);

%% Plot 2 — Sarcina
subplot(3,1,2);
hold on;
area(t, P_load/1000, 'FaceColor',[0.2 0.5 0.8],'FaceAlpha',0.4, ...
    'EdgeColor',[0.1 0.3 0.6],'LineWidth',1.5);
plot(t, P_base_interp/1000, 'k--', 'LineWidth',1.5, 'DisplayName','Profil baza');
% Marcheaza incarcarea EV
xregion(5, 7, 'FaceColor','g','FaceAlpha',0.1);
text(5.5, 24.5, 'EV charging','FontSize',8,'Color',[0 0.5 0],'HorizontalAlignment','center');
% Marcheaza pranzul
xregion(4.5, 6.5, 'FaceColor','r','FaceAlpha',0.05);
ylabel('P [kW]'); ylim([0 28]); xlim([0 12]); grid on;
title('Sarcină Dinamică — Microgrid Industrial (07:00-19:00)');
legend('P(t)','Profil baza','Location','northwest');
xticks(0:1:12); xticklabels(ore_labels); xtickangle(30);

%% Plot 3 — Balanta energetica
subplot(3,1,3);
% Putere PV estimata (eficienta sistem ~0.85, MPPT)
eta_sys  = 0.85;
P_rated  = 36000;   % 36 kW per invertor la 1000 W/m²
P_pv_inv = @(G) max(G/1000 * P_rated * eta_sys, 0);
P_gen = (P_pv_inv(G1) + P_pv_inv(G2) + P_pv_inv(G3) + P_pv_inv(G4));

hold on;
plot(t, P_gen/1000,  'g-', 'LineWidth',2, 'DisplayName','P_{PV} total (est.)');
plot(t, P_load/1000, 'b-', 'LineWidth',2, 'DisplayName','P_{sarcina}');
surplus = P_gen - P_load;
fill([t; flipud(t)], [max(surplus,0)/1000; zeros(N,1)], ...
    'g','FaceAlpha',0.2,'EdgeColor','none','DisplayName','Surplus PV');
fill([t; flipud(t)], [min(surplus,0)/1000; zeros(N,1)], ...
    'r','FaceAlpha',0.2,'EdgeColor','none','DisplayName','Deficit');
yline(0,'k--','LineWidth',1);
ylabel('[kW]'); xlabel('Ora'); ylim([-10 130]); xlim([0 12]); grid on;
title('Balanță Energetică Estimată');
legend('Location','northeast','NumColumns',2);
xticks(0:1:12); xticklabels(ore_labels); xtickangle(30);

fprintf('\nVariabile Workspace:\n');
fprintf('  G1_ts, G2_ts, G3_ts, G4_ts, P_load_ts, Q_load_ts\n');
fprintf('\nConectare Simulink:\n');
fprintf('  G1_ts → Irradiance Inv1 (From Workspace, dt=0.005, Linear)\n');
fprintf('  G2_ts → Irradiance Inv2\n');
fprintf('  G3_ts → Irradiance Inv3\n');
fprintf('  G4_ts → Irradiance Inv4\n');
fprintf('  P_load_ts → port P Dynamic Load\n');
fprintf('  Q_load_ts → port Q Dynamic Load\n');
fprintf('  StopTime = 12\n');