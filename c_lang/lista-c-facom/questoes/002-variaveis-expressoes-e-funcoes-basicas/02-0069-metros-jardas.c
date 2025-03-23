/*
69. Ler um comprimento em metros e converter para jardas.
*/

#include <stdio.h>

int main()
{
    float jardas, metros;

    printf("Insira o valor em metros: ");
    scanf("%f", &metros);

    jardas = metros * 1.09361;

    printf("\nValor em jardas: %.2f", jardas);

    return 0;
}