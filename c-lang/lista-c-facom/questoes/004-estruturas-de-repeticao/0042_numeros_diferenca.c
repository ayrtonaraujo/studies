/*
42. Escreva um programa que leia 10 números e escreva a diferença entre o menor valor lido e o maior valor lido.
*/

#include <stdio.h>
#include <limits.h>

#define LIMITE 10

int main ()
{
    int contador = 0;
    int numero_usuario;
    int maior = INT_MIN, menor = INT_MAX;

    while (contador < LIMITE) {
        
        printf ("Insira um valor: ");
        scanf ("%d", &numero_usuario);

        if (numero_usuario > maior) {
            maior = numero_usuario;
        }

        if (numero_usuario < menor) {
            menor = numero_usuario;
        }

        contador ++;        
    }

    printf ("\nResultado: %d", maior - menor);

    return 0;
}