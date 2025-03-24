/*
31. Escreva um programa completo que, dados dois números inteiros, mostre na tela o maior deles, assim, como a diferença existente entre ambos.
*/

#include <stdio.h>

int main()
{
    int n1, n2, maior, menor;

    printf("Insira o N1: ");
    scanf("%d", &n1);

    printf("Insira o N2: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        maior = n1;
        menor = n2;
    }

    else
    {
        maior = n2;
        menor = n1;
    }
    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
    printf("\nDiferenca: %d", maior - menor);

    return 0;
}