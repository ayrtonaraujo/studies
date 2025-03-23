/*
25. Faça um programa que uma opção e três valores e calcule uma média correspondente a uma das seguintes opções:
    • A = média aritmética.
    • P = média ponderada com pesos 1, 2 e 3 para o primeiro, segundo e terceiro valor, respectivamente.
    • G = média geométrica.
    • H = média harmônica.
O programa deve aceitar as opções tanto em caracteres maiúsculos como minúsculos.
O programa deve exibir uma mensagem de erro caso a opção escolhida seja inválida.
*/

#include <stdio.h>
#include <math.h>

#define QUANTIDADE 3

int main()
{
    float numeros[QUANTIDADE], resultado;
    char letraOpcao;
    int i;

    for (i = 0; i < QUANTIDADE; i++)
    {
        printf("Insira o N%d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    printf("\n***** Escolha a operação *****");
    printf("\nA = média aritmética.");
    printf("\nP = média ponderada com pesos 1, 2 e 3 para o primeiro, segundo e terceiro valor, respectivamente.");
    printf("\nG = média geométrica.");
    printf("\nH = média harmônica");
    printf("\nSua escolha: ");
    scanf(" %c", &letraOpcao);

    switch (letraOpcao)
    {
    case 'A':
    case 'a':
        resultado = (numeros[0] + numeros[1] + numeros[2]) / QUANTIDADE;
        break;

    case 'P':
    case 'p':
        resultado = ((numeros[0] * 1.0) + (numeros[1] * 2.0) + (numeros[2] * 3.0)) / 5.0;
        break;

    case 'G':
    case 'g':
        resultado = cbrt(numeros[0] * numeros[1] * numeros[2]);
        break;

    case 'H':
    case 'h':
        resultado = QUANTIDADE / ((1 / numeros[0]) + (1 / numeros[1]) + (1 / numeros[2]));
        break;

    default:
        printf("\nOpcao invalida.");
        break;
    }

    printf("\nResultado: %.2f", resultado);

    return 0;
}