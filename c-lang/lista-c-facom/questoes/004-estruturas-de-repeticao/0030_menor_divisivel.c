/*
30. Faça um programa que calcule o menor número divisível por cada um dos números de 1 a 20. Ex: 2520 é o menor número que pode ser dividido por cada um dos números de 1 a 10, sem sobrar resto.
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int menor_divisivel = INT_MAX, soma = 0, atual = 0;
    int i, j;

    for (i = 1; i < INT_MAX; i++)
    {
        for (j = 1; j <= 20; j++)
        {
            soma += (i % j);
        }

        if (soma == 0)
        {
            atual = i;

            if (menor_divisivel > atual)
            {
                menor_divisivel = atual;
            }
        }

        soma = 0;
    }

    printf("Menor divisivel: %d", menor_divisivel);
}
