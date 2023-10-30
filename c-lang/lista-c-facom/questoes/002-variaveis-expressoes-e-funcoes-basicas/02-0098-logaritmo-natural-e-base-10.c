/*
98. Ler um valor de x e calcular seu logaritmo na base e e na base 10. Que valor é obtido se o usuário fornecer o valor zero para x? Qual o significado desse número?
*/

#include <stdio.h>
#include <math.h>


int main () {

    float x;

    printf ("Valor de X: ");
    scanf ("%f", &x);

    printf ("\nLog na base e: %.2f", log(x)); //a funcao log calcula logaritmo de base natural (e)
    
    printf ("\nLog na base 10: %.2f", log10(x)); //teste log2(x)

    printf ("\nLog na base 2: %.2f", log2(x));


    return 0;
}