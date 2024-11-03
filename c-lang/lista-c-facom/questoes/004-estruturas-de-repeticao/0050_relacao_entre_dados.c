/* 50. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como saída o número de cada dado e a relação entre eles (>,<,=) em cada lançamento. */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

int main () {

    int dado_1, dado_2, tentativas;

     //funcao de aleatoriedade baseada no tempo
    srand(time(NULL));

    printf ("Quantas jogadas?: ");
    scanf ("%d", &tentativas);

    for (int i = 0; i < tentativas; i++) {
        dado_1 = 1 + rand() % 6;
        dado_2 = 1 + rand() % 6;

        printf ("d1 = %d, d2 = %d\t-->\t", dado_1, dado_2);
        
        if (dado_1 == dado_2) {
            printf ("d1 = d2\n");
        } else if (dado_1 < dado_2) {
            printf ("d1 < d2\n");
        } else {
            printf ("d1 > d2\n");
        }

    }

    return 0;
}