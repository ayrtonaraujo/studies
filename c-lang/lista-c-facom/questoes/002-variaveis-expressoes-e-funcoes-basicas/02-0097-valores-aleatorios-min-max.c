/*
97. Faça um programa que gere três valores aletórios inteiros que estejam dentro do intervalo fechado [a; b]. Os limites inferior (a) e superior (b) são fornecidos pelo usuário.
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


int main ()
{
    int limite_max, limite_minimo, i;

     //funcao de aleatoriedade baseada no tempo
    srand(time(NULL));
    
    
    printf ("\nValor minimo: ");
    scanf ("%d", &limite_minimo);
    getchar();

    printf ("Valor maximo: ");
    scanf ("%d", &limite_max);


    for (i = 1; i <= 3; i++) {
        printf ("%d\n", limite_minimo + rand() % (limite_max - limite_minimo));

    }


    return 0;
}