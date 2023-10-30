/*
61. Leia um valor de comprimento em polegadas e convertê-lo em centímetros.
*/

#include <stdio.h>

int main ()
{
    float polegadas, centimetros;

    printf ("Valor em polegadas: ");
    scanf ("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf ("Valor em centimetros: %.2f", centimetros);



    return 0;
}