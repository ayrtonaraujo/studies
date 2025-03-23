/*
Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>

int main()
{
    int i, j, numero_usuario, incremento = 1;

    do
    {
        printf("Insira um valor: ");
        scanf("%d", &numero_usuario);
    } while (numero_usuario <= 0);

    for (i = 1; i <= numero_usuario; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d ", incremento);
            incremento++;
        }

        printf("\n");
    }

    return 0;
}