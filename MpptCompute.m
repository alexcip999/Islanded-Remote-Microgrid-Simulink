%% =========================================================
%  CALCULATOR PARAMETRI MPPT — Amerisolar AS_6M_360W_PERC
%  =========================================================
%  Modifica doar sectiunea "CONFIGURATIE ARRAY" de mai jos.
%  Scriptul calculeaza automat D_init, D_max, D_min, Delta_D
%  si parametrii condensatoarelor Cpv si Cdc.
%
%  Autor: Licenta - Algoritm distribuit descentralizat microgrid
% ==========================================================

% clc; clear;

%% =========================================================
%  SECTIUNEA 1 — MODIFICA AICI
%  =========================================================

% Configuratie array
N_serie    = 15;   % Numar panouri in serie   (Series cells = N_serie * 72)
N_paralel  = 25;   % Numar siruri paralele    (Parallel strings)

% Tensiunea DC dorita la iesirea Boost Converter [V]
Vout_target = 1000;  % [V]

% =========================================================
%  SECTIUNEA 2 — DATE PANOU (nu modifica)
%  Amerisolar AS_6M_360W_PERC — valori per panou la STC
% =========================================================
Vmpp_panou = 38.9;   % [V]  tensiune la putere maxima
Voc_panou  = 47.6;   % [V]  tensiune open-circuit
Impp_panou =  9.26;  % [A]  curent la putere maxima
Isc_panou  =  9.64;  % [A]  curent short-circuit
Pmax_panou = 360;    % [W]  putere maxima
N_celule   = 72;     % celule per panou

%% =========================================================
%  SECTIUNEA 3 — CALCULE AUTOMATE (nu modifica)
%  =========================================================

% --- Parametrii array-ului complet ---
Vmpp_array = N_serie   * Vmpp_panou;   % [V]
Voc_array  = N_serie   * Voc_panou;    % [V]
Impp_array = N_paralel * Impp_panou;   % [A]
Isc_array  = N_paralel * Isc_panou;    % [A]
Pmpp_array = Vmpp_array * Impp_array;  % [W]

% --- Duty cycle de operare ---
D_operare = 1 - Vmpp_array / Vout_target;

% Verificare: D trebuie sa fie intre 0.3 si 0.9
if D_operare < 0.3 || D_operare > 0.9
    warning(['D_operare = %.3f este in afara intervalului sigur [0.3, 0.9].\n' ...
             'Ajusteaza N_serie sau Vout_target.'], D_operare);
end

% --- Parametrii MPPT ---
D_init  = round(D_operare, 3);          % porneste exact la D de operare
D_max   = min(0.92, D_operare + 0.10);  % +10% marja de siguranta
D_min   = max(0.20, D_operare - 0.15);  % -15% marja de siguranta
Delta_D = 0.001;                         % pas de perturbatie fin

% --- Tensiuni condensatori ---
V_Cpv = Vmpp_array;    % tensiunea initiala pe condensatorul de intrare [V]
V_Cdc = Vout_target;   % tensiunea initiala pe condensatorul de iesire  [V]

% --- Verificare Vout la D_max si D_min ---
Vout_la_Dmax = Vmpp_array / (1 - D_max);
Vout_la_Dmin = Vmpp_array / (1 - D_min);

%% =========================================================
%  SECTIUNEA 4 — AFISARE REZULTATE
%  =========================================================

fprintf('\n');
fprintf('========================================================\n');
fprintf('  PARAMETRII ARRAY PV\n');
fprintf('========================================================\n');
fprintf('  Configuratie:     %d panouri serie x %d siruri paralele\n', N_serie, N_paralel);
fprintf('  Series cells:     %d  (= %d x %d celule)\n', N_serie*N_celule, N_serie, N_celule);
fprintf('  Parallel strings: %d\n', N_paralel);
fprintf('--------------------------------------------------------\n');
fprintf('  Vmpp_array  = %7.1f V\n', Vmpp_array);
fprintf('  Voc_array   = %7.1f V\n', Voc_array);
fprintf('  Impp_array  = %7.1f A\n', Impp_array);
fprintf('  Isc_array   = %7.1f A\n', Isc_array);
fprintf('  Pmpp_array  = %7.1f W  (%.1f kW)\n', Pmpp_array, Pmpp_array/1000);
fprintf('========================================================\n');
fprintf('\n');
fprintf('========================================================\n');
fprintf('  PARAMETRII MPPT — seteaza in blocul MPPT Algorithm\n');
fprintf('========================================================\n');
fprintf('  D_init   = %.4f\n', D_init);
fprintf('  D_max    = %.4f\n', D_max);
fprintf('  D_min    = %.4f\n', D_min);
fprintf('  Delta_D  = %.4f\n', Delta_D);
fprintf('--------------------------------------------------------\n');
fprintf('  Verificare tensiuni Boost:\n');
fprintf('  Vout la D_operare = %.1f V  (target: %d V)\n', ...
        Vmpp_array/(1-D_operare), Vout_target);
fprintf('  Vout la D_max     = %.1f V  (maxim posibil)\n', Vout_la_Dmax);
fprintf('  Vout la D_min     = %.1f V  (minim posibil)\n', Vout_la_Dmin);
fprintf('========================================================\n');
fprintf('\n');
fprintf('========================================================\n');
fprintf('  PARAMETRII CONDENSATORI\n');
fprintf('========================================================\n');
fprintf('  Cpv — condensator intrare DC-DC:\n');
fprintf('    Capacitance     = 4700e-6 F  (4700 uF)\n');
fprintf('    Initial voltage = %.1f V\n', V_Cpv);
fprintf('    Priority        = High\n');
fprintf('\n');
fprintf('  Cdc — condensator iesire DC-DC:\n');
fprintf('    Capacitance     = 4700e-6 F  (4700 uF)\n');
fprintf('    Initial voltage = %.1f V\n', V_Cdc);
fprintf('    Priority        = High\n');
fprintf('========================================================\n');
fprintf('\n');

%% =========================================================
%  SECTIUNEA 5 — EXPORT IN WORKSPACE (pentru Simulink)
%  =========================================================
assignin('base', 'D_init',  D_init);
assignin('base', 'D_max',   D_max);
assignin('base', 'D_min',   D_min);
assignin('base', 'Delta_D', Delta_D);
assignin('base', 'V_Cpv',   V_Cpv);
assignin('base', 'V_Cdc',   V_Cdc);

fprintf('Variabilele D_init, D_max, D_min, Delta_D, V_Cpv, V_Cdc\n');
fprintf('au fost exportate in Workspace Matlab.\n\n');