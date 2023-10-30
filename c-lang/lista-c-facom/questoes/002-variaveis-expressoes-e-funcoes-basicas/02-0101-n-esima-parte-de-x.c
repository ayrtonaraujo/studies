/*
101. Faça um programa que calcule a n-ésima raiz de um valor x fornecido pelo usuário.
Obs.: o usuário deve fornecer o índice da raíz.
Dica: use a função pow da biblioteca math.h.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float valor_x, valor_indice_raiz;

    printf("Valor de X: ");
    scanf("%f", &valor_x);
    getchar();

    printf("Valor do indice da raiz: ");
    scanf("%f", &valor_indice_raiz);

    printf("\nResultado: %.2f\n", pow(valor_x, 1.0 / valor_indice_raiz));

    return 0;
}