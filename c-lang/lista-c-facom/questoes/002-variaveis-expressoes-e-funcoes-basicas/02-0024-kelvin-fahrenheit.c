/*
24. Faça um programa para converter de Kelvin para graus Fahrenheit.
*/

#include <stdio.h>


int main ()
{
	float kelvin, fahren;
	
	printf ("Kelvin: ");
	scanf ("%f", &kelvin);
	
	
	fahren = (kelvin - 273.15)*(9.0/5.0) + 32.0;
	
	printf ("\nFahrenheit: %.2f", fahren);
	
	return 0;
	
		
}