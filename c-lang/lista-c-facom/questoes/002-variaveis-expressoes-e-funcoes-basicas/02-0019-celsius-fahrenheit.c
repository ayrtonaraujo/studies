/*
19. Faça um programa para ler uma temperatura em graus Celsius e mostrar seu valor convertido para graus Fahrenheit.
*/

#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Insira o valor em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("Fahrenheit: %.2f º F", fahrenheit);

    return 0;
}