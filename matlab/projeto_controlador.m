clc, close all, clear all

% ---------------------------------------------------------------
% ------------------ Projeto dos controladores ------------------
% ---------------------------------------------------------------
%{
T = 0.05; % Tempo de discretização
num = [85.12];
den = [1 20.05 100.5];

% {
% Controlador de velocidade
G_vel = tf(num,den);
G_vel_discrete = c2d(G_vel, T);
pidTuner(G_vel);
% }

% {
% Controlador de posição
num_int = [1];
den_int = [1 0];
G = tf(num, den);
G_int = tf(num_int, den_int);
G_pos = series(G, G_int);
G_pos_discrete = c2d(G_pos, T);
pidTuner(G_pos);
% }

C_vel_discrete = c2d(C_vel, T);
C_pos_discrete = c2d(C_pos, T);
%}