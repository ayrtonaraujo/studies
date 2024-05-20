/*
8. Faça um programa que solicite diversos valores ao usuário. Ao final, o programa deve informar o maior valor lido.
*/

#include <stdio.h>

#include <stdio.h>
#include <limits.h>

int main()
{
    int numero = 0;
    int maior_valor = INT_MIN;

    printf("Insira os valores. Digite -1 para parar.\n");

    while (1)
    {
        printf("Insira um valor: ");
        scanf("%d", &numero);

        if (numero == -1)
        {
            break;
        }

        if (numero > maior_valor)
        {
            maior_valor = numero;
        }
    }

    printf("Mario valor: %d\n", maior_valor);
}