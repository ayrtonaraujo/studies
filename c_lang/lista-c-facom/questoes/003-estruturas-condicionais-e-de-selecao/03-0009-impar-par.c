/*
9. Faça um programa que leia um número inteiro e verifique se o mesmo é par ou ímpar.
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Insira o numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf ("O numero eh par.");
    }

    else
    {
        printf("\nO numero eh impar.");
    }

    return 0;
}