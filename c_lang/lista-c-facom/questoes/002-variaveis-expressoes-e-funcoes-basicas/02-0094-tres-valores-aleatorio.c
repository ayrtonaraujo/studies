/*
94. Faça um programa que gere três valores aleatórios inteiros.
Dica: use as funções rand e srand, ambas definidas na biblioteca stdlib.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{   
    int i;

    srand(time(NULL));

    for (i = 1; i <= 3; i++ )
    {
        printf ("%d\n", rand());
    }

    


    return 0;
}