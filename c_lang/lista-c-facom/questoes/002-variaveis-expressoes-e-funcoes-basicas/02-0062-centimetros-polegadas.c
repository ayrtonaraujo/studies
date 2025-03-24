/*
62. Converter de centímetros para polegadas.
*/

#include <stdio.h>

int main ()
{
    float polegadas, centimetros;

    printf ("Valor em centimetros: ");
    scanf ("%f", &centimetros);

    polegadas = centimetros / 2.54;

    printf ("Valor em polegadas: %f", polegadas);



    return 0;
}