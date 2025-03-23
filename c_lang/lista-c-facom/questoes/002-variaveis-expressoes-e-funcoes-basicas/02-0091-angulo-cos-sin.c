/*
91. Ler um ângulo x em graus, calcular e mostrar o valor de seno(x), cossseno(x) e tangente(x).
Obs.: antes de usar as funções trignométricas da biblioteca math.h, é necessário converter a medida do ângulo para radianos.
*/

#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main()
{

    double angulo_x;

    printf("Insira o valor (graus): ");
    scanf("%lf", &angulo_x);

    double radianos = (angulo_x * 2.0 * PI) / 360;

    printf("\nEm radianos: %.2lf", radianos);

    printf("\nCosseno: %.2lf", cos(angulo_x));
    printf("\nSeno: %.2lf", sin(angulo_x));
    printf("\nTangente: %.2lf", tan(angulo_x));

    return 0;
}
