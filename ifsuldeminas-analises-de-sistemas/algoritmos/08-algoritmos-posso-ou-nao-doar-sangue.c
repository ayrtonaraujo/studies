/*
O sistema de doação de sangue deve seguir os seguintes critérios:
    - Se a idade for menor que 16 anos ou maior que 70 anos não pode doar.
    - Se a idade for entre 16 e 69 anos, pode doar, porém deve verificar se o peso do doador é o no mínimo 50kg.
*/

#include <stdio.h>

int main()
{
    int idade, peso;

    printf("Idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Peso: ");
    scanf("%d", &peso);
    getchar();

    (idade >= 16 && idade <= 69 && peso >= 50) ? printf("\nPode doar.") : printf("\nNão pode doar.");

    return 0;
}
