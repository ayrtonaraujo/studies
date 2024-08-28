/*
Faça um programa que calcule a diferença entre a soma dos quadrados dos primeiros 100 números naturais e o quadrado da soma. Ex: A soma dos quadrados dos dez primeiros números naturais é:
1² + 2² + ... + 10² = 385
O quadrado da soma dos dez primeiros números naturais é:
(1 + 2 + ... + 10)² = 55² = 3025
A diferença entre a soma dos quadrados dos dez primeiros números naturais e o quadrado da soma é 3025 − 385 = 2640.
*/

#include <stdio.h>

#include <stdio.h>

int main()
{
    int soma_quadrados = 0;
    int soma_numeros = 0;
    int quadrado_da_soma, diferenca;

    for (int i = 1; i <= 100; i++)
    {
        soma_quadrados += i * i;
        soma_numeros += i;
    }

    quadrado_da_soma = soma_numeros * soma_numeros;
    diferenca = quadrado_da_soma - soma_quadrados;

    printf("Soma dos quadrados: %d\n", soma_quadrados);
    printf("Quadrado da soma: %d\n", quadrado_da_soma);
    printf("Diferenca: %d\n", diferenca);

    return 0;
}
