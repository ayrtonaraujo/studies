/*
24. Faça um programa utilizando o comando while que mostra a contagem regressiva na tela, iniciando em 10 e terminaod em 0. Mostrar a mensagem FIM! após a contagem.
*/

#include <stdio.h>

int main()
{
    int contador = 0;

    while (contador < 10)
    {
        contador++;
        printf("%d\n", contador);
    }

    printf("FIM!");

    return 0;
}