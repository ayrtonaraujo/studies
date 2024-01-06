/*
7. Ler o ano de nascimento de uma pessoa e o ano atual, calcular a idade da pessoa.
*/

#include <stdio.h>

int main()
{
    int anoNascimento, anoAtual, idade;

    printf("Ano de Nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Anos Atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    printf("Sua idade: %d", idade);

    return 0;
}