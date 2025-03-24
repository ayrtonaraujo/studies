/* 49. Faça um programa que leia 20 inteiros positivos, ignorando não positivos, e imprima sua média. */

#include <stdio.h>

#define LIMITE_NUMEROS 20

int main () {

    int contador = 0;
    int numero_usuario;
    int soma_media = 0;

    while (LIMITE_NUMEROS - contador > 0) {

        printf ("Insira um valor (#%.2d): ", contador + 1);
        scanf ("%d", &numero_usuario);

        if (numero_usuario > 0) {
            contador++;
            soma_media += numero_usuario;
        }
    }

    printf ("Media: %.2f", (float)soma_media / LIMITE_NUMEROS);
    
    return 0;
}