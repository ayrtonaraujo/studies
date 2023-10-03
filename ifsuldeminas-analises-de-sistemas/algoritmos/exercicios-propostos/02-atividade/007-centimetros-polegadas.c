/*
7. Criar um algoritmo que imprima uma tabela de conversão de polegadas para centímetros. Deseja-se que na tabela conste valores desde 1 polegada até 20 polegadas inteiras.
Sabendo que 1 polegadas = 2.54 cm.
*/

#include <stdio.h>

#define POLEGADAS 2.54 // cm

int main()
{
    float centimetros;

    printf("cm\t||  inch\n");
    printf("==================\n");

    for (centimetros = 1; centimetros <= 20; centimetros++)
    {
        printf("%.2f\t||  %.2f\n", centimetros, centimetros * POLEGADAS);
    }

    return 0;
}