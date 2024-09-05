/*
34. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.
*/

#include <stdio.h>

#define LIMITE 2000000

int main()
{
    int soma = 0, i, j;
    int primo;

    for (i = 2; i <= LIMITE; i++)
    {
        primo = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                primo = 0;
                break;
            }
        }

        if (primo)
        {
            soma += i;
        }
    }

    printf("Soma: %d", soma);
}