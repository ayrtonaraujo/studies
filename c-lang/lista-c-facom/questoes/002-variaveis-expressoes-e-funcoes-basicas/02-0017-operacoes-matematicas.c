//17. Faça um programa que leia dois números inteiros e
//calcule sua soma, subtração, multiplicação e divisão.

#include <stdio.h>

int main ()
{
    float numero1, numero2;

    printf ("Numero 1: ");
    scanf ("%f", &numero1);

    printf ("Numero 2: ");
    scanf ("%f", &numero2);

    printf ("\nSoma: %.2f", numero1 + numero2);
    printf ("\nSubtracao: %.2f", numero1 - numero2);
    printf ("\nMultiplicacao: %.2f", numero1 * numero2);
    printf ("\nDivisao: %.2f", numero1 / numero2);

    

    return 0;
}
