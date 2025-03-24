//copia de vetores

#include <stdio.h>

#define TAMANHO_ARRAY 5

int main () {
    int array_a[TAMANHO_ARRAY] = {1,2,3,4,5};
    int array_b[TAMANHO_ARRAY];

    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        array_b[i] = array_a[i];

    }

    printf ("\nArray A: ");
    for (int k = 0; k < TAMANHO_ARRAY; k++) {
        printf ("%d, ", array_a[k]);
    }

    printf ("\nArray B: ");
    for (int j = 0; j < TAMANHO_ARRAY; j++) {
        printf ("%d, ", array_b[j]);
    }


    return 0;
}