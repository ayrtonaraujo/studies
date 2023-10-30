/*
81. Um determinado satélite está a uma altitude h com relação a Terra. Escreva um programa que leia a altitude desse satélite e determine sua velocidade orbital e seu período de movimento orbital.
Dica: utilize as fórmulas e constantes localizadas no Apêndice A.
*/


#include <stdio.h>
#include <math.h>


#define C_GRAVITACIONAL 6.67430*pow(10,-11)
#define MASSA_TERRA 5.972*pow(10,24)
#define RAIO_TERRA 663710.0

#define PI 3.141592



int main ()
{
    float distancia_satelite, velocidade_orbital, periodo_orbital;

    printf ("Distancia do satelite (m): ");
    scanf ("%f", &distancia_satelite);


    velocidade_orbital = sqrt((C_GRAVITACIONAL * MASSA_TERRA) / (RAIO_TERRA + distancia_satelite));

    periodo_orbital = 2.0 * PI * sqrt(pow(RAIO_TERRA,3)/(C_GRAVITACIONAL*MASSA_TERRA));
    
    printf ("Velocidade Orbital: %.2f m/s", velocidade_orbital);
    printf ("\nPeriodo Orbital: %.2f s", periodo_orbital);


    



    return 0;
}