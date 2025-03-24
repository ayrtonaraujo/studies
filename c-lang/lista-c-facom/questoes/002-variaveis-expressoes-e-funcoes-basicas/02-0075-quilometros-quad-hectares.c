/*
75. Ler uma área em quilômetros quadrados e converter para hectares.
*/


#include <stdio.h>

#define VALOR_CONVERSAO 100.0



int main ()
{
    float km_2, hectares;

    printf ("Insira o valor em km^2: ");
    scanf ("%f", &km_2);

    hectares = km_2 * VALOR_CONVERSAO;

    printf ("\nValor em hectares: %.2f", hectares);


    return 0;
}