/*
3. Foi feita uma estatística em 5 cidades para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:
a) código da cidade;
b) número de veículos de passeio;
c) número de acidentes de trânsito com vítimas

Deseja-se saber:
- qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem;
- qual a média de veículos nas 5 cidades juntas;
- qual a média de acidentes nas 5 cidades juntas
*/

#include <stdio.h>

#define NUM_CIDADES 5

void Indices(int a, int b, int c, int d, float e, float f);

int main()
{
    int contador = 0;
    float mediaVeiculos = 0, mediaAcidentes = 0;
    int menorIndice_acidentes = 1000000, maiorIndice_acidentes = 0, cidadeMaior_acidentes, cidadeMenorAcidentes, i = 0;

    int codigosCidade[NUM_CIDADES] = {001, 002, 003, 004, 005};
    int numeroVeiculos[NUM_CIDADES] = {};
    int acidentesCidade[NUM_CIDADES] = {};

    // definicao
    while (contador < NUM_CIDADES)
    {
        printf("\n*** CIDADE [%.3d] ***\n", codigosCidade[contador]);

        printf("Insira o numero de carros: ");
        scanf("%d", &numeroVeiculos[contador]);

        printf("Insira o numero de acidentes: ");
        scanf("%d", &acidentesCidade[contador]);

        if (acidentesCidade[contador] > maiorIndice_acidentes)
        {
            maiorIndice_acidentes = acidentesCidade[contador];
            cidadeMaior_acidentes = codigosCidade[contador];
        }

        if (acidentesCidade[contador] < menorIndice_acidentes)
        {
            menorIndice_acidentes = acidentesCidade[contador];
            cidadeMenorAcidentes = codigosCidade[contador];
        }

        contador++;
    }

    // medias
    while (i < NUM_CIDADES)
    {

        mediaAcidentes += acidentesCidade[i];
        mediaVeiculos += numeroVeiculos[i];

        i++;
    }

    mediaAcidentes = mediaAcidentes / NUM_CIDADES;
    mediaVeiculos = mediaVeiculos / NUM_CIDADES;

    // resultados
    Indices(cidadeMaior_acidentes, maiorIndice_acidentes, cidadeMenorAcidentes, menorIndice_acidentes, mediaVeiculos, mediaAcidentes);

    return 0;
}

void Indices(int a, int b, int c, int d, float e, float f)
{
    printf("\n----------------");
    printf("\nCidade com maior numero de acidentes: %.3d | Total: %.d", a, b);
    printf("\nCidade com menor numero de acidentes: %.3d | Total: %.d", c, d);
    printf("\nMedia de Veiculos: %.2f", e);
    printf("\nMedia de Acidentes: %.2f", f);
}