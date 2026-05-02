%% Parameters for Three-Phase Remote Microgrid Droop Control Example
%
% This example shows how to use the simplest grid-forming controller, that
% is, droop controller, to maintain reasonable frequency and voltage while 
% load changes in a low-inertia remote microgrid. At 0.8 seconds, an 
% additional 75 kW load is connected to the microgrid. The Scopes subsystem
% contains scopes that allow you to see the simulation results. The 
% inverter is implemented using Ideal Semiconductor Switch blocks.

% Copyright 2021 The MathWorks, Inc.

%% System parameters

Vdc1 = 1000; % Amplitude of DC voltage source 1 [V]
Vdc2 = 1000; % Amplitude of DC voltage source 2 [V]
Vrms = 380; % RMS voltage of AC side [V]
fgrid = 60; % Electrical frequency of grid [Hz]
Lf = 0.002; % RL filter inductance [H]
Rf = 0.02;  % RL filter resistance [Ohm]
omega=60*2*pi; % Grid angular frequency [rad/s]

%% Current Control Parameters

Ts   = 5e-6;    % Fundamental sample time       [s]
fsw  = 10000;   % Inverter switching frequency [Hz]
Tsc  = 1e-4;    % Control sample time           [s]

% Discrete state-space system
Ad=eye(2)+Tsc*[-Rf/Lf omega;-omega -Rf/Lf];
Bd=Tsc*[1/Lf 0; 0 1/Lf];
Cd=eye(2);
Dd=zeros(2);

% State-feedback controller matrix
K = [0.649524600184102,0.0245110115587267;...
    -0.0245110115587320,0.649524600184102]; 

% Extended state-space system
Ae = [Ad eye(2); zeros(2) eye(2)];
Be = [Bd;zeros(2)];
Ce = [eye(2) zeros(2)];
De = zeros(2);

% State and disturbance observer gain
L = [0.999071180548452,0.0188387433448872;...
    -0.0188387433448873,0.999071180548453;...
    0.299957320276558,-0.00754361061851185;...
    0.00754361061851182,0.299957320276558]; 

%% Voltage Control Parameters
Ts_V   = 1e-6;    % Fundamental sample time       [s]
fsw_V  = 6000;    % Inverter switching frequency [Hz]
Tsc_V  = 5e-4;    % Control sample time           [s]

Kp_vd = 0.36;   % Proportional term d-axis voltage controller
Ki_vd = 850;    % Integral term d-axis voltage controller
Kp_vq = 0.36;   % Proportional term q-axis voltage controller
Ki_vq = 850;    % Integral term q-axis voltage controller 

%% Droop Control Parameters
Kdroop_fp = 0.005/2;
Kdroop_vq = 0.005/2;

Ts_DC = 0.001;

consensus = 0;