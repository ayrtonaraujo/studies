/*
45. Faça um programa que leia um número inteiro, positivo e de três dígitos, calcule o
número formado pelos dígitos invertidos do número lido.
Exemplo:
Número lido: 123
Número Obtido: 321
*/


#include <stdio.h>

int invertDigits (int number)
{
    int numberInverted = 0;
    while (number > 0) {
        int digit = number % 10;
        numberInverted = numberInverted * 10 + digit;
        number /= 10;
    }

    return numberInverted;


}



int main ()
{
    int number;

    printf ("Digite um numero (3 digitos): ");
    scanf ("%d", &number);

    int numberInverted = invertDigits (number);

    
    printf ("Lido:    %d\n", number);
    printf ("Inverso: %d\n", numberInverted);




return 0;
}