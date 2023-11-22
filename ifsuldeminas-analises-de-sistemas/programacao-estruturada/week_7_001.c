/*
1. Desenvolva um programa que receba um número inteiro N. O programa deverá imprimir na tela os números pares de 0 até N. Utilize o comando While.
*/

#include <stdio.h>

int main()
{
    int num, contador = 0;

    printf("Digite o numero: ");
    scanf("%d", &num);



    while (contador <= num)
    {
        printf ("%d\t", contador);
        contador += 2;
    }

    return 0;
}