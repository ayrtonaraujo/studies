/*
Faça um programa que solicite ao usuário informar um valor positivo. O programa deverá repetir a solicitação caso o usuário forneça um valor inválido (negativo). Quando o usuário fornecer um valor válido, mostre uma mensagem de texto confirmando o valor entrado. Faça três versões desse programa, cada uma usando uma estrutura de repetição diferente (for, while, do-while). Qual das três estruturas é a mais adequada para este programa? Por que?
*/

#include <stdio.h>

int main ()
{

    //while é o mais adequado

    int numero_usuario;

    printf ("Insira um valor: ");
    scanf ("%d", &numero_usuario);

    while (numero_usuario < 0)
    {
        printf ("\nValor digitado nao e um numero positivo. Digite novamente.");
        printf ("\nInsira um valor: ");
        scanf ("%d", &numero_usuario);
    }

    printf ("\nO numero positivo digitado foi: %d", numero_usuario);
    
    return 0;
}