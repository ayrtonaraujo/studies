/*
96. Faça um programa que gere três valores aleatórios inteiros e menores ou iguais que um
limite superior fornecido pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, limite_usuario;

    printf("Qual o limite?: ");
    scanf("%d", &limite_usuario);

    srand(time(NULL));

    for (i = 1; i <= 3; i++)
    {
        printf("%d\n", rand() % (limite_usuario + 1));
    }

    return 0;
}