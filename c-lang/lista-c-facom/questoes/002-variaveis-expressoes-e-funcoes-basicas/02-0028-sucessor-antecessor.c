/*
28. Faça um programa que leia um número e exiba o seu antecessor e sucessor.
*/

#include <stdio.h>

float numero;

int main ()
{
	printf ("Number: ");
	scanf ("%f", &numero);
	
		
	printf ("Before: %.2f", numero - 1.0);
	printf ("\nAfter: %.2f", numero + 1.0);
	
	return 0;
	
}