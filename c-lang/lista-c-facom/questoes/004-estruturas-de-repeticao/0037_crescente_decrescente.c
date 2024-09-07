/*
37. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente e decrescente.
*/

#include <stdio.h>

int main()
{
    int numero_usuario;

    do
    {
        printf("Insira um valor: ");
        scanf("%d", &numero_usuario);
    } while (numero_usuario < 0);
    
    printf("Crescente: ");
    
    for (int i = 0; i <= numero_usuario; i++)
    {
        printf("%d\t", i);
    }

    printf("\nDecrescente: ");
    for (int i = numero_usuario; i >= 0 ; i--)
    {
        printf("%d\t", i);
    }


    return 0;
}