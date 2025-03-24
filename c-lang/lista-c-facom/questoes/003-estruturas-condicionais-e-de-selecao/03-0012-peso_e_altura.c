/*
12. Faça um programa que receba a altura (em metros) e o peso de uma pessoa (em quilos). Verifique qual a classificação dessa pessoa, de acordo com a tabela 3.1.
*/

#include <stdio.h>

int main()
{
    float alturaMetros, pesoKg;

    printf("Insira a altura (m): ");
    scanf("%f", &alturaMetros);

    printf("Insira o peso (Kg): ");
    scanf("%f", &pesoKg);

    if (alturaMetros < 1.20)
    {
        if (pesoKg < 60.0)
        {
            printf("Grupo A.");
        }
        if (pesoKg >= 60.0 && pesoKg <= 90.0)
        {
            printf("Grupo D");
        }
        if (pesoKg > 90)
        {
            printf("Grupo G.");
        }
    }

    if (alturaMetros >= 1.20 && alturaMetros <= 1.70)
    {
        if (pesoKg < 60.0)
        {
            printf("Grupo B.");
        }
        if (pesoKg >= 60.0 && pesoKg <= 90.0)
        {
            printf("Grupo E");
        }
        if (pesoKg > 90)
        {
            printf("Grupo H.");
        }
    }

    if (alturaMetros > 1.70)
    {
        if (pesoKg < 60.0)
        {
            printf("Grupo C.");
        }
        if (pesoKg >= 60.0 && pesoKg <= 90.0)
        {
            printf("Grupo F");
        }
        if (pesoKg > 90)
        {
            printf("Grupo I.");
        }
    }

    return 0;
}