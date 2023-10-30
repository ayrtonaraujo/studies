/*
56. Faça um programa que receba dois valores inteiros, e construa um
número real cuja parte inteira corresponde ao resto da divisão do primeiro
pelo segundo valor e a parte fracionário é composta pelos dois dígitos menos
significativos do quociente da divisão do primeiro pelo segundo valor recebido.
*/


#include <stdio.h>

int main ()
{   
    int primeiro_numero, segundo_numero;

    printf ("Primeiro numero: ");
    scanf ("%d", &primeiro_numero);

    printf ("Segundo numero: ");
    scanf ("%d", &segundo_numero);


    float divisao_numeros = (float) primeiro_numero / (float) segundo_numero;

    printf ("\n%f", divisao_numeros);

    printf ("\nNumero real: %d.%.0f", primeiro_numero, (divisao_numeros * 100));
    


    return 0;
}