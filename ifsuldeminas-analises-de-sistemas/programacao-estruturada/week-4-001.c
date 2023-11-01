/* 1. Desenvolva um programa para calcular e mostrar o desconto no valor de uma compra (fornecido pelo usuário), de acordo com a tabela:
    Valor                           Desconto
    Até R$ 1000,00                  10%
    De R$ 1001,00 a R$ 5000,00      20%
    Acima de R$ 5001,00             30% */

#include <stdio.h>

int main()
{
    float valor_compra;

    printf("Insira o valor: ");
    scanf("%f", &valor_compra);

    if (valor_compra <= 1000.0)
    {
        printf("Desconto: %.2f\nValor com desconto: %.2f", (valor_compra * 0.1), valor_compra - (valor_compra * 0.1));
    }
    if (valor_compra >= 1001.0 && valor_compra <= 5000.0)
    {
        printf("Desconto: %.2f\nValor com desconto: %.2f", (valor_compra * 0.2), valor_compra - (valor_compra * 0.2));
    }
    if (valor_compra > 5001.0)
    {
        printf("Desconto: %.2f\nValor com desconto: %.2f", (valor_compra * 0.3), valor_compra - (valor_compra * 0.3));
    }
    else
    {
        printf("\nSem desconto.");
    }

    return 0;
}