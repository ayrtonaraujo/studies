// 12. Faça um programa que leia uma data no formato (dd/mm/aaaa) e mostre a data fornecida no formato (aaaa/mm/dd). Dica: é possível especicar as barras no formato de entrada dentro da função scanf.

#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("\n\n%.4d/%.2d/%.2d", ano, mes, dia);

    return 0;
}
