/*
4. Entrar com a base e a altura de um retângulo e imprimir a seguinte saída: 
  perímetro: ____
  área: ____
  diagonal: _____
Para resolver esse problema, pesquise a fórmula do perímetro, área e diagonal de um retângulo.
*/

#include <stdio.h>
#include <math.h>

int main ()
{

  float altura, base, perimetro, area, diagonal;

  printf ("Altura: ");
  scanf ("%f", &altura);

  printf ("Base: ");
  scanf ("%f", &base);

  perimetro = (altura + base) * 2.0;
  area = altura * base;
  diagonal = sqrt(pow(altura,2) + pow(base,2)); //hipotenusa (h² = a² + b²)

  printf ("\nPerimetro: %.2f m\nArea: %.2f m^2\nDiagonal: %.2f \n\n", perimetro, area, diagonal);


    return 0;
}