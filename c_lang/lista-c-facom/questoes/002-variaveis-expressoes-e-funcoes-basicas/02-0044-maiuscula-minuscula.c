/*
44. Faça um programa que converta uma letra maiúscula em letra minúscula.
Dica: use a tabela ASCII.
*/


#include <stdio.h>

int main ()
{
	char maiuscula;
	int minuscula;
	
	
	printf ("Insert your CAPS letter: ");
	scanf ("%c", &maiuscula);
	
	minuscula = (int) maiuscula + 32;
	
	printf ("The letter in smallcaps: %c", minuscula);
	
	
	
}