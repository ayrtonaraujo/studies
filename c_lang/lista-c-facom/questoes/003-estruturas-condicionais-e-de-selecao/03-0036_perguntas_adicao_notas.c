/*
Crie um programa que elabore questões para uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a sequinte pergunta: Qual é a soma entre A e B?, onde A e B são os valores gerados. Peça a resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas realizadas, as respostas corretas e as respostas fornecidas. Mostre também quantos acertos e erros o aluno teve e a nota alcançado na prova (média aritmética considerando que cada questão vale dois pontos)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define LIMITE_MINIMO 1
#define LIMITE_MAXIMO 100

void Linha()
{
    printf("\n\n------------------");
}

int main()
{
    srand(time(NULL));

    int num_1[5] = {}, num_2[5] = {}, resultado[5] = {}, resposta[5] = {}, nota = 10, erros = 0;

    for (int i = 0; i <= 4; i++)
    {

        num_1[i] = LIMITE_MINIMO + rand() % (LIMITE_MAXIMO - LIMITE_MINIMO);
        num_2[i] = LIMITE_MINIMO + rand() % (LIMITE_MAXIMO - LIMITE_MINIMO);

        resultado[i] = num_1[i] + num_2[i];

        printf("\n%d. Qual e a soma entre %d e %d?", i + 1, num_1[i], num_2[i]);

        printf("\nSua resposta: ");
        scanf("%d", &resposta[i]);

        printf("\nResposta correta: %d", resultado[i]);

        if (resposta[i] != resultado[i])
        {
            printf("\nVoce errou. :(");
            erros++;
        }

        else
        {
            printf("\nVoce acertou! :D");
        }

        Linha();
    }

    nota -= erros * 2;
    printf("\n\nSua pontuacao total: %d", nota);

    if (nota == 10)
    {
        printf("\nPontuacao perfeita!");
    }
    if (nota >= 7 && nota <= 9)
    {
        printf("\nMuito bom!");
    }
    if (nota >= 5 && nota <= 6)
    {
        printf("\nBom!");
    }
    if (nota < 5)
    {
        printf("\nPrecisa melhorar!");
    }

    return 0;
}