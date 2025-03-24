#include <stdio.h>

int main()
{
    int i, j, tamanho_matriz;
    float soma_positivos = 0;

    do
    {
        printf("Tamanho da matriz: ");
        scanf("%d", &tamanho_matriz);

    } while (tamanho_matriz <= 0 || tamanho_matriz > 10);

    float matriz[tamanho_matriz][tamanho_matriz];

    for (i = 0; i < tamanho_matriz; i++)
    {
        for (j = 0; j < tamanho_matriz; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);

            if (matriz[i][j] >= 0)
            {
                soma_positivos += matriz[i][j];
            }
        }
    }

    printf("\nSOMA DOS POSITIVOS: %.2f", soma_positivos);

    // linha
    do
    {
        printf("\n\nSelecione uma linha: ");
        scanf("%d", &i);
    } while (i < 0 || i > tamanho_matriz - 1);

    for (j = 0; j < tamanho_matriz; j++)
    {
        printf("%.2f, ", matriz[i][j]);
    }
    printf("\n");
    // coluna
    do
    {
        printf("\nSelecione uma coluna: ");
        scanf("%d", &j);
    } while (j < 0 || j > tamanho_matriz - 1);

    for (i = 0; i < tamanho_matriz; i++)
    {
        printf("%.2f, ", matriz[i][j]);
    }

    // diagonal principal
    printf("\n\nDIAGONAL PRINCIPAL:\n");
    for (i = 0; i < tamanho_matriz; i++)
    {
        printf("%.2f, ", matriz[i][i]);
    }

    printf("\n\n");

    // negativos²
    printf("NEGATIVO AO QUADRADO:\n");
    for (i = 0; i < tamanho_matriz; i++)
    {
        for (j = 0; j < tamanho_matriz; j++)
        {
            if (matriz[i][j] < 0)
            {
                matriz[i][j] = matriz[i][j] * matriz[i][j];
            }

            printf("%.2f  ", matriz[i][j]);
        }
        printf("\n");
    }
}