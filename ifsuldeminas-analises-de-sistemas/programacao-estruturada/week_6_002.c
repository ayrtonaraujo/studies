/*
2. Uma loja tem 15 clientes cadastrados e deseja enviar uma correspondência a cada um deles anunciando um bônus especial. Faça um programa que leia o código do cliente e o valor de suas compras no ano passado. Calcule e mostre um bônus de 10% se o valor das compras for menor que R$1.000,00 e de 15%, caso contrário.
*/

#include <stdio.h>
#include <string.h>

#define NUM_CLIENTES 15

int main()
{
    char codigoInserido[3];

    char *codigoCliente[] = {"X1", "X2", "X3", "X4", "X5",
                             "Y1", "Y2", "Y3", "Y4", "Y5",
                             "Z1", "Z2", "Z3", "Z4", "Z5"};

    float compraCliente[] = {1200.15, 500.20, 150.55, 200.02, 300.25,
                             300.25, 1500.25, 8027.59, 2003.01, 256.56,
                             12.2, 589, 1250.25, 1236.49, 589.80};

    printf("Insira o codigo do cliente: ");
    scanf("%s", &codigoInserido);

    for (int i = 0; i < NUM_CLIENTES; i++)
    {
        if (strcmp(codigoInserido, codigoCliente[i]) == 0)
        {
            printf("\nCompra do Cliente: R$ %.2f", compraCliente[i]);

            if (compraCliente[i] > 1000.00)
            {
                printf("\nBonus: R$ %.2f", (compraCliente[i] * 0.15));
            }

            else
            {
                printf("\nBonus: R$ %.2f", (compraCliente[i] * 0.1));
            }

            break;
        }
    }

    return 0;
}