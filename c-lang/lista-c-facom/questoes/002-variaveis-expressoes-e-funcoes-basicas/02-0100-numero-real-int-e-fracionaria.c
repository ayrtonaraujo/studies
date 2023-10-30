/*
100. Faça um programa capaz de ler um valor real x e decompor esse número em parte inteira e parte fracionária.
Dica: use a função modf da biblioteca math.h.
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    double x, parte_inteira, parte_frac;

    printf ("Valor de X: ");
    scanf ("%lf", &x);

    parte_frac = modf(x, &parte_inteira);

    printf ("Valor inteiro: %.0lf\nValor fracionaio: %.7lf", parte_inteira, parte_frac );



    return 0;
}