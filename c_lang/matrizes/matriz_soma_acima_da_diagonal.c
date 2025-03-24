/*
Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. Mostrar a soma dos elementos acima da diagonal principal. Um exemplo de números acima da diagonal principal é mostrado ao lado.
*/

#include <stdio.h>

int main()
{
    int i, j, tamanho_matriz, soma = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &tamanho_matriz);

    } while (tamanho_matriz <= 0 || tamanho_matriz > 10);

    int matriz[tamanho_matriz][tamanho_matriz];

    for (i = 0; i < tamanho_matriz; i++)
    {
        for (j = 0; j < tamanho_matriz; j++)
        {
            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }

        for (j = i + 1; j < tamanho_matriz; j++)
        {
            soma += matriz[i][j];
        }
    }

    printf("\nSoma:\n%d", soma);

    return 0;
}