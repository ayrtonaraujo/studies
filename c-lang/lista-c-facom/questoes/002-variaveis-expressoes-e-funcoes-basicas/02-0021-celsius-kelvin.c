/*
21. Faça um programa que ler uma temperatura em graus Celsius e convertê-la para Kelvin.
*/


#include <stdio.h>

int main ()
{
    float celsius, kelvin;

    printf ("Insira o valor em Celsius: ");
    scanf ("%f", &celsius);

    kelvin = celsius + 273.5;

    printf ("Kelvin: %.2f", kelvin);

    return 0;
}