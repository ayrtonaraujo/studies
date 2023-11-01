/* 2. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um programa que calcule seu peso ideal, utilizando as seguintes fórmulas:
    - para homens: (72.7*h)-58;
    - para mulheres: (62.1*h)-44.7 */

#include <stdio.h>

int main()
{
    float altura;
    int opcao;

    printf("Qual o sexo? \n1 - Feminino\n2 - Masculino\nDigite um numero: ");
    scanf("%d", &opcao);

    printf("Insira a altura (cm): ");
    scanf("%f", &altura);

    if (opcao == 1)
    {
        printf("\nPeso ideal: %.2f", (72.7 * altura / 100.0) - 58.0);
    }
    if (opcao == 2)
    {
        printf("\nPeso ideal: %.2f", (62.1 * altura / 100.0) - 44.7);
    }
    else
    {
        printf("\nSelecione uma opcao certa.");
    }

    return 0;
}