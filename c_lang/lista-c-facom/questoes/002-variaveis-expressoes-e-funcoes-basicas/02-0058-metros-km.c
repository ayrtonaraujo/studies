/*
58. Leia um valor de velocidade em metros por segundo
e apresetá-la em quilômetros por hora.
*/


#include <stdio.h>


int main ()
{
    float km_por_h, metro_por_segundo;

    printf ("Insira o valor em m/s: ");
    scanf ("%f", &metro_por_segundo);

    km_por_h = metro_por_segundo * 3.6;

    printf ("Valor em km/h: %.2f", km_por_h);


    return 0;
}