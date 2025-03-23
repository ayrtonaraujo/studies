/*
77. Faça um programa que leia dois pontos correspondentes a dois
vetores no plano cartesiano e calcule o ângulo entre esses dois
vetores.
*/

//CHAT GPT foi utilizado, arquivo marcado com "^"


/*
#include <stdio.h>
#include <math.h>

#define M_PI (double)(3.14)


int main() {
    double Ax, Ay, Bx, By;

    // Leitura das coordenadas dos pontos A e B
    printf("Digite as coordenadas do ponto A (Ax Ay): ");
    scanf("%lf %lf", &Ax, &Ay);

    printf("Digite as coordenadas do ponto B (Bx By): ");
    scanf("%lf %lf", &Bx, &By);

    // Cálculo das componentes dos vetores A e B
    double vectorA_x = Bx - Ax;
    double vectorA_y = By - Ay;
    double vectorB_x = Bx;
    double vectorB_y = By;

    // Cálculo do produto escalar entre os vetores A e B
    double dotProduct = vectorA_x * vectorB_x + vectorA_y * vectorB_y;

    // Cálculo das magnitudes dos vetores A e B
    double magnitudeA = sqrt(vectorA_x * vectorA_x + vectorA_y * vectorA_y);
    double magnitudeB = sqrt(vectorB_x * vectorB_x + vectorB_y * vectorB_y);

    // Cálculo do cosseno do ângulo entre os vetores A e B
    double cosAngle = dotProduct / (magnitudeA * magnitudeB);

    // Cálculo do ângulo em radianos
    double angleRadians = acos(cosAngle);

    // Conversão do ângulo para graus
    double angleDegrees = angleRadians * (180.0 / M_PI);

    printf("O ângulo entre os vetores A e B é: %.2lf graus\n", angleDegrees);

    return 0;
}


*/

