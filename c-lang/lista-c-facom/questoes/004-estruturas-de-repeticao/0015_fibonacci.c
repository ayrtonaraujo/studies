/*
15. Leia um número positivo, calcule e mostre a sequência de Fibonacci até o primeiro número superior ao número lido. Exemplo: se o usuário fornecer o valor 30, a sequência a ser impressa será: 0 1 1 2 3 5 8 13 21 34.
*/

#include <stdio.h>

int main()
{
    int numero_usuario, fibonacci = 0, soma = 1, auxiliar;

    printf("Insira um valor: ");
    scanf("%d", &numero_usuario);

    do
    {
        auxiliar = soma + fibonacci;
        soma = fibonacci;
        fibonacci = auxiliar;

        printf("%d ", auxiliar);

    } while (auxiliar < numero_usuario);

    return 0;
}