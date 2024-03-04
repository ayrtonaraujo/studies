/*
Ler um número inteiro e maior que zero. Caso o número fornecido seja negativo, escreva uma mensagem de erro e solicite nova tentativa. Faça até cinco tentativas, se o usuário não fornecer um número válido nestas tentativas, imprima uma mensagem de erro e finalize o programa. Caso o usuário tenha fornecido um valor válido, calculeo o logaritmo natural do valor lido.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int numero, j = 2;

    printf("Insira o valor: ");
    scanf("%d", &numero);

    while (j < 6 && numero < 1)
    {
        printf("\nTentativa [%d]", j);
        printf("\nInsira um valor positivo maior que zero: ");
        scanf("%d", &numero);
        j++;
    }

    if (j > 5 && numero < 1)
    {
        printf("\nErro no valor inserido, o programa será encerrado.");
    }

    else
    {
        printf("\nLogaritmo natural: %.f", log(numero));
    }
    return 0;
}