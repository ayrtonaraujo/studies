/*
3.  Ler um número inteiro e imprimir seu sucessor e seu antecessor.
*/

#include <stdio.h>

int main ()
{
    int numero;
    
    printf ("Insira o valor: ");
    scanf ("%d", &numero);

    printf ("\nAntecessor: %d\nSucessor: %d", numero - 1, numero + 1);

    return 0;
}