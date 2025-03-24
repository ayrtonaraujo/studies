/*
40. Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E, conforme a fórmula a seguir:
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N !
*/

#include <stdio.h>

#define NUMERADOR 1

int main ()
{   
    int n, i, j, k;
    float resultado = 0;

    do { 
        printf ("Insira um valor: ");
        scanf ("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++)
    {
        k= 1;
        for (j = 1; j <= i; j++)
        {
            k *= j;
        }

        resultado += 1.0/(float)k;
    }
    
    resultado += 1.0;
    
    printf ("\n\nResultado: %.3f", resultado);

    return 0;
}