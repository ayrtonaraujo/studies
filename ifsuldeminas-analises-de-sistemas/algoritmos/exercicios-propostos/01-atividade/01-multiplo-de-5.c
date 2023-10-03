/*
1. Implemente um pseucódigo que leia um número e informe se esse número é multipĺo de 5 ou não.
*/

#include <stdio.h>

int main () {

    int numero;

    printf ("Insira o valor: ");
    scanf ("%d", &numero);

    (numero % 5 == 0)?printf("Multiplo de 5"):printf("Nao e multiplo de 5.");

    return 0;
}