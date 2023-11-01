/* 3. Uma empresa decidiu dar um aumento escalonado a seus funcionários de acordo com a seguinte regra:
    13% para os salários inferiores ou iguais a R$200,00;
    11% para os salários situados entre R$ 200,00 e R$400,00 (inclusive);
    9% para os salários entre R$400,00 e R$800,00(inclusive) e
    7% para os demais salários.
Escreva um programa que receba o salário atual de um funcionário e forneça o valor do seu novo salário. */

#include <stdio.h>

int main()
{
    float salario;

    printf("Insira seu salario: ");
    scanf("%f", &salario);

    while (salario < 0)
    {
        if (salario < 0)
        {
            printf("\nVoce inseriu um salario abaixo de 0");
        }

        printf("\nInsira seu salario novamente: ");
        scanf("%f", &salario);
    }

    if (salario <= 200.0)
    {
        printf("Aumento: %.2f\nSalario com aumento: %.2f", salario * 0.13, salario + (salario * 0.13));
    }
    if (salario > 200.0 && salario <= 400.0)
    {
        printf("Aumento: %.2f\nSalario com aumento: %.2f", salario * 0.11, salario + (salario * 0.11));
    }
    if (salario > 400.0 && salario <= 800.0)
    {
        printf("Aumento: %.2f\nSalario com aumento: %.2f", salario * 0.09, salario + (salario * 0.09));
    }
    if (salario > 801.0)
    {
        printf("Aumento: %.2f\nSalario com aumento: %.2f", salario * 0.07, salario + (salario * 0.07));
    }

    return 0;
}