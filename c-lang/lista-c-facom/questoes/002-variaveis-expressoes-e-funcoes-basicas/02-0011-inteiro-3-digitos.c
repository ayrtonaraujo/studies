//11. Ler um valor inteiro e exibir este valor com pelo menos três dígitos.
//Exemplo:
//• valor lido:7 -> valor exibido:007
//• valor lido:17 -> valor exibido: 017
//• valor lido:1024 -> valor exibido: 1024
//Dica: a função printf possui opções de formatação que fazem isso.

#include <stdio.h>

int main ()
{
    int numero;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &numero);

    printf ("\nNumero: %.3d", numero);




    return 0;
}
