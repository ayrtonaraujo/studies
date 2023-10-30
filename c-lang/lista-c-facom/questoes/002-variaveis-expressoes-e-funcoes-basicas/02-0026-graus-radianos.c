/*
26. Faça um programa para ler um ângulo em graus e convertê-lo em radianos.
*/

#include <stdio.h>

#define PI 3.141592



int main ()
{
	float angle, rad;
    
	printf ("Angle: ");
	scanf ("%f", &angle);
	
	rad = angle * (PI/180.0);
	
	printf ("Rad: %.2f(pi)", rad / PI);
	
return 0;
}