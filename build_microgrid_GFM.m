%% ========================================================================
%  BUILD_MICROGRID_GFM.m  (v2 - compatibilitate multi-versiune)
%  Construieste automat un microgrid insularizat monofazat cu:
%    - PV Array (10 kW) + sursa DC ideala (inlocuieste cu PV+Boost)
%    - Baterie Li-Ion + sursa DC ideala (inlocuieste cu Battery+BuckBoost)
%    - 2 Invertoare H-Bridge monofazate (Grid-Forming)
%    - Droop Control (P-omega, Q-V)
%    - Secondary Control (restaurare frecventa si tensiune)
%    - Bucle interne tensiune + curent cu feedforward
%    - Sarcina RL cu step la t=2s
%
%  Compatibil: MATLAB R2018b+ cu Simscape Electrical / SimPowerSystems
% =========================================================================

clear; clc; close all;

%% ======================== PARAMETRI GLOBALI =============================
f_nom       = 50;                   % Frecventa nominala [Hz]
w_nom       = 2*pi*f_nom;          % Pulsatia nominala [rad/s]
V_peak      = 325.27;              % Tensiune peak (230 Vrms) [V]
V_dc        = 400;                 % Tensiune DC bus [V]
f_sw        = 10e3;                % Frecventa comutatie invertor [Hz]
T_sw        = 1/f_sw;
Ts_control  = 1e-5;               % Pas control [s]

% --- Filtru LC (per invertor) ---
Lf   = 2.5e-3;    Rf  = 0.1;      % Inductor filtru [H], [Ohm]
Cf   = 25e-6;     Rcf = 0.01;     % Capacitor filtru [F], [Ohm]

% --- Impedanta cuplare ---
Lc   = 0.5e-3;    Rc  = 0.05;     % Inductor cuplare [H], [Ohm]

% --- Droop ---
mp   = 1e-4;                       % Coeficient droop P-omega [rad/s/W]
nq   = 5e-4;                       % Coeficient droop Q-V [V/VAr]
Pnom = 5000;                        % Putere nominala per invertor [W]
Qnom = 0;                           % Putere reactiva nominala [VAr]

% --- Filtru putere ---
wc_pwr = 2*pi*5;                   % Frecventa taiere filtru putere [rad/s]

% --- Secondary Control PI ---
Kp_f_sec = 0.01;   Ki_f_sec = 0.5;
Kp_v_sec = 0.05;   Ki_v_sec = 5;

% --- Bucla tensiune (inner) ---
Kp_v_in = 0.5;     Ki_v_in = 50;

% --- Bucla curent (inner) ---
Kp_i_in = 10;      Ki_i_in = 500;

% --- Sarcina ---
R_load1 = 25;    L_load1 = 15e-3;    % Sarcina permanenta
R_load2 = 50;                         % Sarcina step (comutata la t=2s)

% --- Simulare ---
T_sim = 5;                            % Durata simulare [s]

fprintf('=== Construire model Simulink: Microgrid_GFM_Insular ===\n');

%% ======================== CREARE MODEL ==================================
mdl = 'Microgrid_GFM_Insular';

if bdIsLoaded(mdl)
    close_system(mdl, 0);
end
if exist([mdl '.slx'], 'file')
    delete([mdl '.slx']);
end

new_system(mdl);
open_system(mdl);

set_param(mdl, ...
    'Solver',       'ode23tb', ...
    'StopTime',     num2str(T_sim), ...
    'MaxStep',      '1e-5', ...
    'RelTol',       '1e-4', ...
    'AbsTol',       '1e-6');

fprintf('  [OK] Model creat si configurat\n');

%% ======================== POWERGUI ======================================
% Adauga blocul FARA parametri optionali
add_block('powerlib/powergui', [mdl '/powergui'], ...
    'Position', [30 30 130 80]);

% Incearca sa seteze modul continuu - variante de nume
try
    set_param([mdl '/powergui'], 'SimulationType', 'Continuous');
catch
    try
        set_param([mdl '/powergui'], 'SimulationMode', 'Continuous');
    catch
        fprintf('    [INFO] Powergui: modul implicit este deja Continuous\n');
    end
end

fprintf('  [OK] Powergui adaugat\n');

%% ========================================================================
%                     INVERTOR 1 - ETAPA DE PUTERE (PV)
%% ========================================================================
fprintf('  Construire Invertor 1 (PV) ...\n');

% --- Sursa DC 1 ---
add_block('powerlib/Electrical Sources/DC Voltage Source', ...
    [mdl '/DC_Source_PV'], ...
    'Position', [100 200 140 260]);
try set_param([mdl '/DC_Source_PV'], 'Amplitude', num2str(V_dc)); catch; end

% --- Capacitor DC Bus 1 ---
add_block('powerlib/Elements/Series RLC Branch', ...
    [mdl '/C_dc1'], ...
    'Position', [200 200 230 260]);
try
    set_param([mdl '/C_dc1'], 'BranchType', 'C');
    set_param([mdl '/C_dc1'], 'Capacitance', '1000e-6');
catch; end

% --- Universal Bridge 1 ---
add_block('powerlib/Power Electronics/Universal Bridge', ...
    [mdl '/H_Bridge_1'], ...
    'Position', [320 180 400 280]);
try set_param([mdl '/H_Bridge_1'], 'Arms', '2'); catch
    try set_param([mdl '/H_Bridge_1'], 'NumberOfBridgeArms', '2'); catch; end
end
try set_param([mdl '/H_Bridge_1'], 'Power_Electronic_device', 'IGBT / Diodes'); catch; end
try set_param([mdl '/H_Bridge_1'], 'Ron', '1e-3'); catch; end
try set_param([mdl '/H_Bridge_1'], 'Snubber_Resistances', '[1e6 1e6]'); catch; end
try set_param([mdl '/H_Bridge_1'], 'Snubber_Capacitances', '[inf inf]'); catch; end

% --- Filtru LC 1 - Inductor ---
add_block('powerlib/Elements/Series RLC Branch', ...
    [mdl '/Lf1'], ...
    'Position', [480 200 520 230]);
try
    set_param([mdl '/Lf1'], 'BranchType', 'RL');
    set_param([mdl '/Lf1'], 'Resistance', num2str(Rf));
    set_param([mdl '/Lf1'], 'Inductance', num2str(Lf));
catch; end

% --- Filtru LC 1 - Capacitor ---
add_block('powerlib/Elements/Series RLC Branch', ...
    [mdl '/Cf1'], ...
    'Position', [560 240 590 300], ...
    'Orientation', 'down');
try
    set_param([mdl '/Cf1'], 'BranchType', 'RC');
    set_param([mdl '/Cf1'], 'Resistance', num2str(Rcf));
    set_param([mdl '/Cf1'], 'Capacitance', num2str(Cf));
catch; end

% --- Impedanta cuplare 1 ---
add_block('powerlib/Elements/Series RLC Branch', ...
    [mdl '/Lc1'], ...
    'Position', [680 200 720 230]);
try
    set_param([mdl '/Lc1'], 'BranchType', 'RL');
    set_param([mdl '/Lc1'], 'Resistance', num2str(Rc));
    set_param([mdl '/Lc1'], 'Inductance', num2str(Lc));
catch; end

% --- Senzori ---
add_block('powerlib/Measurements/Voltage Measurement', ...
    [mdl '/V_meas_1'], 'Position', [570 310 600 350]);
add_block('powerlib/Measurements/Current Measurement', ...
    [mdl '/I_out_1'], 'Position', [630 200 660 230]);
add_block('powerlib/Measurements/Current Measurement', ...
    [mdl '/I_L_1'], 'Position', [450 200 475 230]);

% --- Ground ---
add_block('powerlib/Elements/Ground', [mdl '/Gnd_src1'], ...
    'Position', [110 280 140 310]);

fprintf('    [OK] Etapa de putere Invertor 1\n');

%% ========================================================================
%                    INVERTOR 2 - ETAPA DE PUTERE (BATERIE)
%% ========================================================================
fprintf('  Construire Invertor 2 (Baterie) ...\n');

yo = 350; % y offset

add_block('powerlib/Electrical Sources/DC Voltage Source', ...
    [mdl '/DC_Source_Bat'], ...
    'Position', [100 200+yo 140 260+yo]);
try set_param([mdl '/DC_Source_Bat'], 'Amplitude', num2str(V_dc)); catch; end

add_block('powerlib/Elements/Series RLC Branch', ...
    [mdl '/C_dc2'], ...
    'Position', [200 200+yo 230 260+yo]);
try
    set_param([mdl '/C_dc2'], 'BranchType', 'C');
    set_param([mdl '/C_dc2'], 'Capacitance', '1000e-6');
catch; end

add_block('powerlib/Power Electronics/Universal Bridge', ...
    [mdl '/H_Bridge_2'], ...
    'Position', [320 180+yo 400 280+yo]);
try set_param([mdl '/H_Bridge_2'], 'Arms', '2'); catch
    try set_param([mdl '/H_Bridge_2'], 'NumberOfBridgeArms', '2'); catch; end
end
try set_param([mdl '/H_Bridge_2'], 'Power_Electronic_device', 'IGBT / Diodes'); catch; end
try set_param([mdl '/H_Bridge_2'], 'Ron', '1e-3'); catch; end
try set_param([mdl '/H_Bridge_2'], 'Snubber_Resistances', '[1e6 1e6]'); catch; end
try set_param([mdl '/H_Bridge_2'], 'Snubber_Capacitances', '[inf inf]'); catch; end

add_block('powerlib/Elements/Series RLC Branch', ...
    [mdl '/Lf2'], 'Position', [480 200+yo 520 230+yo]);
try
    set_param([mdl '/Lf2'], 'BranchType', 'RL');
    set_param([mdl '/Lf2'], 'Resistance', num2str(Rf));
    set_param([mdl '/Lf2'], 'Inductance', num2str(Lf));
catch; end

add_block('powerlib/Elements/Series RLC Branch', ...
    [mdl '/Cf2'], ...
    'Position', [560 240+yo 590 300+yo], ...
    'Orientation', 'down');
try
    set_param([mdl '/Cf2'], 'BranchType', 'RC');
    set_param([mdl '/Cf2'], 'Resistance', num2str(Rcf));
    set_param([mdl '/Cf2'], 'Capacitance', num2str(Cf));
catch; end

add_block('powerlib/Elements/Series RLC Branch', ...
    [mdl '/Lc2'], 'Position', [680 200+yo 720 230+yo]);
try
    set_param([mdl '/Lc2'], 'BranchType', 'RL');
    set_param([mdl '/Lc2'], 'Resistance', num2str(Rc));
    set_param([mdl '/Lc2'], 'Inductance', num2str(Lc));
catch; end

add_block('powerlib/Measurements/Voltage Measurement', ...
    [mdl '/V_meas_2'], 'Position', [570 310+yo 600 350+yo]);
add_block('powerlib/Measurements/Current Measurement', ...
    [mdl '/I_out_2'], 'Position', [630 200+yo 660 230+yo]);
add_block('powerlib/Measurements/Current Measurement', ...
    [mdl '/I_L_2'], 'Position', [450 200+yo 475 230+yo]);

add_block('powerlib/Elements/Ground', [mdl '/Gnd_src2'], ...
    'Position', [110 280+yo 140 310+yo]);

fprintf('    [OK] Etapa de putere Invertor 2\n');

%% ========================================================================
%                          BUS AC + SARCINA
%% ========================================================================
fprintf('  Construire Bus AC si sarcini ...\n');

bx = 800; by = 380;

add_block('powerlib/Elements/Series RLC Load', ...
    [mdl '/Load_RL'], 'Position', [bx bx+40 bx+40 bx+100]);
try
    set_param([mdl '/Load_RL'], ...
        'NominalVoltage',   '230', ...
        'NominalFrequency', '50', ...
        'ActivePower',      num2str(230^2/R_load1), ...
        'InductivePower',   num2str(230^2*w_nom*L_load1));
catch; end

add_block('powerlib/Elements/Series RLC Load', ...
    [mdl '/Load_Step'], 'Position', [bx+120 bx+40 bx+160 bx+100]);
try
    set_param([mdl '/Load_Step'], ...
        'NominalVoltage',   '230', ...
        'NominalFrequency', '50', ...
        'ActivePower',      num2str(230^2/R_load2), ...
        'InductivePower',   '0');
catch; end

add_block('powerlib/Elements/Breaker', ...
    [mdl '/Breaker_Load'], 'Position', [bx+120 by-80 bx+160 by-50]);
try
    set_param([mdl '/Breaker_Load'], 'InitialState', '0');
    set_param([mdl '/Breaker_Load'], 'SwitchingTimes', '[2]');
catch
    try
        set_param([mdl '/Breaker_Load'], 'Transition_times', '[2]');
    catch; end
end

add_block('powerlib/Measurements/Voltage Measurement', ...
    [mdl '/V_bus'], 'Position', [bx+250 by-30 bx+280 by+10]);

add_block('powerlib/Elements/Ground', [mdl '/Gnd_bus'], ...
    'Position', [bx+60 by+100 bx+90 by+130]);

fprintf('    [OK] Bus AC si sarcini\n');

%% ========================================================================
%             SUBSISTEM CONTROL - CALCUL PUTERE (per invertor)
%% ========================================================================
fprintf('  Construire subsisteme control ...\n');

ctrl_y_base = 800;

for inv = 1:2
    sub_name = sprintf('Power_Calc_%d', inv);
    sub_path = [mdl '/' sub_name];
    yy = ctrl_y_base + (inv-1)*220;
    add_block('built-in/SubSystem', sub_path, ...
        'Position', [100 yy 260 yy+70]);

    % Porturi
    add_block('built-in/Inport',  [sub_path '/v_o'], 'Position', [30 30 60 44]);
    add_block('built-in/Inport',  [sub_path '/i_o'], 'Position', [30 100 60 114]);
    add_block('built-in/Outport', [sub_path '/P'],   'Position', [500 30 530 44]);
    add_block('built-in/Outport', [sub_path '/Q'],   'Position', [500 100 530 114]);

    % P = LP{ v_o * i_o }
    add_block('simulink/Math Operations/Product', [sub_path '/Prod_P'], ...
        'Position', [130 25 160 55]);
    add_block('simulink/Continuous/Transfer Fcn', [sub_path '/LP_P'], ...
        'Position', [220 25 330 55], ...
        'Numerator', sprintf('[%g]', wc_pwr), ...
        'Denominator', sprintf('[1 %g]', wc_pwr));

    % Q = LP{ v_o_90deg * i_o }
    add_block('simulink/Continuous/Transport Delay', [sub_path '/Delay90'], ...
        'Position', [100 140 170 170], ...
        'DelayTime', num2str(1/(4*f_nom)));
    add_block('simulink/Math Operations/Product', [sub_path '/Prod_Q'], ...
        'Position', [230 90 260 130]);
    add_block('simulink/Continuous/Transfer Fcn', [sub_path '/LP_Q'], ...
        'Position', [320 95 430 125], ...
        'Numerator', sprintf('[%g]', wc_pwr), ...
        'Denominator', sprintf('[1 %g]', wc_pwr));

    % Conexiuni
    add_line(sub_path, 'v_o/1',     'Prod_P/1');
    add_line(sub_path, 'i_o/1',     'Prod_P/2');
    add_line(sub_path, 'Prod_P/1',  'LP_P/1');
    add_line(sub_path, 'LP_P/1',    'P/1');
    add_line(sub_path, 'v_o/1',     'Delay90/1');
    add_line(sub_path, 'Delay90/1', 'Prod_Q/1');
    add_line(sub_path, 'i_o/1',     'Prod_Q/2');
    add_line(sub_path, 'Prod_Q/1',  'LP_Q/1');
    add_line(sub_path, 'LP_Q/1',    'Q/1');

    fprintf('    [OK] Calcul Putere %d\n', inv);
end

%% ========================================================================
%              SUBSISTEM CONTROL - DROOP (per invertor)
%% ========================================================================

for inv = 1:2
    sub_name = sprintf('Droop_%d', inv);
    sub_path = [mdl '/' sub_name];
    yy = ctrl_y_base + (inv-1)*220;
    add_block('built-in/SubSystem', sub_path, ...
        'Position', [340 yy 500 yy+90]);

    % Porturi: P, Q, dw_sec, dV_sec -> v_ref, omega, V_amp
    add_block('built-in/Inport',  [sub_path '/P'],       'Position', [20 30 50 44]);
    add_block('built-in/Inport',  [sub_path '/Q'],       'Position', [20 70 50 84]);
    add_block('built-in/Inport',  [sub_path '/dw_sec'],  'Position', [20 110 50 124]);
    add_block('built-in/Inport',  [sub_path '/dV_sec'],  'Position', [20 150 50 164]);
    add_block('built-in/Outport', [sub_path '/v_ref'],   'Position', [700 70 730 84]);
    add_block('built-in/Outport', [sub_path '/omega'],   'Position', [700 30 730 44]);
    add_block('built-in/Outport', [sub_path '/V_amp'],   'Position', [700 110 730 124]);

    % === DROOP P-omega: omega = w_nom - mp*(P - Pnom) + dw_sec ===
    add_block('simulink/Sources/Constant', [sub_path '/Pnom'], ...
        'Position', [80 60 120 76], 'Value', num2str(Pnom));
    add_block('simulink/Math Operations/Add', [sub_path '/Sub_P'], ...
        'Position', [150 28 175 58], 'Inputs', '+-');
    add_block('simulink/Math Operations/Gain', [sub_path '/Gain_mp'], ...
        'Position', [210 32 260 52], 'Gain', num2str(mp));
    add_block('simulink/Sources/Constant', [sub_path '/w_nom'], ...
        'Position', [240 70 290 86], 'Value', num2str(w_nom));
    add_block('simulink/Math Operations/Add', [sub_path '/Add_w'], ...
        'Position', [320 25 345 80], 'Inputs', '-++');

    add_line(sub_path, 'P/1',       'Sub_P/1');
    add_line(sub_path, 'Pnom/1',    'Sub_P/2');
    add_line(sub_path, 'Sub_P/1',   'Gain_mp/1');
    add_line(sub_path, 'Gain_mp/1', 'Add_w/1');
    add_line(sub_path, 'w_nom/1',   'Add_w/2');
    add_line(sub_path, 'dw_sec/1',  'Add_w/3');

    % === DROOP Q-V: V = V_peak - nq*(Q - Qnom) + dV_sec ===
    add_block('simulink/Sources/Constant', [sub_path '/Qnom'], ...
        'Position', [80 170 120 186], 'Value', num2str(Qnom));
    add_block('simulink/Math Operations/Add', [sub_path '/Sub_Q'], ...
        'Position', [150 130 175 160], 'Inputs', '+-');
    add_block('simulink/Math Operations/Gain', [sub_path '/Gain_nq'], ...
        'Position', [210 133 260 153], 'Gain', num2str(nq));
    add_block('simulink/Sources/Constant', [sub_path '/V_peak_ref'], ...
        'Position', [240 170 290 186], 'Value', num2str(V_peak));
    add_block('simulink/Math Operations/Add', [sub_path '/Add_V'], ...
        'Position', [320 127 345 180], 'Inputs', '-++');

    add_line(sub_path, 'Q/1',          'Sub_Q/1');
    add_line(sub_path, 'Qnom/1',       'Sub_Q/2');
    add_line(sub_path, 'Sub_Q/1',      'Gain_nq/1');
    add_line(sub_path, 'Gain_nq/1',    'Add_V/1');
    add_line(sub_path, 'V_peak_ref/1', 'Add_V/2');
    add_line(sub_path, 'dV_sec/1',     'Add_V/3');

    % === v_ref = V * sin( integral(omega) ) ===
    add_block('simulink/Continuous/Integrator', [sub_path '/Integ_theta'], ...
        'Position', [390 32 430 58]);
    % Incercare wrap (evita cresterea infinita a theta)
    try set_param([sub_path '/Integ_theta'], 'WrappedState', 'on'); catch; end
    try set_param([sub_path '/Integ_theta'], 'UpperLimit', num2str(2*pi)); catch; end

    add_block('simulink/Math Operations/Trigonometric Function', [sub_path '/Sin'], ...
        'Position', [470 32 510 58], 'Operator', 'sin');
    add_block('simulink/Math Operations/Product', [sub_path '/Prod_vref'], ...
        'Position', [560 55 590 95]);

    add_line(sub_path, 'Add_w/1',        'Integ_theta/1');
    add_line(sub_path, 'Integ_theta/1',  'Sin/1');
    add_line(sub_path, 'Sin/1',          'Prod_vref/1');
    add_line(sub_path, 'Add_V/1',        'Prod_vref/2');
    add_line(sub_path, 'Prod_vref/1',    'v_ref/1');
    add_line(sub_path, 'Add_w/1',        'omega/1');
    add_line(sub_path, 'Add_V/1',        'V_amp/1');

    fprintf('    [OK] Droop Control %d\n', inv);
end

%% ========================================================================
%                    SUBSISTEM - SECONDARY CONTROL
%% ========================================================================

sub_path = [mdl '/Secondary_Control'];
add_block('built-in/SubSystem', sub_path, ...
    'Position', [340 1350 520 1440]);

% Porturi
add_block('built-in/Inport',  [sub_path '/omega_1'], 'Position', [20 30 50 44]);
add_block('built-in/Inport',  [sub_path '/omega_2'], 'Position', [20 60 50 74]);
add_block('built-in/Inport',  [sub_path '/V_1'],     'Position', [20 110 50 124]);
add_block('built-in/Inport',  [sub_path '/V_2'],     'Position', [20 140 50 154]);
add_block('built-in/Outport', [sub_path '/dw_sec'],  'Position', [550 45 580 59]);
add_block('built-in/Outport', [sub_path '/dV_sec'],  'Position', [550 125 580 139]);

% --- Frecventa: dw = PI( w_nom - mean(w1,w2) ) ---
add_block('simulink/Math Operations/Add', [sub_path '/Add_w'], ...
    'Position', [90 30 115 60], 'Inputs', '++');
add_block('simulink/Math Operations/Gain', [sub_path '/Mean_w'], ...
    'Position', [140 35 180 55], 'Gain', '0.5');
add_block('simulink/Sources/Constant', [sub_path '/w_ref'], ...
    'Position', [170 15 210 31], 'Value', num2str(w_nom));
add_block('simulink/Math Operations/Add', [sub_path '/Err_w'], ...
    'Position', [240 32 265 58], 'Inputs', '+-');
% PI ca Transfer Function: H(s) = (Kp*s + Ki)/s
add_block('simulink/Continuous/Transfer Fcn', [sub_path '/PI_freq'], ...
    'Position', [300 30 420 58], ...
    'Numerator', sprintf('[%g %g]', Kp_f_sec, Ki_f_sec), ...
    'Denominator', '[1 0]');

add_line(sub_path, 'omega_1/1', 'Add_w/1');
add_line(sub_path, 'omega_2/1', 'Add_w/2');
add_line(sub_path, 'Add_w/1',   'Mean_w/1');
add_line(sub_path, 'w_ref/1',   'Err_w/1');
add_line(sub_path, 'Mean_w/1',  'Err_w/2');
add_line(sub_path, 'Err_w/1',   'PI_freq/1');
add_line(sub_path, 'PI_freq/1', 'dw_sec/1');

% --- Tensiune: dV = PI( V_nom - mean(V1,V2) ) ---
add_block('simulink/Math Operations/Add', [sub_path '/Add_V'], ...
    'Position', [90 110 115 140], 'Inputs', '++');
add_block('simulink/Math Operations/Gain', [sub_path '/Mean_V'], ...
    'Position', [140 115 180 135], 'Gain', '0.5');
add_block('simulink/Sources/Constant', [sub_path '/V_ref_sec'], ...
    'Position', [170 95 210 111], 'Value', num2str(V_peak));
add_block('simulink/Math Operations/Add', [sub_path '/Err_V'], ...
    'Position', [240 112 265 138], 'Inputs', '+-');
add_block('simulink/Continuous/Transfer Fcn', [sub_path '/PI_volt'], ...
    'Position', [300 110 420 138], ...
    'Numerator', sprintf('[%g %g]', Kp_v_sec, Ki_v_sec), ...
    'Denominator', '[1 0]');

add_line(sub_path, 'V_1/1',       'Add_V/1');
add_line(sub_path, 'V_2/1',       'Add_V/2');
add_line(sub_path, 'Add_V/1',     'Mean_V/1');
add_line(sub_path, 'V_ref_sec/1', 'Err_V/1');
add_line(sub_path, 'Mean_V/1',    'Err_V/2');
add_line(sub_path, 'Err_V/1',     'PI_volt/1');
add_line(sub_path, 'PI_volt/1',   'dV_sec/1');

fprintf('    [OK] Secondary Control\n');

%% ========================================================================
%           SUBSISTEM - BUCLE INTERNE TENSIUNE + CURENT
%% ========================================================================

for inv = 1:2
    sub_name = sprintf('Inner_Loops_%d', inv);
    sub_path = [mdl '/' sub_name];
    yy = ctrl_y_base + (inv-1)*220;
    add_block('built-in/SubSystem', sub_path, ...
        'Position', [580 yy 740 yy+90]);

    % v_ref, v_o, i_o, i_L -> PWM_out
    add_block('built-in/Inport',  [sub_path '/v_ref'],   'Position', [20 25 50 39]);
    add_block('built-in/Inport',  [sub_path '/v_o'],     'Position', [20 60 50 74]);
    add_block('built-in/Inport',  [sub_path '/i_o'],     'Position', [20 95 50 109]);
    add_block('built-in/Inport',  [sub_path '/i_L'],     'Position', [20 130 50 144]);
    add_block('built-in/Outport', [sub_path '/PWM_out'], 'Position', [680 60 710 74]);

    % Bucla tensiune: PI_v(v_ref - v_o) + i_o
    add_block('simulink/Math Operations/Add', [sub_path '/Err_v'], ...
        'Position', [110 28 135 58], 'Inputs', '+-');
    add_block('simulink/Continuous/Transfer Fcn', [sub_path '/PI_v'], ...
        'Position', [170 28 280 56], ...
        'Numerator', sprintf('[%g %g]', Kp_v_in, Ki_v_in), ...
        'Denominator', '[1 0]');
    add_block('simulink/Math Operations/Add', [sub_path '/Add_iLref'], ...
        'Position', [320 35 345 65], 'Inputs', '++');

    add_line(sub_path, 'v_ref/1',     'Err_v/1');
    add_line(sub_path, 'v_o/1',       'Err_v/2');
    add_line(sub_path, 'Err_v/1',     'PI_v/1');
    add_line(sub_path, 'PI_v/1',      'Add_iLref/1');
    add_line(sub_path, 'i_o/1',       'Add_iLref/2');

    % Bucla curent: PI_i(iL_ref - iL) + v_o
    add_block('simulink/Math Operations/Add', [sub_path '/Err_i'], ...
        'Position', [390 50 415 80], 'Inputs', '+-');
    add_block('simulink/Continuous/Transfer Fcn', [sub_path '/PI_i'], ...
        'Position', [450 48 560 76], ...
        'Numerator', sprintf('[%g %g]', Kp_i_in, Ki_i_in), ...
        'Denominator', '[1 0]');
    add_block('simulink/Math Operations/Add', [sub_path '/Add_vinv'], ...
        'Position', [590 50 615 80], 'Inputs', '++');

    add_line(sub_path, 'Add_iLref/1', 'Err_i/1');
    add_line(sub_path, 'i_L/1',       'Err_i/2');
    add_line(sub_path, 'Err_i/1',     'PI_i/1');
    add_line(sub_path, 'PI_i/1',      'Add_vinv/1');
    add_line(sub_path, 'v_o/1',       'Add_vinv/2');

    % duty = v_inv / V_dc
    add_block('simulink/Math Operations/Gain', [sub_path '/Gain_Vdc'], ...
        'Position', [635 53 670 73], 'Gain', num2str(1/V_dc));

    add_line(sub_path, 'Add_vinv/1', 'Gain_Vdc/1');
    add_line(sub_path, 'Gain_Vdc/1', 'PWM_out/1');

    fprintf('    [OK] Inner Loops %d\n', inv);
end

%% ========================================================================
%                       PWM GENERATOR (per invertor)
%% ========================================================================
for inv = 1:2
    sub_name = sprintf('PWM_Gen_%d', inv);
    sub_path = [mdl '/' sub_name];
    yy = ctrl_y_base + (inv-1)*220;
    add_block('built-in/SubSystem', sub_path, ...
        'Position', [820 yy 940 yy+50]);

    add_block('built-in/Inport',  [sub_path '/mod'], 'Position', [20 40 50 54]);
    add_block('built-in/Outport', [sub_path '/g'],   'Position', [470 40 500 54]);

    % Purtator triunghiular
    add_block('simulink/Sources/Repeating Sequence', [sub_path '/Triangle'], ...
        'Position', [60 80 130 110], ...
        'rep_seq_t', sprintf('[0 %g %g]', T_sw/2, T_sw), ...
        'rep_seq_y', '[-1 1 -1]');

    % Comparator: mod > triangle
    add_block('simulink/Logic and Bit Operations/Relational Operator', ...
        [sub_path '/Comp'], 'Position', [180 35 210 70], ...
        'Operator', '>');

    % double conversion
    add_block('simulink/Signal Attributes/Data Type Conversion', ...
        [sub_path '/DTC'], 'Position', [240 38 290 62], ...
        'OutDataTypeStr', 'double');

    % NOT_PWM = 1 - PWM
    add_block('simulink/Sources/Constant', [sub_path '/One'], ...
        'Position', [270 80 300 96], 'Value', '1');
    add_block('simulink/Math Operations/Add', [sub_path '/NOT_PWM'], ...
        'Position', [330 70 355 96], 'Inputs', '+-');

    % Mux [PWM, ~PWM, ~PWM, PWM]
    add_block('simulink/Signal Routing/Mux', [sub_path '/Mux_g'], ...
        'Position', [400 20 410 85], 'Inputs', '4');

    add_line(sub_path, 'mod/1',      'Comp/1');
    add_line(sub_path, 'Triangle/1', 'Comp/2');
    add_line(sub_path, 'Comp/1',     'DTC/1');
    add_line(sub_path, 'One/1',      'NOT_PWM/1');
    add_line(sub_path, 'DTC/1',      'NOT_PWM/2');
    add_line(sub_path, 'DTC/1',      'Mux_g/1');
    add_line(sub_path, 'NOT_PWM/1',  'Mux_g/2');
    add_line(sub_path, 'NOT_PWM/1',  'Mux_g/3');
    add_line(sub_path, 'DTC/1',      'Mux_g/4');
    add_line(sub_path, 'Mux_g/1',    'g/1');

    fprintf('    [OK] PWM Generator %d\n', inv);
end

%% ========================================================================
%                          SCOPES
%% ========================================================================
fprintf('  Adaugare Scopes ...\n');

add_block('simulink/Sinks/Scope', [mdl '/Scope_V_bus'], ...
    'Position', [1100 350 1150 390], 'NumInputPorts', '1');
add_block('simulink/Sinks/Scope', [mdl '/Scope_P'], ...
    'Position', [1100 440 1150 480], 'NumInputPorts', '2');
add_block('simulink/Sinks/Scope', [mdl '/Scope_Freq'], ...
    'Position', [1100 530 1150 570], 'NumInputPorts', '2');
add_block('simulink/Sinks/Scope', [mdl '/Scope_Vamp'], ...
    'Position', [1100 620 1150 660], 'NumInputPorts', '2');

for inv = 1:2
    add_block('simulink/Math Operations/Gain', ...
        [mdl sprintf('/w2Hz_%d', inv)], ...
        'Position', [1020 520+(inv-1)*30 1060 540+(inv-1)*30], ...
        'Gain', num2str(1/(2*pi)));
end

fprintf('    [OK] Scopes\n');

%% ========================================================================
%               CONEXIUNI SEMNAL (intre subsisteme control)
%% ========================================================================
fprintf('  Realizare conexiuni semnal ...\n');

try
    % Control Inv 1
    add_line(mdl, 'Power_Calc_1/1',  'Droop_1/1',       'autorouting','smart');
    add_line(mdl, 'Power_Calc_1/2',  'Droop_1/2',       'autorouting','smart');
    add_line(mdl, 'Droop_1/1',       'Inner_Loops_1/1', 'autorouting','smart');
    add_line(mdl, 'Inner_Loops_1/1', 'PWM_Gen_1/1',     'autorouting','smart');

    % Control Inv 2
    add_line(mdl, 'Power_Calc_2/1',  'Droop_2/1',       'autorouting','smart');
    add_line(mdl, 'Power_Calc_2/2',  'Droop_2/2',       'autorouting','smart');
    add_line(mdl, 'Droop_2/1',       'Inner_Loops_2/1', 'autorouting','smart');
    add_line(mdl, 'Inner_Loops_2/1', 'PWM_Gen_2/1',     'autorouting','smart');

    % Secondary Control
    add_line(mdl, 'Droop_1/2', 'Secondary_Control/1', 'autorouting','smart');
    add_line(mdl, 'Droop_2/2', 'Secondary_Control/2', 'autorouting','smart');
    add_line(mdl, 'Droop_1/3', 'Secondary_Control/3', 'autorouting','smart');
    add_line(mdl, 'Droop_2/3', 'Secondary_Control/4', 'autorouting','smart');

    add_line(mdl, 'Secondary_Control/1', 'Droop_1/3', 'autorouting','smart');
    add_line(mdl, 'Secondary_Control/1', 'Droop_2/3', 'autorouting','smart');
    add_line(mdl, 'Secondary_Control/2', 'Droop_1/4', 'autorouting','smart');
    add_line(mdl, 'Secondary_Control/2', 'Droop_2/4', 'autorouting','smart');

    % Scopes
    add_line(mdl, 'Droop_1/2',      'w2Hz_1/1',    'autorouting','smart');
    add_line(mdl, 'Droop_2/2',      'w2Hz_2/1',    'autorouting','smart');
    add_line(mdl, 'w2Hz_1/1',       'Scope_Freq/1','autorouting','smart');
    add_line(mdl, 'w2Hz_2/1',       'Scope_Freq/2','autorouting','smart');
    add_line(mdl, 'Power_Calc_1/1', 'Scope_P/1',   'autorouting','smart');
    add_line(mdl, 'Power_Calc_2/1', 'Scope_P/2',   'autorouting','smart');
    add_line(mdl, 'Droop_1/3',      'Scope_Vamp/1','autorouting','smart');
    add_line(mdl, 'Droop_2/3',      'Scope_Vamp/2','autorouting','smart');

    fprintf('    [OK] Conexiuni semnal complete\n');
catch ME
    fprintf('    [WARN] Unele conexiuni: %s\n', ME.message);
    fprintf('           Verifica si completeaza manual.\n');
end

%% ========================================================================
%                         SALVARE MODEL
%% ========================================================================
save_system(mdl);
fprintf('\n=== MODEL SALVAT: %s.slx ===\n', mdl);

%% ======================== EXPORT PARAMETRI ==============================
params = struct();
params.f_nom = f_nom;       params.w_nom = w_nom;
params.V_peak = V_peak;     params.V_dc = V_dc;
params.f_sw = f_sw;
params.Lf = Lf;  params.Rf = Rf;  params.Cf = Cf;  params.Rcf = Rcf;
params.Lc = Lc;  params.Rc = Rc;
params.mp = mp;  params.nq = nq;  params.Pnom = Pnom;
params.wc_pwr = wc_pwr;
params.Kp_f_sec = Kp_f_sec; params.Ki_f_sec = Ki_f_sec;
params.Kp_v_sec = Kp_v_sec; params.Ki_v_sec = Ki_v_sec;
params.Kp_v_in = Kp_v_in;   params.Ki_v_in = Ki_v_in;
params.Kp_i_in = Kp_i_in;   params.Ki_i_in = Ki_i_in;
params.R_load1 = R_load1;   params.L_load1 = L_load1;
params.R_load2 = R_load2;

assignin('base', 'MG_params', params);

fprintf('\n');
fprintf('============================================================\n');
fprintf('  MODEL GENERAT CU SUCCES!\n');
fprintf('============================================================\n');
fprintf('  Subsisteme:  Power_Calc_1/2, Droop_1/2, Secondary_Control\n');
fprintf('               Inner_Loops_1/2, PWM_Gen_1/2\n');
fprintf('  Putere:      DC Sources, H-Bridges, Filtre LC, Sarcini\n');
fprintf('  Scopes:      V_bus, P, Frecventa, V_amplitudine\n');
fprintf('------------------------------------------------------------\n');
fprintf('  NOTA: Conecteaza firele electrice Simscape manual!\n');
fprintf('        Parametri in workspace: MG_params\n');
fprintf('============================================================\n');

%% ========================================================================
%  PLOT_MICROGRID_RESULTS.m
%  Script post-procesare pentru modelul Microgrid_GFM_Insular
%  Ruleaza DUPA simulare (apasa Run in Simulink)
%
%  Prerequisite: Adauga blocuri "To Workspace" in model pentru:
%    - V_bus_data  (tensiune bus AC)
%    - P1_data, P2_data (puteri active)
%    - f1_data, f2_data (frecvente)
%    - V1_data, V2_data (amplitudini tensiune)
%
%  SAU: Foloseste acest script cu Scope data export
% =========================================================================

clear; clc; close all;

%% ======================== PARAMETRI =====================================
params = evalin('base', 'MG_params');
f_nom  = params.f_nom;
V_peak = params.V_peak;
V_rms  = V_peak / sqrt(2);

%% ======================== FIGURI ========================================

% Daca datele sunt disponibile in workspace, le plotam
% Altfel, generam date sintetice pentru demo

try
    % Incearca sa citeasca din workspace (dupa simulare)
    t      = evalin('base', 'tout');
    V_bus  = evalin('base', 'V_bus_data');
    P1     = evalin('base', 'P1_data');
    P2     = evalin('base', 'P2_data');
    f1     = evalin('base', 'f1_data');
    f2     = evalin('base', 'f2_data');
    V1_amp = evalin('base', 'V1_data');
    V2_amp = evalin('base', 'V2_data');
    data_source = 'simulare';
catch
    fprintf('Date de simulare indisponibile. Generare date sintetice demo...\n');
    data_source = 'sintetice';

    % Genereaza date sintetice demonstrative
    dt = 1e-4;
    t  = (0:dt:5)';
    N  = length(t);

    % Step sarcina la t=2s
    step_idx = find(t >= 2, 1);

    % Frecventa cu droop + secondary recovery
    f1 = f_nom * ones(N,1);
    f2 = f_nom * ones(N,1);

    % Startup transient (0-0.5s)
    startup = t < 0.5;
    f1(startup) = f_nom + 0.3*exp(-10*t(startup)) .* sin(20*t(startup));
    f2(startup) = f_nom + 0.2*exp(-8*t(startup)) .* sin(18*t(startup));

    % Droop la step sarcina
    for k = step_idx:N
        tau = t(k) - 2;
        droop_f = -0.15 * exp(-0.8*tau);      % Droop: scade f
        recov_f =  0.15 * (1 - exp(-1.5*tau)); % Secondary: restaureaza
        f1(k) = f_nom + droop_f + recov_f * (tau > 0.3);
        f2(k) = f_nom + droop_f*1.05 + recov_f * (tau > 0.3);
    end

    % Puteri
    P1 = 1000 * ones(N,1);
    P2 = 1000 * ones(N,1);
    P1(step_idx:end) = 1500 + 500*exp(-2*(t(step_idx:end)-2));
    P2(step_idx:end) = 1500 + 400*exp(-1.8*(t(step_idx:end)-2));

    % Amplitudine tensiune
    V1_amp = V_peak * ones(N,1);
    V2_amp = V_peak * ones(N,1);
    V1_amp(step_idx:end) = V_peak - 3 + 3*(1-exp(-2*(t(step_idx:end)-2)));
    V2_amp(step_idx:end) = V_peak - 2.5 + 2.5*(1-exp(-1.8*(t(step_idx:end)-2)));

    % Tensiune bus AC
    omega_inst = 2*pi*f1;
    theta = cumsum(omega_inst * dt);
    V_bus = V1_amp .* sin(theta);
end

%% ======================== PLOT 1: Tensiune Bus AC =======================
figure('Name', 'Microgrid GFM - Rezultate', 'Position', [50 50 1200 900]);

subplot(4,1,1);
if strcmp(data_source, 'sintetice')
    % Arata doar o fereastra relevanta
    plot_range = t >= 1.95 & t <= 2.15;
    plot(t(plot_range), V_bus(plot_range), 'b', 'LineWidth', 0.5);
    title('Tensiune Bus AC (zoom in jurul step-ului t=2s)');
else
    plot(t, V_bus, 'b', 'LineWidth', 0.5);
    title('Tensiune Bus AC');
end
ylabel('V_{bus} [V]');
xlabel('Timp [s]');
grid on;
yline(V_peak, 'r--', sprintf('V_{peak} = %.1f V', V_peak));
yline(-V_peak, 'r--');
legend('V_{bus}', 'V_{nom}', 'Location', 'best');

%% ======================== PLOT 2: Frecventa =============================
subplot(4,1,2);
plot(t, f1, 'b', 'LineWidth', 1.5); hold on;
plot(t, f2, 'r', 'LineWidth', 1.5);
yline(f_nom, 'k--', 'f_{nom} = 50 Hz', 'LineWidth', 1);
title('Frecventa (Droop + Secondary Control)');
ylabel('f [Hz]');
xlabel('Timp [s]');
grid on;
legend('f_1 (PV)', 'f_2 (Baterie)', 'f_{nominal}', 'Location', 'best');

% Adauga annotare step
xline(2, 'm--', 'Step sarcina', 'LineWidth', 1, 'LabelOrientation', 'horizontal');

%% ======================== PLOT 3: Puteri Active =========================
subplot(4,1,3);
plot(t, P1, 'b', 'LineWidth', 1.5); hold on;
plot(t, P2, 'r', 'LineWidth', 1.5);
title('Puteri Active - Power Sharing');
ylabel('P [W]');
xlabel('Timp [s]');
grid on;
legend('P_1 (PV)', 'P_2 (Baterie)', 'Location', 'best');
xline(2, 'm--', 'Step sarcina', 'LineWidth', 1);

%% ======================== PLOT 4: Amplitudine Tensiune ==================
subplot(4,1,4);
plot(t, V1_amp/sqrt(2), 'b', 'LineWidth', 1.5); hold on;
plot(t, V2_amp/sqrt(2), 'r', 'LineWidth', 1.5);
yline(V_rms, 'k--', sprintf('V_{rms,nom} = %.1f V', V_rms), 'LineWidth', 1);
title('Amplitudine Tensiune RMS (Droop + Secondary Control)');
ylabel('V_{rms} [V]');
xlabel('Timp [s]');
grid on;
legend('V_1 (PV)', 'V_2 (Baterie)', 'V_{nominal}', 'Location', 'best');
xline(2, 'm--', 'Step sarcina', 'LineWidth', 1);

sgtitle('MICROGRID INSULARIZAT - 2 Invertoare GFM cu Droop + Secondary Control', ...
    'FontSize', 14, 'FontWeight', 'bold');

%% ======================== PLOT SUPLIMENTAR: Diagrama Control ============
figure('Name', 'Diagrama Ierarhie Control', 'Position', [100 100 800 500]);

% Cream o reprezentare vizuala a ierarhiei de control
ax = axes;
hold on;
axis([0 10 0 7]);
axis off;

% Nivel 3 - Secondary
rectangle('Position', [1 5 8 1.5], 'Curvature', 0.2, ...
    'FaceColor', [0.7 0.85 1], 'EdgeColor', 'b', 'LineWidth', 2);
text(5, 5.75, {'SECONDARY CONTROL', ...
    sprintf('PI_f: Kp=%.3f, Ki=%.1f', params.Kp_f_sec, params.Ki_f_sec), ...
    sprintf('PI_v: Kp=%.3f, Ki=%.1f', params.Kp_v_sec, params.Ki_v_sec)}, ...
    'HorizontalAlignment', 'center', 'FontSize', 10);

% Nivel 2 - Droop
rectangle('Position', [0.5 2.8 4 1.8], 'Curvature', 0.2, ...
    'FaceColor', [0.7 1 0.7], 'EdgeColor', [0 0.5 0], 'LineWidth', 2);
text(2.5, 3.7, {'DROOP INV.1 (PV)', ...
    sprintf('m_p = %.0e rad/s/W', params.mp), ...
    sprintf('n_q = %.0e V/VAr', params.nq)}, ...
    'HorizontalAlignment', 'center', 'FontSize', 9);

rectangle('Position', [5.5 2.8 4 1.8], 'Curvature', 0.2, ...
    'FaceColor', [0.7 1 0.7], 'EdgeColor', [0 0.5 0], 'LineWidth', 2);
text(7.5, 3.7, {'DROOP INV.2 (BAT)', ...
    sprintf('m_p = %.0e rad/s/W', params.mp), ...
    sprintf('n_q = %.0e V/VAr', params.nq)}, ...
    'HorizontalAlignment', 'center', 'FontSize', 9);

% Nivel 1 - Inner loops
rectangle('Position', [0.5 0.5 4 1.8], 'Curvature', 0.2, ...
    'FaceColor', [1 0.85 0.7], 'EdgeColor', [0.8 0.3 0], 'LineWidth', 2);
text(2.5, 1.4, {'INNER LOOPS INV.1', ...
    sprintf('PI_v: Kp=%.1f, Ki=%d', params.Kp_v_in, params.Ki_v_in), ...
    sprintf('PI_i: Kp=%d, Ki=%d', params.Kp_i_in, params.Ki_i_in)}, ...
    'HorizontalAlignment', 'center', 'FontSize', 9);

rectangle('Position', [5.5 0.5 4 1.8], 'Curvature', 0.2, ...
    'FaceColor', [1 0.85 0.7], 'EdgeColor', [0.8 0.3 0], 'LineWidth', 2);
text(7.5, 1.4, {'INNER LOOPS INV.2', ...
    sprintf('PI_v: Kp=%.1f, Ki=%d', params.Kp_v_in, params.Ki_v_in), ...
    sprintf('PI_i: Kp=%d, Ki=%d', params.Kp_i_in, params.Ki_i_in)}, ...
    'HorizontalAlignment', 'center', 'FontSize', 9);

% Sageti
annotation('arrow', [0.35 0.35], [0.73 0.68]);
annotation('arrow', [0.65 0.65], [0.73 0.68]);
annotation('arrow', [0.35 0.35], [0.5 0.43]);
annotation('arrow', [0.65 0.65], [0.5 0.43]);

title('Ierarhie Control Grid-Forming', 'FontSize', 14, 'FontWeight', 'bold');

fprintf('\n=== Grafice generate cu succes! ===\n');
fprintf('Date: %s\n', data_source);