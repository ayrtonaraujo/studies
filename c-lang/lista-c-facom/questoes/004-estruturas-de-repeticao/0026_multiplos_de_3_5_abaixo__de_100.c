/*
26. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 e de 5.
*/

#include <stdio.h>

int main()
{
    int contador = 0, soma = 0;

    while (contador < 999)
    {
        contador++;

        if (contador % 3 == 0 || contador % 5 == 0)
        {
            soma += contador;
        }
    }

    printf("SOMAS:\nMultiplos: %d", soma);

    return 0;
}