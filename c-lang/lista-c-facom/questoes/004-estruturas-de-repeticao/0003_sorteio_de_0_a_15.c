/*
3. Faça um programa que gere e exiba numeros aleatorios entre 0 (zero) e 15. O programa deve gerar números até que o número 0 (zero) seja sorteado. Faça três versões desse programa, cada uma usando uma estrutura de repetição diferente (for, while, do-while). Qual das três estruturas é a mais adequada para este programa? Por que?
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define LIMITE_MINIMO 0
#define LIMITE_MAXIMO 15

int main()
{
    // funcao de aleatoriedade baseada no tempo
    srand(time(NULL));

    for (int i = 1; i <= 3; i++)
    {
        printf("%d\n", LIMITE_MINIMO + rand() % (LIMITE_MAXIMO - LIMITE_MINIMO));
    }

    return 0;
}