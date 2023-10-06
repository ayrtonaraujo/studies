/*
Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado.
*/

#include <stdio.h>

#define VALOR_P 10.0
#define VALOR_M 12.0
#define VALOR_G 15.0

float valorTotal(float a, float b, float c);

int main()
{
    float pequeno, medio, grande;

    printf("Nº camisas P: ");
    scanf("%f", &pequeno);
    getchar();

    printf("Nº camisas M: ");
    scanf("%f", &medio);
    getchar();

    printf("Nº camisas G: ");
    scanf("%f", &grande);
    getchar();

    printf("Valor P: %.2f\nValor M: %.2f\nValor G: %.2f\nValor arrecadado total: %.2f", pequeno * VALOR_P, medio * VALOR_M, grande * VALOR_G, valorTotal(pequeno, medio, grande));

    return 0;
}

float valorTotal(float a, float b, float c)
{
    float valor_total;

    valor_total = a * VALOR_P + b * VALOR_M + c * VALOR_G;

    return valor_total;
}