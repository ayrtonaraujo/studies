/*
8. A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final.
A média das três notas mencionadas anteriormente os seguintes pesos: Trabalho de laboratório: 2; Avaliação semestral: 3; Exame final: 5. Calcule a média obtida pelo aluno e, de acordo com o resultado, mostre se o aluno está reprovado (média entre 0 e 2,9), de recuperação (média entre 3 e 4,9) ou aprovado (média maior ou igual a 5).
*/

#include <stdio.h>

#define PESO_2 2.0
#define PESO_3 3.0
#define PESO_5 5.0

void CalculoMedia(float media);

int main()
{
    float notaLaboratorio, notaAvSemestral, notaExameFinal, media;

    printf("Nota laboratorio: ");
    scanf("%f", &notaLaboratorio);

    printf("Nota avaliacao semestral: ");
    scanf("%f", &notaAvSemestral);

    printf("Nota exame final: ");
    scanf("%f", &notaExameFinal);

    notaLaboratorio = notaLaboratorio * PESO_2;
    notaAvSemestral = notaAvSemestral * PESO_3;
    notaExameFinal = notaExameFinal * PESO_5;

    media = (notaAvSemestral + notaExameFinal + notaLaboratorio) / (PESO_2 + PESO_3 + PESO_5);

    printf("Media final: %.2f\n", media);
    CalculoMedia(media);

    return 0;
}

void CalculoMedia(float media)
{

    if (media >= 0.0 && media <= 2.9)
    {
        printf("Aluno reprovado.");
    }

    else if (media >= 3.0 && media <= 4.9)
    {
        printf("Aluno em recuperacao.");
    }

    else if (media >= 5.0)
    {
        printf("Aluno aprovado.");
    }
}
