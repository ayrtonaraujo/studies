/*
3. Faça um pseudocódigo que receba a idade de 5 pessoas e que calcule e mostre a quantidade de pessoas com idade maior ou igual a 18 anos.
*/

#include <stdio.h>

#define NUMERO_DE_PESSOAS 5

int main()
{
    int idade[NUMERO_DE_PESSOAS];
    int maiores_de_idade = 0;

    for (int i = 1; i <= NUMERO_DE_PESSOAS; i++)
    {
        printf("Idade da Pessoa #%d: ", i);
        scanf("%d", &idade[i - 1]);
        getchar();

        if (idade[i - 1] < 0)
        {
            printf("Insira um valor valido. >= 0.\n");
            i--;
            continue;
        }

        if (idade[i - 1] >= 18)
        {
            maiores_de_idade++;
        }
    }

    printf("\nQuantidade de maiores de idade: %d", maiores_de_idade);

    return 0;
}