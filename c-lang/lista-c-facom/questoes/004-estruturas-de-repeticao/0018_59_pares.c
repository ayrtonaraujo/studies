/*
18. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. Obs.: Considere apenas números positivos.
*/

//Vou considerar que não tenha entrada de dados


#include <stdio.h>

int main ()
{
    int soma = 0;

    for (int i = 0; i <= 50; i++)
    {
        if (i %2 == 0) {
            soma = soma + i;
        }
    }

    printf ("Soma: %d", soma);

    return 0;
}