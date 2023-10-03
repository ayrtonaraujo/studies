/*
2. Uma loja tem 5 clientes cadastrados e deseja enviar uma correspondência a cada um deles anunciando um bônus especial. Faça um programa que leia o código do cliente e o valor de suas compras no ano passado. Calcule e mostre um bônus de 10% se o valor das compras for menor que R$1.000,00 e de 15%, caso contrário.
*/

#include <stdio.h>

#define BONUS_MAIOR_1000 0.15
#define BONUS_MENOR_1000 0.10

void resultadoBonus(int a);

int main()
{

    int codigo_clientes;

    printf("Digite o código do cliente [C1 a C5]: C");
    scanf("%d", &codigo_clientes);
    getchar();

    switch (codigo_clientes)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        resultadoBonus(codigo_clientes);

        break;

    default:
        printf("\nCodigo de cliente inválido.");
    }

    return 0;
}

// funcao
void resultadoBonus(int a)
{

    float compras_ano_passado[] = {1200.00, 500.00, 950.00, 2100.00, 150.00};

    if (compras_ano_passado[a - 1] < 1000.00)
    {

        printf("\nCódigo do cliente: %d", a);
        printf("\nGasto do cliente ano passado: %.2f", compras_ano_passado[a]);
        printf("\nBonus (10%%): %.2f", compras_ano_passado[a - 1] * BONUS_MENOR_1000);
        printf("\nTotal a receber: %.2f", compras_ano_passado[a - 1] + (compras_ano_passado[a - 1] * BONUS_MENOR_1000));
    }
    else
    {
        printf("\nCódigo do cliente: \"C%d\"", a);
        printf("\nGasto do cliente ano passado: %.2f", compras_ano_passado[a - 1]);
        printf("\nBonus (15%%): %.2f", compras_ano_passado[a - 1] * BONUS_MAIOR_1000);
        printf("\nTotal a receber: %.2f", compras_ano_passado[a - 1] + (compras_ano_passado[a - 1] * BONUS_MAIOR_1000));
    }
}