/*
44. Faça um programa que leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo (pare quando for informada a idade 0), e calcule a idade média desse grupo de indivíduos.
*/

#include <stdio.h>

int main () {

    int soma = 0, contador = 0, num_usuario;

    while (1)
    {
        printf ("Insira um valor: ");
        scanf ("%d", &num_usuario);
        
        if (num_usuario <= 0) {
            break;
        }

        soma += num_usuario;

        contador ++;
    }

    printf ("\nMedia de idades: %.2f", soma / (float)contador);

    return 0;
}