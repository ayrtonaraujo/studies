/*
1. Um supermercado resolveu calcular a média de valores de seus produtos, sabendo que este supermercado possui 5 produtos, faça um pseudocódigo que calcule esta média.
*/

#include <stdio.h>

int main ()
{
    float preco_produto = 0;
    int i;

    for (i = 1; i <=5; i++) {
        printf ("Insira o valor do produto %d: ", i);
        scanf ("%f", preco_produto);

        preco_produto = preco_produto + preco_produto;
    }


    return 0;
}