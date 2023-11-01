/* 3 - O cardápio de uma lanchonete é o seguinte:
    Especificação       Código      Preço
    Cachorro quente     100         R$10.20
    Bauru               101         R$10.30
    Batata Frita        102         R$10.50
    Hambúrguer          103         R$10.20
    Cheeseburger        104         R$10.30
    Refrigerante        105         R$3.00
Implemente um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. Use o comando switch-case. */

#include <stdio.h>

void ListaCodigos();

int main()
{
    int codigo, quantidade;
    float valor_pedido;

    ListaCodigos();
    scanf("%d", &codigo);
    getchar();

    while (codigo < 100 || codigo > 105)
    {
        printf("\nInsira um codigo valido.\n");
        ListaCodigos();
        scanf("%d", &codigo);
        getchar();
    }

    printf("\nInsira a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 100:
    case 103:
        valor_pedido = quantidade * 10.20;
        break;

    case 101:
    case 104:
        valor_pedido = quantidade * 10.30;
        break;

    case 102:
        valor_pedido = quantidade * 10.50;
        break;

    case 105:
        valor_pedido = quantidade * 3.0;
        break;
    }

    printf("Valor do pedido: R$ %.2f", valor_pedido);

    return 0;
}

void ListaCodigos()
{
    printf("Qual o codigo do pedido?\n");
    printf("Cachorro quente     100\n");
    printf("Bauru               101\n");
    printf("Batata Frita        102\n");
    printf("Hamburguer          103\n");
    printf("Cheeseburger        104\n");
    printf("Refrigerante        105\n");
    printf("-----------------------\nInsira um codigo: ");
}