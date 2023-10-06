/*
6. [DESAFIO] Foi feita uma estatística em 5 cidades para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:
    a) código da cidade;
    b) número de veículos de passeio;
    c) número de acidentes de trânsito com vítimas.
Deseja-se saber:
    - qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem;
    - qual a média de veículos nas 5 cidades juntas;
    - qual a média de acidentes nas 5 cidades juntas.
*/

#include <stdio.h>

#define QTD_DE_CIDADES 5

// f(x)
void maiorMenorIndice(int acidentes[], int cidade[]);
float mediaCalculo(int vetor[], int quantidade);

int main()
{
    int numero_veiculos[5] = {0, 0, 0, 0, 0};
    int numero_acidentes[5] = {0, 0, 0, 0, 0};
    int codigo_cidade[5] = {0, 0, 0, 0, 0};

    for (int i = 1; i <= QTD_DE_CIDADES; i++)
    {
        printf("Codigo da cidade (apenas numeros): ");
        scanf("%d", &codigo_cidade[i - 1]);

        printf("Numero de veiculos: ");
        scanf("%d", &numero_veiculos[i - 1]);

        printf("Numero de acidentes: ");
        scanf("%d", &numero_acidentes[i - 1]);

        printf("\n");
    }

    // resultados
    printf("==================\n");

    printf("\nMedia de Veiculos: %.2f", mediaCalculo(numero_veiculos, QTD_DE_CIDADES));
    printf("\nMedia de Acidentes: %.2f", mediaCalculo(numero_acidentes, QTD_DE_CIDADES));
    maiorMenorIndice(numero_acidentes, codigo_cidade);

    return 0;
}

void maiorMenorIndice(int acidente[], int cidade[])
{
    int maior = acidente[0];
    int indice_maior = 0;
    int i;

    for (i = 1; i < QTD_DE_CIDADES; i++)
    {
        if (maior < acidente[i])
        {

            maior = acidente[i];
            indice_maior = i;
        }
    }

    printf("\nA cidade \"%d\" possui o *maior* numero de acidentes (\"%d\")", cidade[indice_maior], maior);

    int menor = acidente[0];
    int indice_menor = 0;

    for (i = 1; i < QTD_DE_CIDADES; i++)
    {
        if (menor > acidente[i])
        {
            menor = acidente[i];
            indice_menor = i;
        }
    }

    printf("\nA cidade \"%d\" possui o *menor* numero de acidentes (\"%d\")", cidade[indice_menor], menor);
}

float mediaCalculo(int vetor[], int quantidade)
{
    float soma = 0;

    for (int i = 0; i < QTD_DE_CIDADES; i++)
    {
        soma += vetor[i];
    }

    float media = soma / quantidade;

    return media;
}