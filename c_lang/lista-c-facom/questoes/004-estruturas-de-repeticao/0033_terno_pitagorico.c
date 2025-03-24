/*
Faça um programa que calcule o terno pitagórico a, b, c, para o qual a + b + c = 1000. Um terno pitagórico é um conjunto de três números naturais, a b c, para a qual, a² + b² = c². Por exemplo, 3² + 4² = 9 + 16 = 25 = 5²
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, soma;

    for (int i = 1; i < 1000; i++)
    {
        for (int j = i + 1; j < 1000; j++)
        {
            a = i;
            b = j;
            c = sqrt(pow(a, 2) + pow(b, 2));
            soma = a + b + c;

            if (soma == 1000)
            {
                printf("\nO terno pitagórico eh:\nA = %d\nB = %d\nC = %d", a, b, c);
                return 0;
            }
        }
    }
}