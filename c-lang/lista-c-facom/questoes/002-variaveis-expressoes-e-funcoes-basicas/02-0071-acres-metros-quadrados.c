/*
71. Ler uma área em acres e converter para metros quadrados.
*/


#include <stdio.h>

#define VALOR_CONVERSAO 0.000247105

int main ()
{
    float acres;
    float m_quad;

    printf ("Insira o valor em ACRES: ");
    scanf ("%f", &acres);

    m_quad = acres / VALOR_CONVERSAO;

    printf ("Valor em m^2: %f", m_quad);


    return 0;
}