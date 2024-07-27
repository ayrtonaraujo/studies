#include <stdio.h>

int main()
{
    int i, j, tamanho_matriz;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &tamanho_matriz);

    } while (tamanho_matriz <= 0);

    int matriz[tamanho_matriz][tamanho_matriz];

    for (i = 0; i < tamanho_matriz; i++)
    {
        for (j = 0; j < tamanho_matriz; j++)
        {
            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");

    for (i = 0; i < tamanho_matriz; i++)
    {
        printf("%d\t", matriz[i][i]);
    }

    return 0;
}