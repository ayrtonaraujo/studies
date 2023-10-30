/*
49. Escreva um programa que leia as coordenadas x e y de um ponto no plano cartesiano
e calcule a sua distância ao ponto de origem.
*/


#include <stdio.h>

#include <math.h>


int main ()
{
    float x, y;

    printf ("Coordenada X: ");
    scanf ("%f", &x);

    printf ("Coordenada Y: ");
    scanf ("%f", &y);

    printf ("Ditancia de (%.2f, %.2f) até origem: %.2f", x, y, sqrt(x*x+y*y));


    
    return 0;
}