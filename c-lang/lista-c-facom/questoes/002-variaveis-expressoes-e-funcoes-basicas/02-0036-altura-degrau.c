/*
36. Faça um programa que receba a altura do degrau de uma escada e a altura que o usuário
deseja alcançar subindo a escada. Calcular e mostrar quantos degraus o usuário deverá
subir para atingir seu objetivo, sem se preocupar com a altura do usuário.
*/

#include <stdio.h>

int main () 
{

float step_height, height_to_climb;
int how_much;

printf ("Step height (cm): ");
scanf ("%f", &step_height);

printf ("Height to Climb (cm): ");
scanf ("%f", &height_to_climb);


how_much = height_to_climb / step_height;

printf ("Number of steps to climb: %d steps", how_much); 
	

return 0;
	
}