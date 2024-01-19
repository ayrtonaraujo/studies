/*
20. Uma determinada empresa vende seus produtos em quatro diferentes estados. Cada
estado possui uma taxação de imposto diferente sobre o produto (MG: 7%; SP: 12%;
RJ: 15%; MS: 8%). Faça um programa em que o usuário entre com o valor e o estado
destino do produto e o programa retorne o preço final do produto acrescido do imposto
correspondente ao estado onde será vendido. O programa deve mostrar uma mensagem
de erro caso o estado fornecido não esteja na lista de estados válidos.

*/

#include <stdio.h>

int main()
{
    char estado[3];
    float valor, valorFinal, imposto;

    printf("Estados disponiveis:\nMG\nSP\nRJ\nMS\nInsira o estado [**]: ");
    scanf("%s", estado);
    printf("Insira o valor: ");
    scanf("%f", &valor);

    switch (estado[0])
    {
    case 'm':
    case 'M':
        imposto = valor * 0.07;
        break;

    case 's':
    case 'S':
        imposto = valor * 0.12;
        break;

    case 'r':
    case 'R':
        imposto = valor * 0.15;
        break;

    case 'ms':
    case 'Ms':
    case 'mS':
    case 'MS':
        imposto = valor * 0.08;
        break;

    default:
        printf("Codigo invalido.");
        break;
    }

    valorFinal = valor + imposto;

    printf("Valor do imposto: R$ %.2f\nValor com imposto: R$ %.2f", imposto, valorFinal);
}