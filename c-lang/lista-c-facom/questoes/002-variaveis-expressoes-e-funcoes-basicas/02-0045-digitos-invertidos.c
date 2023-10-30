/*
45. Faça um programa que leia um número inteiro, positivo e de três dígitos, calcule o
número formado pelos dígitos invertidos do número lido.
Exemplo:
Número lido: 123
Número Obtido: 321
*/


#include <stdio.h>

int numberInvert (int number);



int main ()
{
    int number, inverted;


    printf ("Lido: ");
    scanf ("%d", &number);

    inverted = numberInvert (number);

    if (number >= 100 && number <= 999) {
        
        printf ("Invertido: %.3d", inverted);

    }
    else {
        printf ("Digite um numero de 3 digitos.");
    }
    


    return 0;
}




int numberInvert (int number)
{
    int digit, numberInvert = 0;

    while (number > 0)
    {
        digit = number % 10;
        numberInvert = numberInvert * 10 + digit;
        
        number = number / 10;
    }

    

    return numberInvert;



}