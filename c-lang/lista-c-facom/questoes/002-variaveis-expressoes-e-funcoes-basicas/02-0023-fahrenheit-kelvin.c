/*
23. Faça um programa para converter de graus Fahrenheit para Kelvin
*/

#include <stdio.h>


int main ()
{
	float kelvin, fahren;
	
	printf ("Fahrenheit: ");
	scanf ("%f", &fahren);
	
	
	kelvin = (fahren - 32.0) * (5.0/9.0) +273.15;
	
	printf ("\nKelvin: %.3f", kelvin);
	
	return 0;
	
		
}