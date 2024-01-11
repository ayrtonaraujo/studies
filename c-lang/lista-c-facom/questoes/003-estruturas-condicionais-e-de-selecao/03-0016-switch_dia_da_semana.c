/*
16. Usando o switch, escreve um programa que leia um número inteiro de 1 a 7 e imprima o dia da semana correspondente a este número, isto é, domingo=1, segunda-feira=2, etc.
*/

#include <stdio.h>

int main ()
{   
    int dia;

    printf ("Insira o dia da semana (1 a 7): ");
    scanf ("%d", &dia);

    
    while (dia < 1 || dia > 7)
    {
        printf ("\nNumero incorreto.");
        printf ("\nInsira o dia da semana (1 a 7): ");
        scanf ("%d", &dia);
    }

    switch (dia)
    {
    case 1:
        printf("Segunda-feira.");
        break;
    case 2:
        printf("Terça-feira.");
        break;
    case 3:
        printf("Quarta-feira.");
        break;
    case 4:
        printf("Quinta-feira.");
        break;
    case 5:
        printf("Sexta-feira.");
        break;
    case 6:
        printf("Sábado.");
        break;
    case 7:
        printf("Domingo.");
        break;
    }

    printf ("\nTenha um ótimo dia!");

    return 0;
}


