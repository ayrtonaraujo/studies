/*  1 - Desenvolver um programa que calcule e imprima o custo de transporte de um frete. O programa deverá ler do teclado o valor do custo FIXO do transporte e o destino do frete e calcular o valor do frete de acordo com a seguinte tabela:
    DESTINO    CUSTO
    1          0.5 * FIXO
    2          0.3 * FIXO
    3          0.8 * FIXO
    4          1.5 * FIXO   */

#include <stdio.h>

int main()
{
    float custo_fixo;
    int destino;

    printf("\nInsira o custo fixo: ");
    scanf("%f", &custo_fixo);

    printf("\nInsira o destino (1 a 4): ");
    scanf("%d", &destino);

    while (custo_fixo < 1 && custo_fixo > 4)
    {
        if (custo_fixo < 1)
        {
            printf("\nVoce inseriu um valor menos que 1.");
        }
        if (custo_fixo > 4)
        {
            printf("\nVoce inseriu um valor maior que 4.");
        }

        printf("\nInsira o destino (1 a 4): ");
        scanf("%d", &destino);
    }

    switch (destino)
    {
    case 1:
        printf("\nDestino 1 selecionado.\nValor do frete: R$ %.2f", custo_fixo * 0.5);

        break;
    case 2:
        printf("\nDestino 2 selecionado.\nValor do frete: R$ %.2f", custo_fixo * 0.3);

        break;
    case 3:
        printf("\nDestino 3 selecionado.\nValor do frete: R$ %.2f", custo_fixo * 0.8);

        break;
    case 4:
        printf("\nDestino 4 selecionado.\nValor do frete: R$ %.2f", custo_fixo * 1.5);

        break;
    }

    return 0;
}