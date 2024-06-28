/*
Problema "negativos"
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
*/

#include <stdio.h>

int main()
{

    int quantidade_usuario, contador = 0;
    int lista_numeros[10];

    printf("Quantos valores voce ira digitar? ");
    scanf("%d", &quantidade_usuario);

    while (quantidade_usuario > 10 || quantidade_usuario <= 0)
    {
        printf("\nDigite um numero maior que 0 e menor ou igual a 10.");
        printf("\nQuantos valores voce ira digitar? ");
        scanf("%d", &quantidade_usuario);
    }

    for (int i = 0; i < quantidade_usuario; i++)
    {
        int numero;
        printf ("\nDigite um numero: ");
        scanf ("%d", &numero);
        
        if (numero < 0)
        {
            lista_numeros[contador] = numero;
            contador++;
        }
    }

    printf ("\nNegativos:\n");
    for (int i = 0; i < contador; i++)
    {
        printf("%d\n", lista_numeros[i]);
    }

    return 0;
}