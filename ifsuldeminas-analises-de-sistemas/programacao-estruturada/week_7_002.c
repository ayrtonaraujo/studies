/*
2. Construa um programa que imprime a soma de todos os valores positivos digitados pelo usuário até que ele digite um número negativo.
*/

#include <stdio.h>

int main()
{
    float num = 0, contador = 0;

    while (num >= 0)
    {
        contador += num;

        printf("Insira um valor: ");
        scanf("%f", &num);
    }

    printf("\nSoma total: %.2f", contador);

    return 0;
}