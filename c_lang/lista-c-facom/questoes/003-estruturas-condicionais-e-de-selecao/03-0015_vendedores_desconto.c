/*
15. Escrever um programa para ajudar vendedores. A partir de um valor total lido, mostrar:
    • O total a pagar com desconto de 10%;
    • O valor de cada parcela, no parcelamento de 3x sem juros;
    • A comissão do vendedor que é de 5% do valor com desconto (para vendas a vista) ou de 5% sobre o valor total (para vendas parceladas).
*/

#include <stdio.h>

#define NUMERO_DE_PARCELAS 3.0
#define DESCONTO 0.1
#define COMISSAO 0.05

void linhaPontilhada();

int main()
{
    float valorParcelado, valorDesconto, valorComissaoAVista, valorComissaoParcelado, valorCompra;

    printf("Insira o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    valorParcelado = valorCompra / NUMERO_DE_PARCELAS;

    valorDesconto = valorCompra - (valorCompra * DESCONTO);

    valorComissaoAVista = valorDesconto * COMISSAO;

    valorComissaoParcelado = valorCompra * COMISSAO;

    linhaPontilhada();

    printf("\nValor com desconto (10%%): R$ %.2f ", valorDesconto);
    printf("\nValor da Parcela (3x)): R$ %.2f ", valorParcelado);
    linhaPontilhada();
    printf("\nValor da Comissao\nA vista: R$ %.2f\nParcelado: R$ %.2f ", valorComissaoAVista, valorComissaoParcelado);

    return 0;
}

void linhaPontilhada()
{
    printf("\n-------------------");
}