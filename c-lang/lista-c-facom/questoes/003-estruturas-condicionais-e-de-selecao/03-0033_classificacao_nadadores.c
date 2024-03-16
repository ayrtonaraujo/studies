/*
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das categorias especificadas na tabela 3.8.
*/

#include <stdio.h>

int main()
{
    int idade_nadador;

    printf("Insira a idade: ");
    scanf("%d", &idade_nadador);

    
    while (idade_nadador < 5)
    {
        printf("\nIdade invalida.");
        printf("\nInsira a idade: ");
        scanf("%d", &idade_nadador);    
    }

    if (idade_nadador >= 5 && idade_nadador <= 7)
    {
        printf("\nCategoria: Infantil A.");
    }

    if (idade_nadador >= 8 && idade_nadador <= 10)
    {
        printf("\nCategoria: Infantil B.");
    }

    if (idade_nadador >= 11 && idade_nadador <= 13)
    {
        printf("\nCategoria: Infanto-juvenil.");
    }

    if (idade_nadador >= 14 && idade_nadador <= 17)
    {
        printf("\nCategoria: Juvenil.");
    }

    if (idade_nadador >= 18)
    {
        printf("\nCategoria: Senior.");
    }

    return 0;
}