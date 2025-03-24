/*
9. Faça um programa que solicite diversos valores ao usuário. Ao final, o programa deve informar a soma dos valores, sua média aritmética, o menor e o maior valor.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int numero = 0, soma = 0, contador = 0;
    int maior_valor = INT_MIN;
    int menor_valor = INT_MAX;

    printf("Insira os valores. Digite -1 para parar.\n");

    while (1)
    {
        printf("Insira um valor: ");
        scanf("%d", &numero);

        if (numero == -1)
        {
            break;
        }

        soma = soma + numero;
        contador++;

        if (numero > maior_valor)
        {
            maior_valor = numero;
        }

        if (numero < menor_valor)
        {
            menor_valor = numero;
        }
    }

    printf("\nSoma: %d", soma);
    printf("\nMedia: %.2f", (float) soma / contador);
    printf("\nMaior valor: %d", maior_valor);
    printf("\nMenor valor: %d", menor_valor);

    return 0;
}