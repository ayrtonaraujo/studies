/*
Ler um valor x e calcular o arcoseno(x), arcocosseno(x), e o arcotangente(x).
Os ângulos obtidos nos resultados devem ser apresentados em graus.
*/


//PRECISA DE REVISÃO


#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main ()
{
    double x;

    printf ("Insira o valor de X: ");
    scanf ("%lf", &x);


   // double radianos = (angulo_x * 2.0 * PI) / 360;

    printf ("Arcoseno: %.2lf\nArcosseno: %.2lf\nArcotangente: %.2lf", asin(x), acos(x), atan(x));

    // * 180/PI

    return 0;
}