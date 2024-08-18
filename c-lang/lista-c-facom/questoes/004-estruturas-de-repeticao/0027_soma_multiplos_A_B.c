/*
27. Faça um programa que leia dois números A e B entre 0 e 1000. O programa deverá somar todos os valores menores que 1000 e que sejam múltiplos de A ou B, mas não de ambos.
*/

#include <stdio.h>

int main()
{
    int A, B, contador = 0, soma = 0;

    do
    {
        printf("Valor A: ");
        scanf("%d", &A);

        printf("Valor B: ");
        scanf("%d", &B);

    } while (A < 0 || A > 1000 || B < 0 || B > 1000);

    while (contador < 999)
    {
        contador++;

        if ((contador % A == 0 || contador % B == 0) && !(contador % A == 0 && contador % B == 0))
        {
            soma += contador;
        }
    }

    printf("Resultado: %d", soma);

    return 0;
}