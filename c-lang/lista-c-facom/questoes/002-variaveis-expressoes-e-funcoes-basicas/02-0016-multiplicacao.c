// 16. Faça um programa capaz de multiplicar dois números fornecidos pelo usuário.

#include <stdio.h>

int main()
{
    float numero1, numero2;

    printf("Numero 1: ");
    scanf("%f", &numero1);

    printf("Numero 2: ");
    scanf("%f", &numero2);

    printf("\nMultiplicacao: %.2f", numero1 * numero2);
}
