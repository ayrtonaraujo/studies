/*
55. Três amigos fizeram um bolão e jogaram na loteria. Caso eles ganhem, o
prêmio deve ser repartido proporcionalmente ao valor que cada um contribuiu
para a realização das apostas. Faça um programa que lê quanto cada
apostador investiu, lê o valor do prêmio e escreve quanto cada um
ganharia.
*/


#include <stdio.h>


int main ()
{
    float amigo_1, amigo_2, amigo_3, parte_amigo_1,
          parte_amigo_2, parte_amigo_3, total, premio,
          porcentagem_amigo_1, porcentagem_amigo_2, porcentagem_amigo_3;

    printf ("Valor do premio?: R$ ");
    scanf ("%f", &premio);

    printf ("Amigo 1: R$ ");
    scanf ("%f", &amigo_1);

    printf ("Amigo 2: R$ ");
    scanf ("%f", &amigo_2);

    printf ("Amigo 3: R$ ");
    scanf ("%f", &amigo_3);


    total = amigo_1 + amigo_2 + amigo_3;

    parte_amigo_1 = (((amigo_1 * 100.0) / total) / 100.0) * premio;
    parte_amigo_2 = (((amigo_2 * 100.0) / total) / 100.0) * premio;
    parte_amigo_3 = (((amigo_3 * 100.0) / total) / 100.0) * premio;

    porcentagem_amigo_1 = (amigo_1 * 100.0) / total;
    porcentagem_amigo_2 = (amigo_2 * 100.0) / total;
    porcentagem_amigo_3 = (amigo_3 * 100.0) / total;


    printf ("\n-----------\n");
    printf ("Divisao do premio: ");
    printf ("\nParte do Amigo 1: R$ %.2f (%.1f %%)",  parte_amigo_1, porcentagem_amigo_1 );
    printf ("\nParte do Amigo 2: R$ %.2f (%.1f %%)",  parte_amigo_2, porcentagem_amigo_2 );
    printf ("\nParte do Amigo 3: R$ %.2f (%.1f %%)",  parte_amigo_3, porcentagem_amigo_3 );


    return 0;
}