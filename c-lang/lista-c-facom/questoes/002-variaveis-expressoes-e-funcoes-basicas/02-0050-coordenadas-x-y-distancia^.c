/*
50. Escreva um programa que leia as coordenadas x e y de dois pontos
no plano e calcule a distância entre eles.
*/

#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float x2, float y2) {
    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distancia;
}

int main() {
    float x1, y1, x2, y2;

    printf("Digite a coordenada x do primeiro ponto: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y do primeiro ponto: ");
    scanf("%f", &y1);
    printf("Digite a coordenada x do segundo ponto: ");
    scanf("%f", &x2);
    printf("Digite a coordenada y do segundo ponto: ");
    scanf("%f", &y2);

    float distancia = calcularDistancia(x1, y1, x2, y2);
    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é %.2f\n", x1, y1, x2, y2, distancia);

    return 0;
}
