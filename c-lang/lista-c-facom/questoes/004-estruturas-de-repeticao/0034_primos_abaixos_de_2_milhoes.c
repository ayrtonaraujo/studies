/*
34. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.
*/

#include <stdio.h>

#define LIMITE 2000000

int main ()
{
    int soma = 0, i;

    for (i = 2; i <= LIMITE; i++)
    {
        if (i % 1 == 0 && i % i == 0)
        {
            soma += i;
        }
    }

    printf ("Soma: %d", soma);
}