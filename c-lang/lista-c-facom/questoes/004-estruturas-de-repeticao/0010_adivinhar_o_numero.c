/*
10. Faça um programa que gere um número aleatório no intervalo [0;1000] e peça o usuário para adivinhar o número. Caso o usuário acerte, imprima uma mensagem parabenizando o usuário e finalize o programa, caso contrário diga se o número fornecido está acima ou abaixo do valor correto e permita que o usuário faça uma nova tentativa. No final, mostre a quantidade de tentativas necessárias para acertar o número sorteado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define LIMITE_MINIMO 0
#define LIMITE_MAXIMO 1001

int main()
{
    int numero_sorteado, numero_usuario, tentativas = 0;

    srand(time(NULL));
    numero_sorteado = LIMITE_MINIMO + rand() % (LIMITE_MAXIMO - LIMITE_MINIMO);

    printf("\n%d", numero_sorteado);

    do
    {
        printf("\nInsira seu palpite: ");
        scanf("%d", &numero_usuario);
        tentativas++;

        if (numero_usuario < numero_sorteado)
        {
            printf("\nO numero sorteado e maior que %d", numero_usuario);
        }
        else if (numero_usuario > numero_sorteado)
        {
            printf("\nO numero sorteado e menor que %d", numero_usuario);
        }
    } while (numero_usuario != numero_sorteado);
    

    printf("\nNumero Sorteado: %d", numero_sorteado);
    printf("\nNumero de Tentativas: %d", tentativas);

    return 0;
}