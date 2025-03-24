/* 4. Faça um programa que gere e exiba, por extenso, números aleatórios entre 0 (zero) e 15. O programa deve gerar os números até que o número 15 seja sorteado. O programa deve exibir também, ao final, a quantidade de números gerados. */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define LIMITE_MINIMO 0
#define LIMITE_MAXIMO 16

int main()
{
    // funcao de aleatoriedade baseada no tempo
    srand(time(NULL));

    int contador = 0, numero_aleatorio = 0;

    while (numero_aleatorio != 15)
    {
        numero_aleatorio = LIMITE_MINIMO + rand() % (LIMITE_MAXIMO - LIMITE_MINIMO);

        switch (numero_aleatorio)
        {
        case 0:
            printf("zero\t");
            break;
        case 1:
            printf("um\t");
            break;
        case 2:
            printf("dois\t");
            break;
        case 3:
            printf("tres\t");
            break;
        case 4:
            printf("quatro\t");
            break;
        case 5:
            printf("cinco\t");
            break;
        case 6:
            printf("seis\t");
            break;
        case 7:
            printf("sete\t");
            break;
        case 8:
            printf("oito\t");
            break;
        case 9:
            printf("nove\t");
            break;
        case 10:
            printf("dez\t");
            break;
        case 11:
            printf("onze\t");
            break;
        case 12:
            printf("doze\t");
            break;
        case 13:
            printf("treze\t");
            break;
        case 14:
            printf("quatorze\t");
            break;
        case 15:
            printf("quinze\t");
            break;
        default:
            // printf("Número fora do intervalo\t");
            break;
        }

        contador++;
    }

    printf("\nQuantidade de numeros gerados: %d", contador);

    return 0;
}