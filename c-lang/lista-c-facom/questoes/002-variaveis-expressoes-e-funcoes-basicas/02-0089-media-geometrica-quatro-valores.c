/*
89. Faça um programa que calcule e mostre a média geométrica entre quatro valores.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, n3, n4;

    printf("N1: ");
    scanf("%d", &n1);
    getchar();

    printf("N2: ");
    scanf("%d", &n2);
    getchar();

    printf("N3: ");
    scanf("%d", &n3);
    getchar();

    printf("N4: ");
    scanf("%d", &n4);
    getchar();


    printf ("\nMedia geometrica: %.2f", pow(n1*n2*n3*n4, 0.25));

    return 0;
}