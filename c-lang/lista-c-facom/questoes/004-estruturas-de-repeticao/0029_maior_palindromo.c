/*
29. Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois números de 3 dígitos. Ex: O maior palíndromo feito a partir do produto de
números de dois dígitos é 9009 (que é resultado de 91*99).
*/

#include <stdio.h>
#include <limits.h>

#define DIGITO_MIN 100
#define DIGITO_MAX 999

int main ()
{
    int maior_palindromo = 0, produto_atual = 0, numero_original, reverso;
    int i, j;

    for (i = DIGITO_MIN; i <= DIGITO_MAX; i++)
    {
        for (j = i; j <= DIGITO_MAX; j++)
        {
            produto_atual = i * j;
            numero_original = produto_atual;
            reverso = 0;

            while (numero_original != 0)
            {
                reverso = reverso * 10 + numero_original % 10;
                printf("%d\n", reverso);
                numero_original /= 10;
            }

            if (produto_atual == reverso) {
                if (produto_atual > maior_palindromo) {
                maior_palindromo = produto_atual;
                }
            }
        }
    }

    printf ("Maior palindromo: %d\n", maior_palindromo);


    return 0;
}