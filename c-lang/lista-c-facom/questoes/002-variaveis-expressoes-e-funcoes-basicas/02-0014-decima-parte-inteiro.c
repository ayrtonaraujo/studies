// 14. Faça um programa que leia um número inteiro, calcule a décima parte deste número e exiba o resultado

#include <stdio.h>

int main()
{
    int numero;

    printf("Numero: ");
    scanf("%d", &numero);

    printf("Decima parte: %f", numero * 0.1);

    return 0;
}
