#include <stdio.h>
#include <string.h>

void Relatorio(int a, int b, int c, float d, float e, float f);

int main()
{
    int quantidade, contador_menor_10 = 0, contador_ente_10_20 = 0, contador_acima_20 = 0;
    float lucro, total_compra = 0, total_venda = 0, total_lucro = 0;

    do
    {
        printf("Qual a quantidade? ");
        scanf("%d", &quantidade);

    } while (quantidade <= 0);

    float compra[quantidade];
    float venda[quantidade];
    char descricao[quantidade][50];

    for (int i = 0; i < quantidade; i++)
    {

        printf("\nProduto %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %s", descricao[i]);

        printf("Preco da compra: ");
        scanf("%f", &compra[i]);

        printf("Preco de venda: ");
        scanf("%f", &venda[i]);

        // regra de tres [lucro]
        lucro = ((venda[i] * 100.00) / compra[i]) - 100.0;

        // contadores
        if (lucro < 10.0)
        {
            contador_menor_10++;
        }
        else if (lucro >= 10.0 && lucro <= 20.0)
        {
            contador_ente_10_20++;
        }
        else if (lucro > 20.0)
        {
            contador_acima_20++;
        }

        total_compra += compra[i];
        total_venda += venda[i];
    }

    total_lucro = total_venda - total_compra;

    Relatorio(contador_menor_10, contador_ente_10_20, contador_acima_20, total_compra, total_venda, total_lucro);

    return 0;
}

void Relatorio(int a, int b, int c, float d, float e, float f)
{
    printf("\nRELATORIO:");
    printf("\nLucro abaixo de 10%%: %d", a);
    printf("\nLucro entre 10%% a 20%%: %d", b);
    printf("\nLucro acima de 20%%: %d", c);
    printf("\nValor total de compra: %.2f", d);
    printf("\nValor total de venda: %.2f", e);
    printf("\nLucro total: %.2f", f);
}