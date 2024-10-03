/*
43. Faça um programa que calcule a área de um triângulo, cuja base e altura são fornecidas pelo usuário. Esse programa não pode permitir a entrada de dados inválidos, ou seja, medidas menores ou iguais a 0.
*/

#include <stdio.h>

int main () {

    int base, altura;

    do {
        printf ("Base: ");
        scanf ("%d", &base);

        printf ("Altura: ");
        scanf ("%d", &altura);


    } while (base <= 0 || altura <= 0);

    printf ("Area: %.2f", (base * altura) / 2.0);

    return 0;
}