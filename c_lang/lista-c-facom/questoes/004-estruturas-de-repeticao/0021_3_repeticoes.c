/*
Escreva um programa em C que escreva na tela de 1 em 1, de 1 até 100, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda while e a terceira do while
*/

#include <stdio.h>

void pularLinha();

int main()
{
    int contador = 0, i;

    for (i = 1; i <= 100; i++)
    {
        printf("%d\t", i);
    }

    pularLinha();

    while (contador != 100)
    {
        contador++;
        printf("%d\t", contador);
    }

    contador = 0;
    pularLinha();

    do
    {
        contador++;
        printf("%d\t", contador);
    } while (contador != 100);

    return 0;
}

void pularLinha()
{
    printf("\n\n");
}