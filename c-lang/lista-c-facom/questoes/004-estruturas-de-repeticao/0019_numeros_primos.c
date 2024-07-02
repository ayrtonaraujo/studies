/*
Faça um programa que receba um número maior que 1, e verifique se o número fornecido é primo ou não.
Obs.: um número é considerado primo quando seus únicos divisores são 1 e o proprio número.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, " ");

    int numero_usuario = 0;
    int primo = 1;

    printf("Digite um número maior que 1.");

    while (numero_usuario < 1)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero_usuario);
    }

    for (int i = 2; i <= numero_usuario; i++)
    {
        if (numero_usuario % i == 0)
        {
            primo++;
            break;
        }
    }

    if (primo == 0)
    {
        printf("\nO numero nao eh primo!");
    }
    else
    {
        printf("\nO numero eh primo.");
    }

    return 0;
}