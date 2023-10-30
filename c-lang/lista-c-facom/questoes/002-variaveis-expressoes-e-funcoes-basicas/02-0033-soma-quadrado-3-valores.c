/*
33. Faça um program que leia três valores e apresente, como resultado final, a soma dos
quadrados dos três valores lidos.
*/


#include <stdio.h>

//i decided to not use the math lib

int main ()
{
		double n1, n2, n3, result;
		
		printf ("N1: ");
		scanf ("%lf", &n1);


		printf ("N2: ");
		scanf ("%lf", &n2);

		printf ("N3: ");
		scanf ("%lf", &n3);


		result = (n1*n1) + (n2*n2) + (n3*n3);
		
		printf ("Result: %.2lf", result);

}