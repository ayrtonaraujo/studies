/*
63. Ler um valor de volume em metros cúbicos e converter para litros.
*/


#include <stdio.h>

int main ()
{
    float metros_cubicos, litros;

    printf ("Insira o valor em m^3: ");
    scanf ("%f", &metros_cubicos);

    litros = metros_cubicos * 1000.0;

    printf ("\nValor em litros: %.2f", litros);



    return 0;
}