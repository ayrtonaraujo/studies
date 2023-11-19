/*
3. Faça um programa que receba a idade de 10 pessoas e que calcule e mostre a quantidade de pessoas com idade maior ou igual a 18 anos.
*/

#include <stdio.h>

int main()
{
    int contadorMaior = 0, idadeAtual;

    for (int i = 1; i <= 10; i++)
    {
        printf("Insira a idade [%.2d]: ", i);
        scanf("%d", &idadeAtual);

        if (idadeAtual >= 18)
        {
            contadorMaior++;
        }
    }

    printf("******************\nPessoas de maioridade: %d", contadorMaior);

    return 0;
}