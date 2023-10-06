/*
Ler 3 notas de um aluno, calcular a media e verificar se foi aprovador (media>=7) ou reprovado (media<=7).
*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, media;

    printf("N1: ");
    scanf("%f", &n1);

    while (n1 > 10.0)
    {
        printf("\nNota inserida maior que 10, insira corretamente.");
        printf("\nN1: ");
        scanf("%f", &n1);
    }

    printf("N2: ");
    scanf("%f", &n2);

    while (n2 > 10.0)
    {
        printf("\nNota inserida maior que 10, insira corretamente.");
        printf("\nN2: ");
        scanf("%f", &n2);
    }

    printf("N3: ");
    scanf("%f", &n3);

    while (n3 > 10.0)
    {
        printf("\nNota inserida maior que 10, insira corretamente.");
        printf("\nN2: ");
        scanf("%f", &n3);
    }

    media = (n1 + n2 + n3) / 3.0;

    (media >= 7) ? printf("\nMedia: %.2f -> Aprovado.", media) : printf("\nMedia: %.2f -> Reprovado.", media);

    return 0;
}