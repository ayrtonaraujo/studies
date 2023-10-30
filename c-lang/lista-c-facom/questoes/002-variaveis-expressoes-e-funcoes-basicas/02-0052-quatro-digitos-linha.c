/*
52. Faça um programa capaz de ler um número de quatro dígitos
e escrever cada dígito em uma linha na tela.
*/


#include <stdio.h>


int main ()
{
    int number;

    printf ("Digite um número de 4 digitos: ");
    scanf ("%d", &number);

    if (number >= 1000 && number <= 9999)
    {    
        int digit;
        int temp = number;
        
        while (temp != 0)
        {
        digit = temp % 10;


        printf ("\n%d", digit);

        temp /= 10;
        
    
        }

    }


    else {

        printf ("Insira um numero valido.");

    }
    
    return 0;
}

