// 13. Faça um programa que leia um número inteiro, calcule o seu quadrado e exiba o resultado.

#include <stdio.h>
#include <math.h>

int main()
{
    float numero;

    printf("Numero: ");
    scanf("%f", &numero);

    printf("Quadrado: %.2f", pow(numero, 2));

    // printf ("Quadrado %.2f", numero * numero); //sem usar a lib math.c

    return 0;
}
