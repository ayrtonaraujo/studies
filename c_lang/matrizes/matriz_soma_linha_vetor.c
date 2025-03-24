/*
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
*/

#include <stdio.h>

int main()
{
    int m, n, i, j, k;
    float soma_troca = 0;

    do
    {
        printf("Linhas: ");
        scanf("%d", &m);
        printf("Colunas: ");
        scanf("%d", &n);
    } while (m <= 0 || n <= 0 || m > 10 || n > 10);

    float matriz[m][n];
    float vetor[m];

    // loop matriz
    for (i = 0; i < m; i++)
    {
        soma_troca = 0;

        for (j = 0; j < n; j++)
        {
            printf("Elemento [%d,%d]:", i, j);
            scanf("%f", &matriz[i][j]);

            soma_troca += matriz[i][j];

            vetor[i] = soma_troca;
        }
    }

    printf("\nResultado vetor:\n");
    for (k = 0; k < m; k++)
    {
        printf("%.2f\n", vetor[k]);
    }

    return 0;
}