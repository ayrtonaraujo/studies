/*
20. Faça um programa para ler uma temperatura em graus Fahrenheit e apresentar seu
valor convertido para graus Celsius.
*/


#include <stdio.h>


int main ()
{
    float celsius, fahrenheit;

    printf ("Insira o valor em Fahrenheit: ");
    scanf ("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0) * 5.0/9.0;

    printf ("Celsius: %.2f", celsius);




    return 0;
}