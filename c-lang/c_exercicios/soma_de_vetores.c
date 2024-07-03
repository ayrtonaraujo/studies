#include <stdio.h>

int main()
{
    int quantidade;

    do
    {
        printf("Insira uma quantidade: ");
        scanf("%d", &quantidade);
    } while (quantidade <= 0);

    int array_a[quantidade], array_b[quantidade], array_c[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        printf("Insira A(%d): ", i + 1);
        scanf("%d", &array_a[i]);

        printf("Insira B(%d): ", i + 1);
        scanf("%d", &array_b[i]);

        array_c[i] = array_a[i] + array_b[i];
    }

    printf("\nSOMAS:\n");

    for (int i = 0; i < quantidade; i++)
    {
        printf("C(%d): %d\n", i + 1, array_c[i]);
    }

    return 0;
}