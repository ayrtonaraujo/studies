/*
105. Faça um programa que:
    • Gere dois números aleatórios a e b inteiros, positivos e no intervalo de [1;100]; *
    • Escolher aleatoriamente uma das operações artiméticas básicas (soma, subtração, divisão ou multiplicação) para ser executada entre os operandos a e b; *
    • Pedir ao usuário que forneça o resultado da operação aritmética gerada no ítem anterior; *
    • Monitorar o tempo de resposta do usuário (tempo entre a momento em que o programa exibe a operação aritmética gerada e o momento em que é fornecida a resposta);
    • Exibir o resultado entrado pelo usuário; o resultado correto; e o tempo, em segundos, que o usuário levou para responder.
Dica: use a função time da biblioteca time.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE_MAX 100
#define LIMITE_MIN 1
#define QTD_NUMEROS 2

int main()
{
    clock_t inicio, fim;
    double tempo;
    int num_a, num_b;
    float resultado_usuario, resultado_correto;
    char operador;

    // geracao dos numeros aleatorios
    srand(time(NULL));
    num_a = LIMITE_MIN + rand() % (LIMITE_MAX - LIMITE_MIN);
    num_b = LIMITE_MIN + rand() % (LIMITE_MAX - LIMITE_MIN);

    // geracao operacoes aleatorias
    int selecao_op_atimetica = rand() % 4;

    switch (selecao_op_atimetica)
    {
    case 0:
        // divisao
        operador = '/';
        resultado_correto = (float)num_a / num_b;
        break;

    case 1:
        // adicao
        operador = '+';
        resultado_correto = num_a + num_b;
        break;

    case 2:
        // subtracao
        operador = '-';
        resultado_correto = num_a - num_b;
        break;

    case 3:
        // multiplicacao
        operador = '*';
        resultado_correto = num_a * num_b;
        break;
    }

    // inicio cronometro
    inicio = clock();

    printf("\nResolva -> %d %c %d: ", num_a, operador, num_b);
    scanf("%f", &resultado_usuario);

    // confirmacao resposta
    if (resultado_usuario == resultado_correto)
    {
        printf("\nParabens, resposta correta!");
    }
    else
    {
        printf("\nQue pena, tente novamente. A resposta corretada era: %.2f", resultado_correto);
    }

    // final cronometro
    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\n\nTempo de resposta do usuario: %.2lf segundos\n", tempo);

    return 0;
}