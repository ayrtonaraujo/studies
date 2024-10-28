/*
47. O funcionário chamado Carlos tem um colega chamado João que recebe um salário que equivale a um terço do seu salário. Carlos que gosta de fazer aplicações na caderneta de poupança vai aplicar seu salário integralmente nela, pois está rendendo 2% ao mês, e João aplicará seu salário integralmente no fundo de renda fixa, que está rendendo 5% ao mês. Construa um programa que deverá calcular e mostrar a quantidade de meses necessários para que o valor pertencente a João iguale ou ultrapasse o valor pertencente a Carlos. Teste com outros valores para as taxas.
*/

#include <stdio.h>

#define RENDA_POUPANCA 0.02
#define RENDA_FIXA  0.05

int main ()
{
    float salario_carlos, salario_joao;
    float renda_carlos = 0, renda_joao = 0;
    int contador_mes = 0;
    
    printf ("Digite o salario do Carlos: ");
    scanf ("%f", &salario_carlos);

    salario_joao = salario_carlos * (1/3.0);
    printf ("\nSalario do Joao: %.2f", salario_joao);

    renda_carlos = salario_carlos;
    renda_joao = salario_joao;
    
    //nesse caso, a quantidade de meses vai ser igual a quantidade de loops contados pela variável "contador_mes"
    while (renda_joao < renda_carlos) {
        contador_mes++;

        renda_carlos += renda_carlos * RENDA_POUPANCA;

        renda_joao += renda_joao * RENDA_FIXA;

    }

    printf ("\n\nRenda Carlos: %.2f", renda_carlos);
    printf ("\nRenda Joao: %.2f", renda_joao);
    printf ("\nVai demorar %d meses para a renda de Joao ser igual ou maior que a do Carlos.", contador_mes);

    return 0;
}