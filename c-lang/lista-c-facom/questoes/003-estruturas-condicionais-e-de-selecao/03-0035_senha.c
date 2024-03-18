/*
35. Faça um programa em que o usuário digite uma senha numérica, e o programa deverá reconhecer se a senha é verdadeira ou falsa, de acordo com um valor estabelescido previamente no programa.
*/

#include <stdio.h>

#define SENHA 451897

int main()
{
    int senha;

    printf("Digite a senha [6 digitos]: ");
    scanf("%d", &senha);

    if (senha == SENHA)
    {
        printf("Acesso permitido.");
    }

    else
    {
        printf("Senha incorreta.");
    }

    return 0;
}