#include <stdio.h>
#include <string.h>

int main(void)
{
    int idade, soma_idade = 0, quantidade, contador_menores_16 = 0;
    int altura, soma_altura = 0;
    float porcentagem_menores_16;

    printf("Quantas pessoas? ");
    scanf("%d", &quantidade);

    char nomes[quantidade][20];
    char nomes_menores_16[quantidade][20];

    for (int i = 0; i < quantidade; i++)
    {
        printf("\nDados da pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %s", nomes[i]);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Altura (cm): ");
        scanf("%d", &altura);

        if (idade < 16)
        {
            strcpy(nomes_menores_16[contador_menores_16], nomes[i]);

            contador_menores_16++;
        }

        soma_altura += altura;
        soma_idade += idade;
    }

    porcentagem_menores_16 = ((float)contador_menores_16 / quantidade) * 100;

    printf("\n\nAltura media: %d cm\nPessoas com menos de 16 anos: %.2f %%\n", soma_altura / quantidade, porcentagem_menores_16);

    for (int i = 0; i < contador_menores_16; i++)
    {
        printf("\n%s", nomes_menores_16[i]);
    }
}