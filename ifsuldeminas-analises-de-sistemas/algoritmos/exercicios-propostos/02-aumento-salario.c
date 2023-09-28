/*
2. Implemente um pseudocódigo para ler o salário de um funcionário e aumentá-lo em 15%. Após o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final.
*/

#include <stdio.h>

#define AUMENTO_SALARIO 0.15
#define ALIQUOTA_IMPOSTOS 0.08

int main()
{
    float salario_atual;

    printf("Insira o valor do salario: ");
    scanf("%f", &salario_atual);

    float salario_aumento = salario_atual + (salario_atual * AUMENTO_SALARIO);
    float desconto_imposto = salario_aumento * ALIQUOTA_IMPOSTOS;
    float salario_liquido = salario_aumento - desconto_imposto;

    printf("\nSalario inicial: %.2f\nSalario com aumento: %.2f\nDesconto de impostos: %.2f\nSalario liquido: %.2f", salario_atual, salario_aumento, desconto_imposto, salario_liquido);

    return 0;
}