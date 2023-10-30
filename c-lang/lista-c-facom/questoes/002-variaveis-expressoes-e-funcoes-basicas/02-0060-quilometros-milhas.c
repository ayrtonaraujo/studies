/*
60. Leia uma distância em quilômetros e converta para milhas.
*/


#include <stdio.h>

int main ()
{
    float milhas, quilometros;

    printf ("Valor em quilometros: ");
    scanf ("%f", &quilometros);


    milhas = quilometros / 1.60934;

    printf ("Valor em milhas: %.2f", milhas);


    return 0;
}