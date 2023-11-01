/* 3. Faça um programa para ler 3 notas de uma aluno, calcular a média e verificar se ele foi aprovado (média>=7) ou reprovado (média<7). */

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    float media_notas;

    printf("Insira as notas (3): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media_notas = (nota1 + nota2 + nota3) / 3.0;

    if (media_notas >= 7.0)
    {
        printf("Aluno aprovado! Media: %.2f", media_notas);
    }
    if (media_notas < 7.0)
    {
        printf("Aluno reprovado! Media: %.2f", media_notas);
    }
    else
    {
        printf("Insira valores de notas de 0 a 10.");
    }

    return 0;
}