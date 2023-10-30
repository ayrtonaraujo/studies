/*
48. Faça um programa que leia o valor da hora de trabalho (em reais), o número de dias
trabalhados no mês de janeiro deste ano, e mostre na tela o valor a ser pago ao funcion
ário, adicionando 10% sobre o valor calculado. Considere que a carga de trabalho é
de segunda a sexta-feira, das 08:00 às 12:00 e as 14:00 às 18:00; aos sábados, das 08:00
às 12:00. Considere que o funcionário teve folga em dias de feriados.
*/


#include <stdio.h>
#include <locale.h>

#define DIAS_UTEIS_JANEIRO_2023 22.00 //segunda a sexta
#define SABADOS_JANEIRO_2023 4.0
#define HORAS_SEGUNDA_A_SEXTA 8.0 //8 horas por dia
#define HORAS_SABADO 4.0 // 4 horas no sábado
#define ADICIONAL 0.1 //10% de adicional


int main ()
{
    setlocale (LC_ALL, "Portuguese");

    float valor_hora_trabalho, salario, salario_adicional;

    printf  ("Insira o valor (hora/trabalho): ");
    scanf ("%f", &valor_hora_trabalho);

    salario = (valor_hora_trabalho * (HORAS_SEGUNDA_A_SEXTA *
                DIAS_UTEIS_JANEIRO_2023 + HORAS_SABADO * SABADOS_JANEIRO_2023));
    salario_adicional = salario + (salario * ADICIONAL);


    printf ("Salário: R$ %.2f", salario_adicional);
    printf ("\nSalário sem adicional: R$ %.2f\n\n", salario);


    return 0;
}