/*
86. Ler um número inteiro e imprimir a soma do sucessor de seu triplo com o antecessor
de seu dobro.
*/

#include <stdio.h>

int main()
{
    int num1;

    printf("Numero: ");
    scanf("%d", &num1);

    printf("Sucessor de seu triplo: %d\nAntecessor de seu dobro: %d\nSoma de ambos: %d", (num1 * 3 + 1), (num1 * 2 - 1), (num1 * 3 + 1) + (num1 * 2 - 1));

    return 0;
}
