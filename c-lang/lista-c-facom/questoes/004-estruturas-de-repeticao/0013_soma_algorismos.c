/*
13. Escreva um programa que aceite um número inteiro maior que zero e devolva a soma de todos os seus algarismos. Por exemplo, se o usuário fornecer o número 251, o resultado será 8 (que corresponde a 2+5+1). Se o número fornecido pelo usuário não for maior que zero, o programa deve apresentar uma mensagem de erro e finalizar.
*/

#include <stdio.h>

int main()
{
    int numero_usuario, resto, soma = 0;

    printf("\nInsira um valor: ");
    scanf("%d", &numero_usuario);

    if (numero_usuario <= 0)
    {
        printf("Insira um numero maior de 0. O programa sera encerrado.");
    }
    else
    {
        while (numero_usuario > 0)
        {
            resto = numero_usuario % 10;
            soma += resto;
            numero_usuario = numero_usuario / 10;
        }

        printf("\nResultado: %d", soma);
    }

    return 0;
}