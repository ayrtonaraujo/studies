/*
16. Faça um programa que determine e mostre os 50 primeiros múltiplos de 3, considerando números positivos.
*/

#include <stdio.h>

#define LIMITE 50
#define MULTIPLO 3

int main()
{
    for (int i = 0; i <= LIMITE; i++)
    {
        printf("%d\t", MULTIPLO * i);
    }

    return 0;
}