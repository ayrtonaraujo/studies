/*
28. Faça um programa que some os termos de valor par da sequência de Fibonacci, cujos valores não ultrapassem quatro milhões.
*/

#include <stdio.h>

#define LIMITE 4000000

int main()
{
    long fibonacci = 1, soma_pares = 0, anterior = 0;

    while (fibonacci < LIMITE)
    {
        long temp = fibonacci;
        fibonacci += anterior;
        anterior = temp;

        if (fibonacci % 2 == 0)
        {
            soma_pares += fibonacci;
        }
    }

    printf("SOMA: %ld", soma_pares);

    return 0;
}