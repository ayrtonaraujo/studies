#include <stdio.h>

int main(void)
{
    int quantidade, contador = 0;

    do
    {
        printf("Qual a quantidade? ");
        scanf("%d", &quantidade);
    } while (quantidade <= 0);

    int numero[quantidade], numeros_pares[quantidade]; // definir o array pela quantidade de numeros

    for (int i = 0; i < quantidade; i++)
    {
        printf("Insira o N%d: ", i + 1);
        scanf(" %d", &numero[i]);

        if (numero[i] % 2 == 0)
        {
            contador++;
            numeros_pares[contador - 1] = numero[i];
        }
    }

    printf("\nNUMERO PARES:\n");

    for (int i = 0; i < contador; i++)
    {
        printf("%d\n", numeros_pares[i]);
    }

    printf("\nQUANTIDADE DE PARES: %d", contador);
}