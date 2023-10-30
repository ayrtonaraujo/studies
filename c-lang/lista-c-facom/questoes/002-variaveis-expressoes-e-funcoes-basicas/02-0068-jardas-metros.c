/*
68. Ler um comprimento em jardas e converter para metros.
*/

#include <stdio.h>

int main ()
{ 
    float jardas, metros;

    printf ("Insira o valor em jardas: ");
    scanf ("%f", &jardas);

    metros = jardas / 1.09361;

    printf ("\nValor em metros: %.2f", metros);


    return 0;
}