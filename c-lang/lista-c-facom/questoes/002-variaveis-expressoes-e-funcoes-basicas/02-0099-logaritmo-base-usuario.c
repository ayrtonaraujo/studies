/*
99. Ler um valor de a e um valor de b e calcular o logaritmo de a na base b. Dica: use a fórmula de mudança de base logarítmica para poder usar as funções da biblioteca math.h
*/

#include <stdio.h>
#include <math.h>


int main () {

    float a, b, log_A_B;

    printf ("Valor de A: ");
    scanf ("%f", &a);

    printf ("Valor de B(base): ");
    scanf ("%f", &b);



    log_A_B = log(a)/log(b); //formula de base logaritmica


    printf ("Log de %2.f na base %.2f: %.2f",a ,b, log_A_B);

    

    return 0;
}