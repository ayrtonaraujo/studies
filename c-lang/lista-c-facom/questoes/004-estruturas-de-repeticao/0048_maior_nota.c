/*
48. Dados o número n de alunos de uma turma de Métodos e Técnicas de Programação e suas notas na primeira prova, determinar a maior e a menor nota obtidas por essa turma (nota máxima = 100 e nota mínima = 0).
*/

#include <stdio.h>
#include <float.h>

float nota;
float maior_nota = 0;
float menor_nota = 100;

int main () {

    while (nota >= 0 && nota <= 100) {

        printf ("Nota: ");
        scanf ("%f", &nota);

        if (nota < 0 || nota > 100) {
        break;  
        }

        if (nota > maior_nota) {
            maior_nota = nota;
        }

        if (nota < menor_nota) {
            menor_nota = nota;
        }

    } 

    printf ("\nMaior nota: %.2f", maior_nota);
    printf ("\nMenor nota: %.2f", menor_nota);

    return 0;
}

