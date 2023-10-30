/*
90. Faça um programa que calcule e mostre a média harmônica entre quatro valores.
*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;

    printf("N1: ");
    scanf("%f", &n1);
    getchar();

    printf("N2: ");
    scanf("%f", &n2);
    getchar();

    printf("N3: ");
    scanf("%f", &n3);
    getchar();

    printf("N4: ");
    scanf("%f", &n4);
    getchar();

    printf("\nMedia harmonica: %.2f", (4.0 / (1.0 / n1 + 1.0 / n2 + 1.0 / n3 + 1.0 / n4)));

    return 0;
}