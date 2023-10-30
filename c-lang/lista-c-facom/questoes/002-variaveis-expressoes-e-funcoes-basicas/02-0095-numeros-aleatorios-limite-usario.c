/*
95. Faça um programa que gere três valores aleatórios inteiros e maiores ou iguais que um limite inferior fornecido pelo usuário.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int i, limite_usuario;

    printf ("Qual o limite?: ");
    scanf ("%d", &limite_usuario);

    srand(time(NULL));

    for (i = 1; i <= 3; i++) {
        printf ("%d\n", rand() % (INT_MAX - limite_usuario) + limite_usuario + 1);

    }

    return 0;
}