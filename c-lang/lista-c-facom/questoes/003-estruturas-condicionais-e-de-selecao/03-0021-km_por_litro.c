/*
21. Leia uma distância em quilômetros e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em km/l e escreva uma mensagem de acordo a tabela 3.2.
*/

#include <stdio.h>

int main ()
{
    float quilometragem, litrosGasolina, kmPorLitro;

    printf ("Kms rodados: ");
    scanf ("%f", &quilometragem);

    printf ("Litros gastos: ");
    scanf ("%f", &litrosGasolina);

    kmPorLitro = quilometragem / litrosGasolina;

    if (kmPorLitro < 8.0){
        printf ("Vender o carro.");
    }

    if (kmPorLitro > 14.0){
        printf ("Super economico.");
    }

    if (kmPorLitro >= 8.0 && kmPorLitro <= 14.0){
        printf ("Economico.");
    }
    
    return 0;
}