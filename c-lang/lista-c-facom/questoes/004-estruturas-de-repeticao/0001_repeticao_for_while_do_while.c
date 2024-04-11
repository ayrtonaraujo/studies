/*
Faça um programa que mostre na tela os números naturais entre 0 (zero) e 100. Faça três versões desse programa, cada uma usando uma estrutura de repetição diferente (for, while, do-while). Qual das três estruturas é a mais adequada para este programa? Por que?
*/

#include <stdio.h>

int main()
{
    int i = 1, j = 1, k = 1;

    while (j < 100)
    {
        printf("%d ", j);
        j++;
    }

    printf("\n\n");

    for (i = 1; i < 100; i++)
    {
        printf("%d ", i);
    }

    printf("\n\n");

    do
    {
        printf("%d ", k);
        k++;
    } while (k <= 99);

    return 0;
}