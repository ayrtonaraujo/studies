/*
10. Faça um programa que leia três números e mostre-os em ordem crescente.
*/

#include <stdio.h>

int main()
{
    float numeros[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Valor de N%d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    if (numeros[0] > numeros[1])
    {
        float temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }

    if (numeros[1] > numeros[2])
    {
        float temp = numeros[1];
        numeros[1] = numeros[2];
        numeros[2] = temp;
    }

    if (numeros[0] > numeros[1])
    {
        float temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }

    printf("Ordem: %.2f, %.2f, %.2f", numeros[0], numeros[1], numeros[2]);

    return 0;
}