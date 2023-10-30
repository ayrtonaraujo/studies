/*
66. Ler um valor de massa em quilogramas e converter para libras.
*/


#include <stdio.h>

int main ()
{
    float kilos, libras;

    printf ("Valor em quilos: ");
    scanf ("%f", &kilos);

    libras = kilos * 2.20462;


    printf ("Em libras: %.2f", libras);

    return 0;
}