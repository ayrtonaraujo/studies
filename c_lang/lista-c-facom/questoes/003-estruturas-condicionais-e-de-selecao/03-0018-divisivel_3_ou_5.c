/*
18. Faça um programa para verificar se um determinado número, fornecido pelo usuário, é divisível por 3 ou por 5 mas não por ambos.
*/

#include <stdio.h>

int main()
{
    int numeroFornecido; // para essa questao irei considerar o numero como inteiro

    printf("Insira o numero: ");
    scanf("%d", &numeroFornecido);

    if ((numeroFornecido % 3) == 0 && (numeroFornecido % 5) != 0)
    {
        printf("\nO numero eh divisivel apenas por 3");
    }

    if ((numeroFornecido % 3) != 0 && (numeroFornecido % 5) == 0)
    {
        printf("\nO numero eh divisivel apenas por 5");
    }

    if (((numeroFornecido % 3) + (numeroFornecido % 5)) == 0)
    {
        printf("\nO numero eh divisivel por 3 e 5.");
    }

    if ((numeroFornecido % 3) != 0 && (numeroFornecido % 5) != 0)
    {
        printf("\nO numero nao eh divisivel por 3 e 5.");
    }

    return 0;
}