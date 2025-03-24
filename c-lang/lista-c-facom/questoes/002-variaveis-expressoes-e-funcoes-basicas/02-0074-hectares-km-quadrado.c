/*
74. Ler uma área em hectares e converter para quilômetros quadrados.
*/

#include <stdio.h>

#define VALOR_CONVERSAO 0.01

int main ()
{
    float km_2, hectares;

    printf ("Insira o valor em hectares (ha): ");
    scanf ("%f", &hectares);

    km_2 = hectares * VALOR_CONVERSAO;

    printf ("\nValor em km^2: %.3f", km_2);

    return 0;
}