/*
Escrever um programa que leia o código de um produto escolhido do cardápio de uma lanchonete e a quantidade. Assim, o programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada execução somente um pedido será realizado. O cardápio da lanchonete é exibido na tabela 3.7.
*/

#include <stdio.h>

int main()
{

    int codigo_lanche;
    float valor_a_pagar;

    printf("********** CARDAPIO **********\n\n");
    printf("DESCRICAO\t\t|| CODIGO\n");
    printf("Cachorro quente\t\t   100\n");
    printf("Bauru simples  \t\t   101\n");
    printf("Bauru com ovo  \t\t   102\n");
    printf("Hamburguer     \t\t   103\n");
    printf("Cheeseburguer  \t\t   104\n");
    printf("Suco           \t\t   105\n");
    printf("Refrigerante   \t\t   106\n");

    printf("\n\nInsira o codigo do seu pedido: ");
    scanf("%d", &codigo_lanche);

    switch (codigo_lanche)
    {
    case 100:
        valor_a_pagar = 1.2;
        break;

    case 101:
        valor_a_pagar = 1.3;
        break;

    case 102:
        valor_a_pagar = 1.5;
        break;

    case 103:
        valor_a_pagar = 1.2;
        break;

    case 104:
        valor_a_pagar = 1.7;
        break;

    case 105:
        valor_a_pagar = 2.2;
        break;

    case 106:
        valor_a_pagar = 1.0;
        break;

    default:
        printf("\n*!* ERROR *!* Codigo inexistente.");
        valor_a_pagar = 0;
        break;
    }

    printf("\nValor a pagar: %.2f", valor_a_pagar);

    return 0;
}