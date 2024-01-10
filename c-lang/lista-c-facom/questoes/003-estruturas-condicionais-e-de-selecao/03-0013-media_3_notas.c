/*
13. Faça um programa que calcule a média ponderada das notas de três provas. A primeira e a segunda prova têm peso 1 e a terceira prova tem peso 2. O programa deve a média obtida pelo aluno e exibir o resultado se aprovado ou reprovado. Considere que para a aprovação seja necessário obtér pelo menos uma média de 60%.
*/

// Para esse programa irei considerar que a nota máxima é 10.

#include <stdio.h>

#define NOTA_MAXIMA 10.0

int main()
{
    float notas[3];
    float mediaNotas;

    for (int i = 0; i < 3; i++)
    {
        printf("N%d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    mediaNotas = (notas[0] + notas[1] + (notas[2] * 2.0)) / 4.0;

    printf("\nMedia de notas: %.2f", mediaNotas);

    if (mediaNotas < (NOTA_MAXIMA * 0.6))
    {
        printf("\nReprovado.");
    }
    
    else
    {
        printf("\nAprovado.");
    }

    return 0;
}