/*
82. Ler a altura e o raio de um cilindro circular e imprimir o volume do cilindro.
*/

#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main()
{
    float altura, raio;

    printf("Informe as dimensoes do cilindro em cm abaixo.\n");

    printf("Qual a altura?: ");
    scanf("%f", &altura);

    printf("Qual o raio?: ");
    scanf("%f", &raio);

    printf("\nO Volume do cilindro é: %.2f cm^3.", (PI * pow(raio, 2)) * altura);

    return 0;
}