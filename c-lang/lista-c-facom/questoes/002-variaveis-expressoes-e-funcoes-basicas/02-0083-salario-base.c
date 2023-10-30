/*
83. Ler o salário-base de um funcionário, calcular e mostrar o salário a receber, sabendo-se
que esse funcionário tem gratificação de 5% sobre o salário-base, e paga imposto de 7%
sobre o salário-base.
*/

#include <stdio.h>

int main()
{
    float salario_base;

    printf("Salario-base: ");
    scanf("%f", &salario_base);

    /*Irei considerar que o funcionario ganha o bonus de 5% e paga o imposto de 7% sobre o salario-base + bonus*/

    salario_base = salario_base + salario_base * 0.05;

    printf("Salario liquido: %.2f", salario_base - (salario_base * 0.07));

    return 0;
}