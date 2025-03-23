/*
25. Peça ao usuário para digitar 10 valores, some estes valores e mostre o resultado.
*/

#include <stdio.h>

int main()
{
    int contador = 0;
    float numero_usuario, soma = 0;

    while (contador < 10)
    {
        contador++;
        printf("Insira o N%d: ", contador);
        scanf("%f", &numero_usuario);

        soma += numero_usuario;
    }

    printf("Resultado: %.2f", soma);

    return 0;
}