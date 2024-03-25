/*
80. Calcular a força gravitacional de um objeto de massa m a uma distância d acima do
solo.
*/

#include <stdio.h>
#include <math.h>

#define C_GRAVITACIONAL 6.67430 * pow(10, -11)
#define MASSA_TERRA 5.972 * pow(10, 24)

int main()
{
    double forca_gravitacional, distancia_objeto, massa_objeto;

    printf("Insira a massa do objeto (kg): ");
    scanf("%lf", &massa_objeto);
    getchar();

    printf("Insira a distancia do objeto ao chao (m): ");
    scanf("%lf", &distancia_objeto);
    getchar();

    forca_gravitacional = (C_GRAVITACIONAL * MASSA_TERRA * massa_objeto) / pow(distancia_objeto, 2);

    printf("Forca = %.3lf x 10^12 N", forca_gravitacional / (float)1000000000000);

    return 0;
}