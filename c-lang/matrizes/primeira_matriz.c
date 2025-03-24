#include <stdio.h>

int main()
{
    int i, j, n_linhas, n_colunas;

    do
    {
        printf("Quantas linhas?: ");
        scanf("%d", &n_linhas);

        printf("Quantas colunas?: ");
        scanf("%d", &n_colunas);

    } while (n_linhas <= 0 || n_colunas <= 0);

    int matriz[n_linhas][n_colunas];

    for (i = 0; i < n_linhas; i++)
    {
        for (j = 0; j < n_colunas; j++)
        {
            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");

    for (i = 0; i < n_linhas; i++)
    {
        for (j = 0; j < n_colunas; j++)
        {
            printf("%d\t", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}