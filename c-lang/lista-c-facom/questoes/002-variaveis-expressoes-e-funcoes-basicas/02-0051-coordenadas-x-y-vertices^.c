/*
51. Escreva um programa que leia as coordenadas x e y dos vértices de um triângulo e
calcule a sua área.
*/

#include <stdio.h>
#include <math.h>

float calcularArea(float x1, float y1, float x2, float y2, float x3, float y3) {
    float area = 0.5 * fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    return area;
}

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Digite a coordenada x do primeiro vértice: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y do primeiro vértice: ");
    scanf("%f", &y1);
    printf("Digite a coordenada x do segundo vértice: ");
    scanf("%f", &x2);
    printf("Digite a coordenada y do segundo vértice: ");
    scanf("%f", &y2);
    printf("Digite a coordenada x do terceiro vértice: ");
    scanf("%f", &x3);
    printf("Digite a coordenada y do terceiro vértice: ");
    scanf("%f", &y3);

    float area = calcularArea(x1, y1, x2, y2, x3, y3);
    printf("A área do triângulo é %.2f\n", area);

    return 0;
}
