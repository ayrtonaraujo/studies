/*
7. Faça um programa que solicite diversos valores ao usuário. Ao final, o programa deve informar o menor valor lido.
*/

#include <stdio.h>
#include <limits.h>
int main()
{
    int numero = 0;
    int menor_valor = INT_MAX;

    printf("Insira os valores. Digite -1 para parar.\n");

    while (1)
    {
        printf("Insira um valor: ");
        scanf("%d", &numero);

        if (numero == -1)
        {
            break;
        }

        if (numero < menor_valor)
        {
            menor_valor = numero;
        }
    }

    if (menor_valor == INT_MAX)
    {
        printf("Nenhum valor válido foi inserido.\n");
    }
    else
    {
        printf("Menor valor: %d\n", menor_valor);
    }

    return 0;
}