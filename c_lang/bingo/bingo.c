#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_NUMEROS 75
#define NUMEROS_SORTEADOS 25
#define LIMITE_LETRA 15

int main(void)
{
    srand(time(NULL));

    int numeros[TOTAL_NUMEROS];
    int numeros_sorteados[NUMEROS_SORTEADOS];
    int i, j, troca;

    int B[LIMITE_LETRA] = {0}, I[LIMITE_LETRA] = {0}, N[LIMITE_LETRA] = {0}, G[LIMITE_LETRA] = {0}, O[LIMITE_LETRA] = {0};

    // Preencher array de numeros
    for (i = 0; i < TOTAL_NUMEROS; i++)
    {
        numeros[i] = i + 1;
    }

    // Embaralhar os números
    for (i = TOTAL_NUMEROS - 1; i > 0; i--)
    {
        j = rand() % (i + 1);
        troca = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = troca;
    }

    // Seleção de numeros sorteados
    for (i = 0; i < NUMEROS_SORTEADOS; i++)
    {
        numeros_sorteados[i] = numeros[i];
    }

    // Distribuir os números sorteados nas colunas B, I, N, G, O
    int b_count = 0, i_count = 0, n_count = 0, g_count = 0, o_count = 0;
    for (i = 0; i < NUMEROS_SORTEADOS; i++)
    {
        if (numeros_sorteados[i] > 0 && numeros_sorteados[i] <= 15)
        {
            B[b_count++] = numeros_sorteados[i];
        }
        else if (numeros_sorteados[i] > 15 && numeros_sorteados[i] <= 30)
        {
            I[i_count++] = numeros_sorteados[i];
        }
        else if (numeros_sorteados[i] > 30 && numeros_sorteados[i] <= 45)
        {
            N[n_count++] = numeros_sorteados[i];
        }
        else if (numeros_sorteados[i] > 45 && numeros_sorteados[i] <= 60)
        {
            G[g_count++] = numeros_sorteados[i];
        }
        else if (numeros_sorteados[i] > 60 && numeros_sorteados[i] <= 75)
        {
            O[o_count++] = numeros_sorteados[i];
        }
    }

    // Imprimir os números sorteados em formato de tabela
    printf("B\tI\tN\tG\tO\n");
    for (i = 0; i < LIMITE_LETRA; i++)
    {
        if (B[i] != 0)
            printf("%d\t", B[i]);
        else
            printf("\t");

        if (I[i] != 0)
            printf("%d\t", I[i]);
        else
            printf("\t");

        if (N[i] != 0)
            printf("%d\t", N[i]);
        else
            printf("\t");

        if (G[i] != 0)
            printf("%d\t", G[i]);
        else
            printf("\t");

        if (O[i] != 0)
            printf("%d\t", O[i]);
            
        else
            printf("\t");
        printf("\n");
    }

    return 0;
}