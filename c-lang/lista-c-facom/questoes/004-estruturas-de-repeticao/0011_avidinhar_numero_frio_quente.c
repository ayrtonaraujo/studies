/*
11. Faça um programa que gere um número aleatório no intervalo [0;200] e paça o usuário para adivinhar o número. Caso o usuário acerte, imprima uma mensagem parabenizando-o e finalize o programa. Caso o valor que o usuário forneça esteja incorreto, o programa deverá mostrar uma das seguintes mensagens:
    • Pegando Fogo! (caso o valor correto esteja a 5 unidades ou menos do valor fornecido pelo usuário).
    • Muito Quente (caso o valor correto esteja de 6 a 10 unidades do valor fornecido).
    • Quente (caso o valor correto esteja de 11 a 20 unidades do valor fornecido).
    • Frio (caso o valor correto esteja de 21 a 30 unidades do valor fornecido).
    • Muito Frio (caso o valor correto esteja de 31 a 50 unidades do valor fornecido).
    • Gelando (caso o valor correto esteja de 51 a 75 unidades do valor fornecido).
    • Congelou! (caso o valor correto esteja a mais de 75 unidades do valor fornecido).
O programa deverá permitir que o usuário faça novas tentativas até encontrar o valor correto ou até disparar a mensagem Congelou!. Também deve ser exibida a quantidade de tentativas que o usuário efetuou.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define LIMITE_MINIMO 0
#define LIMITE_MAXIMO 200

int main()
{
    int numero_sorteado, numero_usuario, tentativas = 0;

    srand(time(NULL));
    numero_sorteado = LIMITE_MINIMO + rand() % ((LIMITE_MAXIMO + 1) - LIMITE_MINIMO);

    printf("\n%d", numero_sorteado);

    do
    {
        printf("\nInsira seu palpite: ");
        scanf("%d", &numero_usuario);
        tentativas++;

        if (numero_usuario < (numero_sorteado + 5) && numero_usuario < (numero_sorteado - 5) )
        {
            printf("\nPegando fogo!", numero_usuario);
        }
        else if (numero_usuario < (numero_sorteado + 5) && numero_usuario < (numero_sorteado - 5))
        {
            printf("\nO numero sorteado e menor que %d", numero_usuario);
        }
        else if () {

        }
        
    } while (numero_usuario != numero_sorteado);
    

    printf("\nNumero Sorteado: %d", numero_sorteado);
    printf("\nNumero de Tentativas: %d", tentativas);

    return 0;
}