#include <stdio.h>

int main (void)
{
    int numero_usuario;

    printf ("Insira o valor: ");
    scanf ("%d", &numero_usuario);

    for (int i = 0; i < 8; i++) {
        if (i % 2 != 0) {
            printf ("%d\t", i);
        }

    }

}