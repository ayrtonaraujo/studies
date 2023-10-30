/*
31. Faça um programa para calcular a área de um triângulo retângulo. O tamanho da base
e altura do triângulo devem ser informados pelo usuário.
*/

#include <stdio.h>

int main ()
{
	float height, base, area;
	
	
	printf ("Height: ");
	scanf ("%f", &height);
	
	printf ("Base: ");
	scanf ("%f", &base);
	
	
	area = (height * base) / 2.0;
	
	printf ("Area of triangle: %.2f m%c", area, 253); //253 = ASCII of ²
	
}