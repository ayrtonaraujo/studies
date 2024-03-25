/*
70. Ler uma área em metros quadrados e converter para acres.
*/

#include <stdio.h>

#define VALOR_CONVERSAO 0.000247105 // vou deixar como constante

int main()
{
    float metros_quadrados, acres;

    printf("Insira o valor em m^2: ");
    scanf("%f", &metros_quadrados);

    acres = metros_quadrados * VALOR_CONVERSAO;

    printf("Valor em acres: %f", acres);

    return 0;
}