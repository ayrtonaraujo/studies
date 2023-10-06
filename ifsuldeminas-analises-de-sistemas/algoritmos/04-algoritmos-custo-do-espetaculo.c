// Ler o custo de um espetáculo teatral e o preço do ingresso desse espetaculo. Esse programa deve calcular e mostrar a quantidade de ingressos que devem ser vendidos para que pelo menos o custo do espetaculo seja alcançado.

#include <stdio.h>

#define GANHO_ALMEJADO 0.2

float qtdIngresso(float a, float b);

int main()
{
    float custo_espetaculo, valor_ingresso;

    printf("Custo do espetaculo (R$): ");
    scanf("%f", &custo_espetaculo);
    getchar();

    printf("Valor do ingresso: ");
    scanf("%f", &valor_ingresso);
    getchar();

    printf("\nQuantidade de ingressos: %.2f", qtdIngresso(custo_espetaculo, valor_ingresso));

    printf("\nPara ter %.2f%% de lucro e necessario vender %.2f ingressos", GANHO_ALMEJADO * 100.0, qtdIngresso(custo_espetaculo + (custo_espetaculo * GANHO_ALMEJADO), valor_ingresso));

    return 0;
}

float qtdIngresso(float a, float b)
{

    float qtd_ingresso;

    qtd_ingresso = a / b;

    return qtd_ingresso;
}