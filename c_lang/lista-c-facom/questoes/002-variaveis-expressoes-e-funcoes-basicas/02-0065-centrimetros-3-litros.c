/*
65. Ler um valor de quantidade de litros e calcular o valor
correspondente em centímetros cúbicos.
*/

#include <stdio.h>

float cm3_litros(float a);

int main()
{
    float litros;

    printf("Insira o valor em litros: ");
    scanf("%f", &litros);

    printf("Valor em cm^3: %.2f", cm3_litros(litros));

    return 0;
}

float cm3_litros(float a) // resolvi criar essa funcao para nao esquecer como funciona
{
    float result;

    result = a * 1000.0;

    return result;
}