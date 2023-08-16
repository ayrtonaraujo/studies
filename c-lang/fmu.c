#include <stdio.h>

int main ()
{
    float numero1, numero2, numero3;

    printf ("Numero 1: ");
    scanf ("%f", &numero1);

    printf ("Numero 2: ");
    scanf ("%f", &numero2);

    printf ("Numero 3: ");
    scanf ("%f", &numero3);

    printf ("\nSoma: %.2f", numero1 + numero2 + numero3);
   

    return 0;
}