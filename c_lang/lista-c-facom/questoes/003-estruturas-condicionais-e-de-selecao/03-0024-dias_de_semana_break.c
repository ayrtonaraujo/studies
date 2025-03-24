/*
24. Um programador iniciante resolveu fazer um programa que receba um número inteiro de 1 a 7 correspondendo a um dia da semana (1=domingo, 2=segunda-feira, etc). O programa deve mostrar no nome do dia da semana. O programador decidiu usar uma estrutura de seleção (switch-case) porém, ele esqueceu de incluir os comandos break ao final de cada case. Qual será o comportamento deste programa?
*/

// Resposta: Executa todos os comandos a partir do numero digitado. Ex.: Você digita 5, ele executa o 5, 6 e 7. O break é o que faz o programa parar em determinada resposta e não continuar o loop.

#include <stdio.h>

int main()
{
    int dia;

    printf("Insira o dia da semana (1 a 7): ");
    scanf("%d", &dia);

    while (dia < 1 || dia > 7)
    {
        printf("\nNumero incorreto.");
        printf("\nInsira o dia da semana (1 a 7): ");
        scanf("%d", &dia);
    }

    switch (dia)
    {
    case 1:
        printf("Segunda-feira.");

    case 2:
        printf("Terça-feira.");

    case 3:
        printf("Quarta-feira.");

    case 4:
        printf("Quinta-feira.");

    case 5:
        printf("Sexta-feira.");

    case 6:
        printf("Sábado.");

    case 7:
        printf("Domingo.");
    }

    printf("\nTenha um ótimo dia!");

    return 0;
}
