/*
1. Um supermercado resolveu calcular a média de valores de seus produtos, sabendo que este supermercado possui 5 produtos, faça um pseudocódigo que calcule esta média.
*/

#include <stdio.h>

int main()
{
    float preco_produto = 0;
    int i;

    for (i = 1; i <= 5; i++)
    {
        float somatorio;

        printf("Insira o valor do produto %d: ", i);

        scanf("%f", &somatorio);

        preco_produto += somatorio;
    }

    float media = preco_produto / 5.0;

    printf("\nMedia: %.2f\n", media);

    return 0;
}