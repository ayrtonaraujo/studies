/*
43. Faça um programa que leia um caractere e imprima esse caractere como se fosse um
número inteiro. Que número é esse que foi exibido pelo programa?
*/


#include <stdio.h>

int main ()
{
	char char_1;
	
	printf ("Your char: ");
	scanf ("%c", &char_1);
	
	printf ("Integer: %ld\n It's the ASCII code of '%c'.", char_1, char_1);
	
	
}