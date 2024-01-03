/*
4. Ler um número real, se o número for positivo imprima sua raiz quadrada, senão imprima
o número ao quadrado.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float numero;

    printf("Insira um valor: ");
    scanf("%f", &numero);

    (numero >= 0) ? printf("Raiz quadrada: %.2f", sqrt(numero)) : printf("Quadrado do numero: %.2f", pow(numero, 2));

    return 0;
}