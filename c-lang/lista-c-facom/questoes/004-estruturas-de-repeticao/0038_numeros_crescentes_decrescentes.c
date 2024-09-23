/*
38. Faça um programa que leia um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem crescente e todos os números ímpares em ordem decrescente.
*/

#include <stdio.h>

int main () {

    int numero_usuario, i;

    do {
        printf ("Insira um numero: ");
        scanf("%d", &numero_usuario);

    } while (numero_usuario <= 0);

    printf("\nPares: ");
    for (i = 1; i <= numero_usuario; i++) {
        if (i % 2 == 0)
        {
           printf("%d ", i);
        }
    }
    
    printf("\nImpares: ");
    for (i = numero_usuario; i >= 1; i--) {
         if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}