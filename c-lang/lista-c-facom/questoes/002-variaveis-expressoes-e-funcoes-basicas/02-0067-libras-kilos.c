/*
67. Ler um valor de massa em libras e converter para quilogramas.
*/

#include <stdio.h>

int main ()
{
    float kilos, libras;

    printf ("Valor em libras: ");
    scanf ("%f", &libras);

    kilos = libras / 2.20462;


    printf ("Em quilos: %.2f", kilos);

    return 0;
}