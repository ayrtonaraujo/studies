/*
73. Ler uma área em metros quadrados e converter para hectares.
*/

#include <stdio.h>

#define VALOR_CONVERSAO 0.0001


int main ()
{
    float hectares, metros_quadrados;

    printf ("Insira o valor em m^2: ");
    scanf ("%f", &metros_quadrados);

    hectares = metros_quadrados * VALOR_CONVERSAO;

    printf ("Valor em hectares: %.2f", hectares);

    return 0;
}
