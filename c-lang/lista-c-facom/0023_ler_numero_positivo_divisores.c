#include <stdio.h>

int main()
{
    int numero_usuario, contador = 0;

    do {
        printf("Insira um valor: ");
        scanf("%d", &numero_usuario);
    } while (numero_usuario <= 0);

    int divisores[numero_usuario];

    for (int i = 1; i <= numero_usuario; i++) {
        if (numero_usuario % i == 0) {
            divisores[contador] = i;
            contador++;
        }
    }

    for (int i = 0; i < contador; i++) {
        printf("%d ", divisores[i]);
    }

    return 0;
}