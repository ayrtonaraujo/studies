#include <stdio.h>

int main()
{
    int quantidade;
    float media, soma = 0;

    do
    {
        printf("Qual a quantidade? ");
        scanf("%d", &quantidade);
    } while (quantidade <= 0);

    float array[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &array[i]);

        soma += array[i];
    }

    media = soma / quantidade;
    printf("\nMedia: %.3f", media);

    printf("\nAbaixo da media: ");

    for (int i = 0; i < quantidade; i++)
    {
        if (array[i] < media)
        {
            printf(" %.2f", array[i]);
        }
    }

    return 0;
}