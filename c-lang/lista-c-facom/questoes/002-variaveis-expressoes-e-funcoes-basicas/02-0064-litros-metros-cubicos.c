/*
64. Ler um valor de quantidade de litros e calcular
o valor correspondente em metros cúbicos.
*/

#include <stdio.h>

int main()
{
    float metros_cubicos, litros;

    printf("Insira valor em litros: ");
    scanf("%f", &litros);

    metros_cubicos = litros / 1000.0;

    printf("Valor em m^3: %.3f", metros_cubicos);

    return 0;
}