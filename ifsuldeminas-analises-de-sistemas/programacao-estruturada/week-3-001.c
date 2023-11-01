/* 1. Faça um programa que teste se um número é múltiplo de 2. */

#include <stdio.h>
#include <locale.h>

int main()
{
    int numero;

    printf("Numero: ");
    scanf("%d", &numero);

    if ((numero % 2) == 0)
    {
        printf("\n%d é múltiplo de 2.", numero);
    }
    else
    {
        printf("\n%d não é múltiplo de 2.", numero);
    }

    return 0;
}