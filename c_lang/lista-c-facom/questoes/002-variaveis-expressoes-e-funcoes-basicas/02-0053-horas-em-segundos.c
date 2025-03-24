/*
53. Faça um programa que leia o valor de horas,
minutos e segundos gastos em um experimentos e converta
esse tempo em segundos
*/

#include <stdio.h>
#include <math.h>


int main ()
{
    int hora, minuto, segundo, segundos_totais;

    printf ("Insira a hora (hh:mm:ss): ");
    scanf ("%d:%d:%d", &hora, &minuto, &segundo);


    segundos_totais = (hora * pow (60 ,2)) + (minuto * 60) + segundo; //1h = 3600 segundos
    
    printf ("\nTotal: %d segundos", segundos_totais);




    return 0;
}