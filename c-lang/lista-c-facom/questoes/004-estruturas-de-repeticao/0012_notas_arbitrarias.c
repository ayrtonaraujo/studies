/*
12. Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado, uma sequência arbitrária de notas (válidas no intervalo de 10 a 20) e que mostre na tela, como resultado, a média aritmética correspondente. O número de notas com que o aluno pretente efetuar o cálculo não será fornecido ao programa, o qual terminará quando for introduzido um valor que não seja válido como nota.
*/

#include <stdio.h>

#define LIMITE_MINIMO 10
#define LIMITE_MAXIMO 20

int main()
{
    int nota_usuario, contador = 0, soma = 0;

    printf("Insira notas entre %d a %d", LIMITE_MINIMO, LIMITE_MAXIMO);

    while (1)
    {
        printf("\nInsira uma nota: ");
        scanf("%d", &nota_usuario);

        if (nota_usuario < LIMITE_MINIMO || nota_usuario > LIMITE_MAXIMO)
        {
            if (nota_usuario > LIMITE_MAXIMO)
            {
                printf("\nNota acima do limite");
            }

            if (nota_usuario < LIMITE_MINIMO)
            {
                printf("\nNota abaixo do limite.");
            }
            break;
        }

        soma += nota_usuario;

        contador++;
    }

    printf("\nMedia: %.2f", (float)soma / contador);

    return 0;
}