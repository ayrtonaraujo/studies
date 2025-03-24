/*
85. Um cercado contém patos e coelhos. Faça um programa que solicita o total de cabeças e o total de patas, e escreve quantos patos e quantos coelhos existem no cercado.
*/

#include <stdio.h>

int main()
{
    int coelhos, patos, patas, cabecas;

    printf("Qual o numero de cabecas?: ");
    scanf("%d", &cabecas);

    printf("Qual o numeros de patas?: ");
    scanf("%d", &patas);

    /*
    Esse problema é resolvido com um sistema algebrico:

    50 coelhos e 20 patos

    coelhos + patos = 70 cabeças
    4 patas (coelhos) + 2 patas (patos) = 240 patas

    x + y = 70
    4x + 2y = 240

    multiplica a primeira linha por (-2) e obtem-se:

    2x = 100
    x = 100/2
    x = 50 (50 coelhos)

    x + y = 70
    50 + y = 70
    y = 70-50
    y = 20 (20 patos)

    logo....
    */

    coelhos = (patas - cabecas * 2) / 2;
    patos = cabecas - coelhos;

    printf("Coelhos: %d\nPatos: %d", coelhos, patos);

    return 0;
}