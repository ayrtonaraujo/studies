/*
Um número n no intervalo de 100 a 999 é chamado número de Angstron se n obedece a seguinte regra:
n = centenas3 + dezenas3 + unidades3
Exemplo:
153 = 13 + 53 + 33
Escreva um programa que leia um número inteiro no intervalo [100;999] e verifique o é um número de Angstron.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int numero, angstronVerify;

    printf("Insira o numero (100 a 999): ");
    scanf("%d", &numero);

    while (numero < 100 || numero > 999)
    {
        printf("\nErro.");
        printf("\nInsira o numero: ");
        scanf("%d", &numero);
    }

    // angstronVerify = (((numero % 10) * 10) + 3); //usei para checar as operacoes de resto

    angstronVerify = pow((numero / 100), 3) + pow(((numero % 100) / 10), 3) + pow((numero % 10), 3);

    // printf ("\n%d", angstronVerify);

    if (angstronVerify == numero)
    {
        printf("\nEh um numero angstron!");
    }

    else
    {
        printf("\nNao eh um numero angstron!");
    }

    return 0;
}