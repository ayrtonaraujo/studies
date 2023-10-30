/*
72. Ler uma área em hectares e converter para metros quadrados.
*/


#include <stdio.h>

#define VALOR_CONVERSAO 0.0001


int main ()
{
    float hectares, metros_quadrados;

    printf ("Insira o valor em hectares: ");
    scanf ("%f", &hectares);

    metros_quadrados = hectares / VALOR_CONVERSAO;

    printf ("Valor em m^2: %.2f", metros_quadrados);

    return 0;
}