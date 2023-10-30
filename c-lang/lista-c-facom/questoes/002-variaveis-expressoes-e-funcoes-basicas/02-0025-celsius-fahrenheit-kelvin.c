/*
25. Faça um programa que leia uma temperatura em graus Celsius e mostre seu valor em
graus Fahrenheit e Kelvin.
*/

#include <stdio.h>


int main ()
{
	float celsius, kelvin, fahren;
	
	printf ("Celsius: ");
	scanf ("%f", &celsius);
	
	
	kelvin = celsius + 273.15;
	fahren = (celsius * 1.8) + 32.0;
	
	printf ("\nFahren: %.2f", fahren);
	printf ("\nKelvin: %.2f", kelvin);
	
	
return 0;
}