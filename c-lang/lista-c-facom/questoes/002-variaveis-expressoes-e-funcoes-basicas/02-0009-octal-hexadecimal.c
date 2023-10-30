//9. Faça um program que leia um valor inteiro e mostre este mesmo
//valor nas bases hexadecimal e octal.
//Dica: a função printf possui opções de formatação que fazem isso.


#include <stdio.h>

int main ()
{
    int valor_int;

    printf ("Valor: ");
    scanf ("%d", &valor_int);

    printf("Hexadecimal: %x\nOctal: %o", valor_int, valor_int);



}
