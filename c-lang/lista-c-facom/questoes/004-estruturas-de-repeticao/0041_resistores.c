/*
41. Faça um programa que calcula a associação em paralelo de dois resistores R1 e R2 fornecidos pelo usuário via teclado. O programa ca pedindo estes valores e calculando até que o usuário entre com um valor para a resistência igual a zero. Dica: utilize a
fórmula: R = R1 ∗ R2
             R1 + R2
*/

#include <stdio.h>

int main ()
{   
    int r1, r2;
    float req;

    do {
        printf ("Insira o valor do R1: ");
        scanf ("%d", &r1);

        printf ("Insira o valor do R2: ");
        scanf ("%d", &r2);

        req = (r1 * r2) / (float)(r1 + r2);

        printf ("\nReq: %.2f\n", req);
        
    } while (r1 <= 0 || r2 <= 0);

    printf ("\nPrograma finalizado!");

    return 0;
}