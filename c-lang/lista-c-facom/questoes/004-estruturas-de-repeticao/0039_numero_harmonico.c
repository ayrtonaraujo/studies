/*
39. Em Matemática, o número harmônico designado por Hn dene-se como sendo o enésimo termo da série harmónica. Ou seja:
Hn = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Apresente um programa que calcule o valor de qualquer Hn para um n fornecido pelo usuário.
*/

#include <stdio.h>

int main ()
{
    int n, i;
    float h = 0;

    do {
        printf ("Insira um valor para n: ");
        scanf ("%d", &n);

    } while (n <= 0 || n == 1);

    
    for (i = 1; i <= n; i++) {
        h += (1.0 / i);
    }
    
    printf ("H_(%d) = %.3f", n, h);
    
    return 0;
}