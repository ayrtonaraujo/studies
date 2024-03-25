/*
29. Faça um programa para calcular a área de um quadrado. O tamanho do lado deve ser
informado pelo usuário.
*/

#include <stdio.h>

int main()
{
	float height, area;

	printf("Height: ");
	scanf("%f", &height);

	area = height * height;

	printf("Area: %.2f m%c", area, 253); // 253 = ASCII of ²
}