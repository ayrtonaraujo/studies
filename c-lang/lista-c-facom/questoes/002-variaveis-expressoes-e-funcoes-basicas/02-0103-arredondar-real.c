/*
103. Ler um número real e arredondar para o número mais próximo.
Obs.: não é necessário o uso de estruturas condicionais neste programa.
Dica: use a função ceil ou floor da biblioteca math.h.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float numero;

    printf("Digite seu numero: ");
    scanf("%f", &numero);

    printf("\nArredondado pra cima: %.2f", ceil(numero));
    printf("\nArredondado pra baixo: %.2f", floor(numero));

    return 0;
}