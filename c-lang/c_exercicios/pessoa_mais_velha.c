#include <stdio.h>
#include <string.h>

int main()
{
    int quantidade;
    int maior_idade = 0;
    char maior_nome[20];

    do
    {
        printf("Qual a quantidade? ");
        scanf("%d", &quantidade);

    } while (quantidade <= 0);

    int idade[quantidade];
    char nome[quantidade][20];

    for (int i = 0; i < quantidade; i++)
    {
        printf("\nNome da %dª pessoa: ", i + 1);

        printf("\nNome: ");
        scanf(" %19s", nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        if (idade[i] > maior_idade) 
        {
            maior_idade = idade[i];
            strcpy(maior_nome, nome[i]);
        }
    }

    printf ("\nPessoa mais velha: %s\nIdade: %d", maior_nome, maior_idade);

    return 0;
}