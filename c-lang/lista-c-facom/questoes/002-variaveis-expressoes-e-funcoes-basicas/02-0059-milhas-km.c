/*
59. Leia uma distância em milhas e converta para quilômetros.
*/


#include <stdio.h>

int main ()
{
    float miles, kilometers;

    printf ("Valor em milhas: ");
    scanf ("%f", &miles);

    kilometers = miles * 1.60934;

    printf ("\nValor em quilometros: %.2f", kilometers);


    return 0;
}