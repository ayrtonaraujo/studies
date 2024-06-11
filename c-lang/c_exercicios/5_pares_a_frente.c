#include <stdio.h>

#define PARES_A_FRENTE 5

int main()
{
    int numero_usuario, soma = 0;

    printf("Insira um valor:");
    scanf("%d", &numero_usuario);

    if (numero_usuario % 2 != 0)
    {
        numero_usuario++;
    }

    for (int i = 0; i < PARES_A_FRENTE; i++)
    {
        printf("%d\t", numero_usuario);
        soma += numero_usuario;
        numero_usuario += 2;
    }

    printf("\nSoma: %d\n", soma);

    return 0;
}