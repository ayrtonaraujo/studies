/*
1. Um supermercado resolveu calcular a média de valores de seus produtos, sabendo que este supermercado possui 5 produtos, faça um pseudocódigo que calcule esta média.
*/

#include <stdio.h>

#define NUMERO_DE_PRODUTOS 5.0

int main()
{
    float preco_produto = 0;
    int i;

    for (i = 1; i <= NUMERO_DE_PRODUTOS; i++)
    {
        float somatorio;

        printf("Insira o valor do produto %d: ", i);

        scanf("%f", &somatorio);

        preco_produto += somatorio;
    }

    // poderia também criar uma função para fazer a media
    float media = preco_produto / NUMERO_DE_PRODUTOS;

    printf("\nMedia: %.2f\n", media);

    return 0;
}