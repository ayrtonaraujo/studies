#include <stdio.h>

int main()
{
    int contador = 0, numero_atual;

    do
    {
        printf("Insira um valor: ");
        scanf("%d", &numero_atual);

    } while (numero_atual <= 0);

    printf("\nSequencia de Collatz: %d  ", numero_atual);

    while (numero_atual != 1)
    {
        if (numero_atual % 2 == 0)
        {
            numero_atual = numero_atual / 2;
        }
        else
        {
            numero_atual = (3 * numero_atual) + 1;
                }

        printf("%d  ", numero_atual);
        contador++;
    }

    printf("\nPassos: %d\n", contador);

    return 0;
}