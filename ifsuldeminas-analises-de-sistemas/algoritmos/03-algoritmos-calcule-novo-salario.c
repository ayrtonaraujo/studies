// Salario com aumento de 25%

#include <stdio.h>
#define AUMENTO 0.25

int main()
{
    float salario_atual;

    printf("Salario atual: ");
    scanf("%f", &salario_atual);

    printf("Novo salario: %.2f", salario_atual + (salario_atual * AUMENTO));

    return 0;
}