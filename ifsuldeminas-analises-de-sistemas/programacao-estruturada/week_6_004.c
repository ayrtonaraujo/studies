/*
4. Escrever um programa que leia um conjunto de 10 informações contendo, cada uma delas, a altura e o sexo de uma pessoa, calcule e mostre a maior e a menor altura da turma
*/

#include <stdio.h>

#define NUMERO_PESSOAS 10

int main()
{
    char sexo;
    int altura, alturaMaior = 0, alturaMenor = 1000, contador_F = 0, contador_M = 0;

    for (int i = 1; i <= NUMERO_PESSOAS; i++)
    {
        printf("\nPessoa %.2d\n", i);

        printf("Qual o sexo [F/M]?: ");
        scanf(" %c", &sexo);
        getchar();

        while (sexo != 'F' && sexo != 'M')
        {
            printf("\nSexo invalido.");
            printf("\nQual o sexo [F/M]?: ");
            scanf("%c", &sexo);
            getchar();
        }

        if (sexo == 'F')
        {
            contador_F++;
        }

        if (sexo == 'M')
        {
            contador_M++;
        }

        printf("Qual a altura [cm]?: ");
        scanf("%d", &altura);
        getchar();

        if (altura > alturaMaior)
        {
            alturaMaior = altura;
        }

        if (altura < alturaMenor)
        {
            alturaMenor = altura;
        }
    }

    printf("\nSexo: %.2d F | %.2d M", contador_F, contador_M);
    printf("\nMaior altura: %d\nMenor Altura: %d", alturaMaior, alturaMenor);

    return 0;
}