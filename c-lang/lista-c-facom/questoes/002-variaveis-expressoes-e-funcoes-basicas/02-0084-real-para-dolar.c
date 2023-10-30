/*
84. Faça um programa para conversão monetária de reais (R$) para dólares (US$). O usuário deve fornecer o valor da cotação do dólar.
*/

#include <stdio.h>

int main()
{
    float cotacao_atual_dolar, dolar;

    printf("Cotacao atual do dolar: ");
    scanf("%f", &cotacao_atual_dolar);

    printf("Valor em dolar: ");
    scanf("%f", &dolar);

    printf("Valor em real: R$ %.2f", dolar * cotacao_atual_dolar);

    return 0;
}