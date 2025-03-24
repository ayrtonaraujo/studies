//busca de vetores

#include <stdio.h>

int main () {
    int array[6] = {1,2,3,4,5,6};
    int numero_usuario;
    int confirmacao = 0;

    printf ("Seu numero: ");
    scanf ("%d", &numero_usuario);

    for (int i = 0; i < 6; i++) {
        if (array[i] == numero_usuario) {
            printf ("\nO numero foi encontrado na posicao %d.", i + 1); //coloquei a posicao considerando que pro usuario comeca no 1, e nao no 0
            confirmacao++;
            break;
        }
    }

    if (confirmacao == 0) {
        printf ("\nO numero nao foi encontrado.");
    }

    return 0;
}