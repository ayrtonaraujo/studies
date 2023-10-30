/*
47. Faça um programa que calcule a média ponderada das notas de três provas. A primeira
e a segunda prova têm peso 1 e a terceira prova tem peso 2. O programa deve a média
obtida pelo aluno.
*/


#include <stdio.h>

float mediaNotas (float a, float b, float c);


int main ()
{

    float nota_1, nota_2, nota_3;

    printf ("Nota 1: ");
    scanf ("%f", &nota_1);

    printf ("Nota 2: ");
    scanf ("%f", &nota_2);

    printf ("Nota 3: ");
    scanf ("%f", &nota_3);

    printf ("\nNota final: %.2f", mediaNotas (nota_1, nota_2, nota_3));



    if (mediaNotas (nota_1, nota_2, nota_3) >= 6.0) { //nao foi pedido na questao.
        printf ("\nAprovado.");
    }
    else {
        printf ("\nReprovado\n\n.");
    }

    return 0;
}


float mediaNotas (float a, float b, float c)
{
    float media_notas;
    media_notas = (a + b + (c*2.0)) / 3.0;
    
   return media_notas;

}