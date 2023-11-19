/* 2. Imagine uma prova com 100 questões, cada uma valendo 1 ponto, devendo o resultado ser divulgado através de conceitos de acordo com a seguinte tabela:
    Pontos        Conceito
    0 a 49        D
    50 a 69       C
    70 a 89       B
    90 a 100      A
Escreva um programa que exiba o conceito da pontuação obtida. */

#include <stdio.h>

int main()
{
    int acertos;

    printf("\nInsira a quantidade de acertos (0 a 100): ");
    scanf("%d", &acertos);

    while (acertos < 0 || acertos > 100)
    {
        if (acertos < 0)
        {
            printf("\nVoce inseriu um numero abaixo de 0");
        }
        if (acertos > 100)
        {
            printf("\nVoce inseriu um numero acima de 100.");
        }

        printf("\nInsira a quantidade correta de acertos (0 a 100): ");
        scanf("%d", &acertos);
    }

    if (acertos == 0 && acertos <= 49)
    {
        printf("Conceito: D.\n");
    }
    if (acertos == 50 && acertos <= 69)
    {
        printf("Conceito: C.\n");
    }
    if (acertos == 70 && acertos <= 89)
    {
        printf("Conceito: B.\n");
    }
    if (acertos == 90 && acertos <= 100)
    {
        printf("Conceito: A.\n");
    }

    return 0;
}