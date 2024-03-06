/*
 Considere a tabela 3.6. Escreva um programa que, dado o valor de venda, imprima a comissão que deverá ser paga ao fornecedor.
*/

#include <stdio.h>

#define PORCENTAGEM_16 0.16
#define PORCENTAGEM_14 0.14

int main()
{
    float venda_mensal, comissao;

    printf("Insira o valor: ");
    scanf("%f", &venda_mensal);

    if (venda_mensal >= 100000.0)
    {
        comissao = 700.0 + (venda_mensal * PORCENTAGEM_16);
    }

    if (venda_mensal < 100000.0 && venda_mensal >= 80000.0)
    {
        comissao = 650.0 + (venda_mensal * PORCENTAGEM_14);
    }

    if (venda_mensal < 80000.0 && venda_mensal >= 60000.0)
    {
        comissao = 600.0 + (venda_mensal * PORCENTAGEM_14);
    }

    if (venda_mensal < 60000.0 && venda_mensal >= 40000.0)
    {
        comissao = 550.0 + (venda_mensal * PORCENTAGEM_14);
    }

    if (venda_mensal < 40000.0 && venda_mensal >= 20000.0)
    {
        comissao = 500.0 + (venda_mensal * PORCENTAGEM_14);
    }

    if (venda_mensal < 20000.0)
    {
        comissao = 400.0 + (venda_mensal * PORCENTAGEM_14);
    }

    printf ("\n* Comissao: %.2f *", comissao);

    return 0;
}