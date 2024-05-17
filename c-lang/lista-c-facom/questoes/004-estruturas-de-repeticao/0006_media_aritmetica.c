/*
6. Faça um programa que permita ao usuário fornecer diversos valores reais. O programa deve, primeiramente, solicitar ao usuário a quantidade de valores a serem entrados. Ao
final, o programa deve informar a média aritmética dos valores lidos.
*/

#include <stdio.h>

int main()
{
    float valor, soma = 0;
    int quantidade_de_entradas;

    printf("Quantidade de Entradas: ");
    scanf("%d", &quantidade_de_entradas);

    while (quantidade_de_entradas <= 0)
    {
        printf("\nDigite um valor maior que 0.");
        printf("\nQuantidade de Entradas: ");
        scanf("%d", &quantidade_de_entradas);
    }

    for (int i = 0; i < quantidade_de_entradas; i++)
    {
        printf("\nInsira o valor %d: ", i + 1);
        scanf("%f", &valor);

        soma = valor + soma;
    }

    printf("\nMedia: %.2f", soma / quantidade_de_entradas);

    return 0;
}