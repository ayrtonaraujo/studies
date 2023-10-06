/*
Entrar com um numero e raz quadrada caso ele seja positivo e quadrado do numero caso ele seja negativo.
*/

#include <stdio.h>
#include <math.h>

int main()
{

    float numero;

    printf("Insira o valor: ");
    scanf("%f", &numero);

    (numero >= 0) ? printf("\nRaiz quadrada: %.3f", sqrt(numero)) : printf("\nQuadrado do numero: %.2f", pow(numero, 2));

    return 0;
}