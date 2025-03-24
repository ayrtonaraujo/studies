// 8. Faça um programa que leia um número inteiro e um número real de precisão simples. Mostre na tela ambos os valores.

#include <stdio.h>

int main()
{
    int number1;
    float number2; // precisão simples (float)

    printf("Número Inteiro: ");
    scanf("%d", &number1);

    printf("Número real: ");
    scanf("%f", &number2);

    printf("Inteiro: %d\nReal: %f", number1, number2);
}
