#include <stdio.h>

int main()
{
    float troca = 0;
    int quantidade, i, maior_posicao;

    do
    {
        printf("Quantos numeros voce ira digitar? ");
        scanf("%d", &quantidade);
    } while (quantidade <= 0);

    float array_numeros[quantidade];

    for (i = 0; i < quantidade; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &array_numeros[i]);

        if (array_numeros[i] > troca)
        {
            maior_posicao = i;
        }

        troca = array_numeros[i];
    }

    printf("\nMaior posicao: %d", maior_posicao);

    return 0;
}