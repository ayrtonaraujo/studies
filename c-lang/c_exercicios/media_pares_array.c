#include <stdio.h>

int main()
{
    int contador = 0, quantidade, soma_pares;

    do
    {
        printf("Qual a quantidade? ");
        scanf("%d", &quantidade);
 } while (quantidade <= 0);

    int array[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        printf("Valor N%d: ", i + 1);
        scanf("%d", &array[i]);

        if (array[i] % 2 == 0)
        {
            soma_pares += array[i];
            contador++;
        }
    }

    if (contador > 0)
    {
        printf("\nMedia dos pares: %.2f", (float)soma_pares / contador);
    }
    else
    {
        printf("\nNÃO EXISTEM NUMEROS PARES.");
    }
    
    return 0;
}