#include <stdio.h>

int main()
{
    int n1, n2, auxiliar, soma = 0;

    printf("Insira o N1: ");
    scanf("%d", &n1);

    printf("Insira o N1: ");
    scanf("%d", &n2);

    if (n1 > n2) // se for decrescente
    {
        auxiliar = n1;
        n1 = n2;
        n2 = auxiliar;
    }

    for (int i = n1 + 1; i < n2 - 1; i++)
    {
        if (i % 2 != 0)
        {
            soma += i;
        }
    }

    printf("\n%d", soma);

    return 0;
}