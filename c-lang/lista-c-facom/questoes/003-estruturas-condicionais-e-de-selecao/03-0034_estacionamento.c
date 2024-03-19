/*
34. As tarifas de um determinado parque de estacionamento são as seguintes:
    • 1a e 2a hora: R$ 1,00 cada hora.
    • 3a e 4a hora: R$ 1,40 cada hora.
    • 5a hora e seguintes: R$ 2,00 cada hora.
O número de horas é sempre um inteiro e arredondado por excesso. Assim, quem estacionar durante 61 minutos pagará o equivalente a duas horas. Os momentos de chegada ao parque e de partida são apresentados na forma hh:mm (considere que as horas vão até 23).
Faça um programa que receba pelo teclado o momento de chegada e de partida, escreva na tela o preço cobrado pelo estacionamento.
O programa deverá realizar uma verificação quanto a validade das informações fornecidas. Admite-se que a chegada e a partida se dão com intervalos não superior a 24 horas, de modo que, se a hora de chegada é superior a hora de saída, isso significa que a partida ocorreu no dia seguinte ao dia da chegada
*/

#include <stdio.h>
#include <stdlib.h>

#define UM_REAL 1.0
#define UM_E_QUARENTA 1.40
#define DOIS_REAIS 2.0

// f(x)
void TempoEstacionado (int minutos);

int main()
{
    int minutos_entrada, horas_entrada, minutos_saida, horas_saida, minutos_entrada_total, minutos_saida_total, minutos_diferenca;
    float valor_a_pagar;

    printf("Insira a hora de entrada (hh:mm): ");
    scanf("%d:%d", &horas_entrada, &minutos_entrada);

    while ((horas_entrada > 24 && horas_entrada < 0) || (minutos_entrada < 0 && minutos_entrada > 59))
    {
        printf("Insira um horario valido.");

        printf("\nInsira a hora de entrada (hh:mm): ");
        scanf("%d:%d", &horas_entrada, &minutos_entrada);
    }

    printf("Insira a hora de saida (hh:mm): ");
    scanf("%d:%d", &horas_saida, &minutos_saida);

    while ((horas_saida > 24 && horas_saida < 0) || (minutos_saida < 0 && minutos_saida > 59))
    {
        printf("Insira um horario valido.");

        printf("\nInsira a hora de saida (hh:mm): ");
        scanf("%d:%d", &horas_saida, &minutos_saida);
    }

    minutos_entrada_total = (horas_entrada * 60) + minutos_entrada;

    minutos_saida_total = (horas_saida * 60) + minutos_saida;

    if (minutos_entrada_total > minutos_saida_total) // verficacao de "dia seguinte"
    {
        printf("\nO carro saiu no dia seguinte.");
    }

    minutos_diferenca = minutos_saida_total - minutos_entrada_total;

    if (minutos_diferenca < 0)
    {
        minutos_diferenca = abs(minutos_diferenca); // modular
    }

    // printf("\n%d", minutos_entrada_total);
    // printf("\n%d", minutos_saida_total);
    // printf("\n%d", minutos_diferenca);

    /*
    Fica mais facil calcular as horas convertidas em minutos.
    */


// CONTINUA DAQUI
    if (minutos_diferenca > 0 && minutos_diferenca < 120) // de 1 a 2 horas
    {
        TempoEstacionado(minutos_diferenca);

        if (minutos_diferenca <= 60)
        {
         valor_a_pagar = UM_REAL;   
        }
        if (minutos_diferenca > 60 && minutos_diferenca <= 120)
        {
            valor_a_pagar = UM_REAL * 2.0;
        }
    }

    if (minutos_diferenca > 120 && minutos_diferenca < 10) {
        
    }

    return 0;
}

void TempoEstacionado (int minutos)
{
    int hora = minutos / 60;
    int minuto = minutos % 60;

    printf("\nTempo estacionado: %02d:%02d", hora, minuto);
}