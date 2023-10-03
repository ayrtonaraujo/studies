/*
7. Ler três valores inteiros (variáveis a, b e c) e efetuar o cálculo da equação de segundo grau, apresentando: as duas raízes; a  mensagem "Não há raízes reais", se não for possível fazer o cálculo (delta negativo); e a mensagem "Não é equação do segundo grau", se o valor de "a" for igual a zero.
*/

//Link da resolução: https://www.youtube.com/watch?v=9J-QgcPNIek&t=2s
//Link da resolução alternativa: https://guiatech.net/solucao-de-equacao-de-segundo-grau/

//Consultei as soluções para tirar dúvida na parte do if-else

#include <stdio.h>
#include <math.h>


int main ()
{
    float a, b, c;

    printf ("A: ");
    scanf ("%f", &a);

    printf ("B: ");
    scanf ("%f", &b);

    printf ("C: ");
    scanf ("%f", &c);

    printf ("\n\nf(x)= %.2f^2 + %.2f + %.2f", a, b, c);

    float delta = pow(b, 2) - 4.0 * a * c;

    if (delta < 0) {
        printf ("\n\n%.2f = delta. Sem raizes reais.", delta);
    }
    else {
        
        if (delta == 0)
        {
            float x1 = -b / (2.0 * a);
            printf ("\n\nDelta (%.2f) = X1 (%.2f)", delta, x1);
        }   
        
        else {
            float x1 = (-b - sqrt(delta)) / (2.0 * a);
            float x2 = (-b + sqrt(delta)) / (2.0 * a);

            printf ("\n\nDelta (%.2f) = X1 (%.2f) = X2 (%.2f)", delta, x1, x2);
        }
        
    }
    




    return 0;
}