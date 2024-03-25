/*
34. Faça um programa que leia quatro notas de um aluno e calcule a sua média obtida.
*/

#include <stdio.h>

float media(float a, float b, float c, float d);

int main()
{
	float number1, number2, number3, number4, result;

	printf("N1: ");
	scanf("%f", &number1);

	printf("N2: ");
	scanf("%f", &number2);

	printf("N3: ");
	scanf("%f", &number3);

	printf("N4: ");
	scanf("%f", &number4);

	result = media(number1, number2, number3, number4);

	printf("\n|N1\t|N2\t|N3\t|N4\t|Media\t|\n|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|", number1, number2, number3, number4, result);
}

float media(float a, float b, float c, float d)
{

	float media;
	media = (a + b + c + d) / 4.0;
	return media;
}