/*
27. Um certo produto irá sofrer aumento de acordo com a tabela 3.4. Faça um programa que leia o valor atual, calcule e escreva o novo valor do produto. O programa também deve mostrar uma mensagem de acordo com a tabela 3.5.
*/

#include <stdio.h>

#define REAJUSTE_5 0.05
#define REAJUSTE_10 0.10
#define REAJUSTE_15 0.15

int main()
{
    float valor_produto, novo_valor, acrescimo;

    printf("Insira o valor do produto: ");
    scanf("%f", &valor_produto);

    if (valor_produto <= 50.0)
    {
        novo_valor = valor_produto + (valor_produto * REAJUSTE_5);
        acrescimo = valor_produto * REAJUSTE_5;
    }

    if (valor_produto >= 50.0 && valor_produto <= 100)
    {
        novo_valor = valor_produto + (valor_produto * REAJUSTE_10);
        acrescimo = valor_produto * REAJUSTE_10;
    }

    if (valor_produto > 100.0)
    {
        novo_valor = valor_produto + (valor_produto * REAJUSTE_15);
        acrescimo = valor_produto * REAJUSTE_15;
    }

    printf("Valor com acrescimo: %.2f", novo_valor);
    printf("\nValor do acrescimo: %.2f", acrescimo);

    if (valor_produto <= 80.0)
    {
        printf("\nBarato.");
    }

    if (valor_produto >= 80.0 && valor_produto <= 120)
    {
        printf("\nNormal.");
    }

    if (valor_produto >= 120 && valor_produto <= 200)
    {
        printf("\nCaro.");
    }

    if (valor_produto > 200)
    {
        printf("\nMuito caro.");
    }

    return 0;
}