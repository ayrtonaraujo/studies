/*
6. A granja Frangotech possui um controle automatizado de cada frango da sua produção. No pé direito do frango há um anel com um chip de identificação;   no pé esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento   custa R$3,50, faça um programa para calcular o gasto total da granja para marcar todos os seus frangos.
*/

#include <stdio.h>

#define VALOR_ANEL_ALIMENTO 3.50
#define VALOR_CHIP 4.00

int main ()
{
    float quantidade_frangos;

    printf ("Qtd de frangos: ");
    scanf ("%f", &quantidade_frangos);

    //e possivel fazer tudo dentro da funcao print, mas se fizer necessario criar mais variaveis para armazenar os valores das operacoes, do it...

    printf ("\nQtd de aneis de chip: %0.f\nCusto dos chips: %.2f\n\nQtd de aneis de alimento:%0.f\nCusto dos aneis: %.2f", quantidade_frangos, quantidade_frangos * VALOR_CHIP, quantidade_frangos * 2.0, quantidade_frangos * 2.0 * VALOR_ANEL_ALIMENTO);


    return 0;
}