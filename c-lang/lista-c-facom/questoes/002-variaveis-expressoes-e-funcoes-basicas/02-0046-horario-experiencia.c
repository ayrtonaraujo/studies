/*
46. Faça um programa para ler um horário (hora:minuto:segundo) de início e a duração,
em segundos, de uma experiência biológica. O programa deve informar o horário
(hora:minuto:segundo) de término da mesma.
*/


#include <stdio.h>


int main ()
{
    int hora, minuto, segundos, entrada_segundos, segundos_inicio;
    int hora_final, minuto_final, segundos_final;

    printf ("Digite o horario que começou (hh:mm:ss): ");
    scanf ("%d:%d:%d", &hora, &minuto, &segundos);

    segundos_inicio = (hora*60*60) + (minuto*60) + segundos;


    if (hora <= 23 && minuto <= 59 && segundos <= 59) {
    
        printf ("Quantos segundos se passaram?: ");
        scanf ("%d", &entrada_segundos);

        segundos_final = segundos_inicio + entrada_segundos;
        
        hora_final = segundos_final / 60 / 60;

        minuto_final = (segundos_final - (hora_final * 60 * 60)) / 60;

        segundos_final = segundos_final % 60;
        
        
        printf ("Inicio: %.2d:%.2d:%.2d", hora, minuto, segundos);
        printf ("\nFinal:  %.2d:%.2d:%.2d", hora_final, minuto_final, segundos_final);
          
    }
    else {
        printf ("Insira um horario válido");
    }
    

    return 0;
}