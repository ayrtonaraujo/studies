/*
88. Faça um programa que calcule o ano de nascimento de uma pessoa a partir da idade que a pessoa tinha no dia primeiro de janeiro do ano atual.
*/

#include <stdio.h>
#include <time.h> //biblioteca de tempo 📅

int main()
{
    int idade;

    time_t ano;
    struct tm *data_atual;

    ano = time(NULL);
    data_atual = localtime(&ano);

    int ano_atual = data_atual->tm_year + 1900;

    printf("Qual a sua idade atual?: ");
    scanf("%d", &idade);

    printf("Seu ano de nascimento: %d", ano_atual - idade);

    return 0;
}