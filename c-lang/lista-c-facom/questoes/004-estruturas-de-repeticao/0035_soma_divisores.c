/*
35. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Ex: a soma dos divisores do número 66 é:
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/

#include <stdio.h>

int main()
{
    int num_usuario, soma = 0;

    printf("Insira um valor: ");
    scanf("%d", &num_usuario);

    for (int i = 1; i < num_usuario; i++)
    {
        if (num_usuario % i == 0)
        {
            soma += i;
        }
    }

    printf("\nSoma dos divisores: %d", soma);

    return 0;
}