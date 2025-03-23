/*
5. Faça um programa que permita ao usuário fornecer diversos valores positivos. O programa deverá parar de solicitar valores quando o usuário fornecer um valor negativo. Ao final, o programa deverá informar a soma dos valores lidos. Obs: o valor negativo(último valor entrado) não deve entrar na conta da soma.
*/

#include <stdio.h>

int main()
{
    int numero, soma = 0;

    while (numero >= 0)
    {

        printf("Digite um numero positivo: ");
        scanf("%d", &numero); // irei considerar numeros inteiros;

        if (numero >= 0)
        {
            soma = soma + numero;
        }

        else
        {
            soma = soma;
        }
    }

    printf("\n\nTotal somado: %d", soma);

    return 0;
}