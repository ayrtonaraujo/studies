/*
30. Faça um programa para calcular a área de um retângulo. O tamanho dos lados devem
ser informados pelo usuário.
*/

#include <stdio.h>

int main ()
{
	float height, lenght, area;
	
	
	printf ("Height: ");
	scanf ("%f", &height);
	
	printf ("Lenght: ");
	scanf ("%f", &lenght);
	
	
	area = height * lenght;
	
	printf ("Area: %.2f m%c", area, 253); //253 = ASCII of ²
	
}
