/*
3. Faça um programa que receba dois números e mostre qual é o maior deles.
*/

#include <stdio.h>

int main ()
{
    float n1, n2;
    
    printf ("Insira o N1: ");
    scanf ("%f", &n1);

    printf ("Insira o N2: ");
    scanf ("%f", &n2);
    
    (n1 > n2)?printf("O maior numero e N1"):printf("O maior numero e N2");

    return 0;
}