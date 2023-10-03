/*
4. Implemente um pseudocódigo que leia um número inteiro até que o usuário digite um valor negativo. Imprima o maior número digitado.
*/

#include <stdio.h>

int main()
{
    int numero, maior = 0;

    printf("Insira um valor: ");
    scanf("%d", &numero);

    while (numero >= 0)
    {

        printf("Insira um valor: ");
        scanf("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
        }
    }

    if (maior > 0)
    {
        printf("Maior numero digitado: %d", maior);
    }
    else
    {
        printf("Numero invalido");
    }

    return 0;
}