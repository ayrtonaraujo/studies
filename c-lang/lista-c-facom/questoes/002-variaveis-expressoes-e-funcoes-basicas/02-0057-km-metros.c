/*
57. Leia um valor de velocidade em quilômetros por
hora e apresentá-la em metros por segundo.
*/

#include <stdio.h>

int main ()
{   
    float km_por_h, metro_por_segundo;

    printf ("Insira o valor em km/h: ");
    scanf ("%f", &km_por_h);

    metro_por_segundo = km_por_h / 3.6;

    printf ("Valor em m/s: %.2f", metro_por_segundo);


    return 0;
}