/*
Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento de cada linha. Suponha não haver empates.
*/

#include <stdio.h>
#include <limits.h>

int main()
{

    int i, j, tamanho_matriz;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &tamanho_matriz);

    } while (tamanho_matriz <= 0 || tamanho_matriz > 10);

    int maior_elemento[tamanho_matriz];

    int matriz[tamanho_matriz][tamanho_matriz];

    for (i = 0; i < tamanho_matriz; i++)
    {
        maior_elemento[i] = INT_MIN;

        for (j = 0; j < tamanho_matriz; j++)
        {
            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maior_elemento[i])
            {
                maior_elemento[i] = matriz[i][j];
            }
        }
    }

    printf("\nMaior elemento de cada linha: \n");

    for (i = 0; i < tamanho_matriz; i++)
    {
        printf("%d\n", maior_elemento[i]);
    }

    return 0;
}