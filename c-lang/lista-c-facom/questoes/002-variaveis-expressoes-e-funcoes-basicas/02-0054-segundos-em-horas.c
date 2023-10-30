/*
54. Faça um programa que leia um valor inteiro em segundos e exiba a quantidade de horas,
minutos e segundos correspondente ao valor lido.
*/


#include <stdio.h>



int main ()
{
    int segungos_totais, segundo, minuto, hora;

    printf ("Quantos segundos?: ");
    scanf ("%d", &segungos_totais);


    /*usarei algumas linhas que fiz no código da questão 46:
    
         hora_final = segundos_final / 60 / 60;

         minuto_final = (segundos_final - (hora_final * 60 * 60)) / 60;

         segundos_final = segundos_final % 60;
    
    */


   hora = segungos_totais /60 /60;
   minuto = (segungos_totais - (hora * 60 * 60)) / 60;
   segundo = segungos_totais % 60;

   
   printf ("Horario: %.2d:%.2d:%.2d", hora, minuto, segundo);


    
    



    return 0;
}