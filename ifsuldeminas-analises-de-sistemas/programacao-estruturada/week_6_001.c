/*
1. Um supermercado resolveu calcular a média de valores de seus produtos, sabendo que este supermercado possui 20 produtos, faça um programa que calcule esta média.
*/

#include <stdio.h>

int main()
{
    float valorProduto, valorTotal = 0;
    for (int i = 1; i <= 20; i++)
    {
        printf("Produto %d: ", i);
        scanf("%f", &valorProduto);

        valorTotal += valorProduto;
    }

    printf("---------------\nValor Total: %.2f", valorTotal);

    return 0;
}