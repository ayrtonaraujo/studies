/*
22. Faça um programa que converta uma temperatura em Kelvin para Celsius.
*/


#include <stdio.h>


int main ()
{
	float celsius, kelvin;
	
	printf ("Kelvin: ");
	scanf ("%f", &kelvin);
	
	
	celsius = kelvin - 273.15;
	
	printf ("\nCelsius: %.2f", celsius);
	
return 0;
		
}