/*
45. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada de dados com um valor negativo ou zero.
*/

#include <stdio.h>
#include <math.h>

int main () {
    
    int num_usuario, contador = 1;

    while (num_usuario > 0) {
        printf ("*** Operacao %.2d ***", contador);
        contador ++;

        printf ("\nInsira um valor: ");
        scanf ("%d", &num_usuario);

        printf ("Quadrado: %d", num_usuario * num_usuario);
        printf ("\nCubo: %d", num_usuario * num_usuario * num_usuario);
        printf ("\nRaiz quadrada: %.2f\n\n", sqrt((float)num_usuario));
    }

    return 0;
}