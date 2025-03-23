/*
78. Crie um programa que converte coordenadas cartesianas em coordenadas polares. O
programa deve ler um ponto em um coordenada polar, composto por raio e ângulo em
radianos.
*/

//CHAT GPT usado



#include <stdio.h>
#include <math.h>

int main() {
    double radius, angle;

    // Leitura das coordenadas polares (raio e ângulo)
    printf("Digite o raio e o ângulo em radianos (radius angle): ");
    scanf("%lf %lf", &radius, &angle);

    // Cálculo das coordenadas cartesianas
    double x = radius * cos(angle);
    double y = radius * sin(angle);

    printf("As coordenadas cartesianas correspondentes são: (%.2lf, %.2lf)\n", x, y);

    return 0;
}
