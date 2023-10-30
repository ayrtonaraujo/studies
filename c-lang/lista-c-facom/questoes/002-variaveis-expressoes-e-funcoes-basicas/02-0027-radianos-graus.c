/*
27. Faça um programa para ler um ângulo em radianos e convertê-lo em graus.
*/

#include <stdio.h>
#define PI 3.14159265359

int main() {
    double angulo_radianos, angulo_graus;

    // Leitura do ângulo em radianos
    printf("Digite o ângulo em radianos: ");
    scanf("%lf", &angulo_radianos);

    // Conversão de radianos para graus
    angulo_graus = angulo_radianos * (180.0 / PI);

    // Exibição do resultado
    printf("O ângulo em graus é: %.2lf\n", angulo_graus);

    return 0;
}