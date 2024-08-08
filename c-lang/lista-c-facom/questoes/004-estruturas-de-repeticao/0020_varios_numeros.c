/*
20. Faça um programa que receba vários números, calcule e mostre:
    • A soma dos números digitados.
    • A quantidade de números digitados.
    • A média dos números digitados.
    • O maior número digitado.
    • O menor número digitado.
    • A média dos números pares.
Finalize a entrada de dados caso o usuário informe o valor 0.
*/

#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
    float numero_usuario, soma_dos_numeros = 0, maior_numero = -INFINITY, menor_numero = INFINITY, media_dos_pares, soma_pares;

    int contador = 0, contador_pares = 0;

    while (1)
    {
        printf("Insira um valor: ");
        scanf("%f", &numero_usuario);

        if (numero_usuario == 0)
            break;

        contador++;
        soma_dos_numeros += numero_usuario;

        if (fmod(numero_usuario, 2.0) == 0.0)
        {
            contador_pares++;

            soma_pares += numero_usuario;

            media_dos_pares = soma_pares / contador_pares;
        }

        // maior
        if (numero_usuario > maior_numero)
        {
            maior_numero = numero_usuario;
        }

        // menor
        if (numero_usuario < menor_numero)
        {
            menor_numero = numero_usuario;
        }
    }

    printf("\nSOMA DE NUMERO DIGITADOS: %.2f\n", soma_dos_numeros);
    printf("NUMEROS DIGITADOS: %d\n", contador - 1);
    printf("MEDIA DOS NUMEROS: %.2f\n", soma_dos_numeros / (contador - 1));
    printf("MAIOR NUMERO: %.2f\n", maior_numero);
    printf("MENOR NUMERO: %.2f\n", menor_numero);
    printf("MEDIA DOS PARES: %.2f\n", media_dos_pares);

    return 0;
}