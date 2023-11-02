/* 2 - Um funcionário irá receber um aumento de acordo com o seu plano de trabalho, de acordo com a tabela abaixo:
    Plano           Aumento
     A              10%
     B              15%
     C              20%
Faça um programa que leia o plano de trabalho e o salário atual de um funcionário e calcula e imprime o seu novo salário. Use o comando switch-case. */

#include <stdio.h>

int main()
{
    char plano;
    float salario;

    printf("\nSalario: ");
    scanf("%f", &salario);
    getchar();

    printf("\nQual o plano (A/B/C)?: ");
    scanf("%c", &plano);
    getchar();

    while (plano != 'A' && plano != 'a' && plano != 'B' && plano != 'b' && plano != 'C' && plano != 'c')
    {
        printf("\nDigite um plano valido.");
        printf("\nQual o plano (A/B/C)?: ");
        scanf("%c", &plano);
    }

    switch (plano)
    {
    case 'A':
    case 'a':
        printf("\nPlano A selecionado.\nSalario atualizado: R$ %.2f", salario + (salario * 0.1));
        break;
    case 'B':
    case 'b':
        printf("\nPlano B selecionado.\nSalario atualizado: R$ %.2f", salario + (salario * 0.1));
        break;
    case 'C':
    case 'c':
        printf("\nPlano C selecionado.\nSalario atualizado: R$ %.2f", salario + (salario * 0.1));
        break;
    }

    return 0;
}