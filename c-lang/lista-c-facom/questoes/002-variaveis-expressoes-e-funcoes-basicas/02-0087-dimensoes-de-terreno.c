/*
87. Faça um programa para ler as dimensões de um terreno (comprimento e largura), o preço do metro de arame e calcular o custo total para cercar o terreno. O programa também deve informar quantos metros de cerca devem ser comprados.
*/

#include <stdio.h>

int main()
{

  float comprimento, largura, preco_m_arame, perimetro;

  printf("Qual o comprimento do terreno?: ");
  scanf("%f", &comprimento);
  getchar();

  printf("Qual a largura do terreno?: ");
  scanf("%f", &largura);
  getchar();

  printf("Qual o valor do metro do arame? ");
  scanf("%f", &preco_m_arame);
  getchar();

  perimetro = (comprimento + largura) * 2;

  printf("Metros de cerca = perimetro.");
  printf("Perimetro do terreno (m): %.2f", perimetro);
  printf("\nArea do terreno (m^2): %.2f", largura * comprimento);
  printf("\nTotal de arame (m): %.2f", perimetro * preco_m_arame);

  /*
  Extra:


  se considerar que o arame vai ter 4 fileiras, multiplicamos o custo pela quantidade destas.

  ||-----------------||
  ||-----------------||
  ||-----------------||
  ||-----------------||
  ||                 ||

  Sacou?

  Tambem podemos calcular quantas estacas são necessarias para instalar esse arames pela distancia entre elas.

  */

  float fileiras_de_arame, distancia_estacas;

  printf("\n\nSão quantas fileiras de arame?: ");
  scanf("%f", &fileiras_de_arame);
  getchar();

  printf("\nQual a distancia entre as estacas (m)?: ");
  scanf("%f", &distancia_estacas);
  getchar();

  printf("\n Custo de arame (fileiras): %.2f", fileiras_de_arame * preco_m_arame * perimetro);

  printf("\n Quantidade de estacas: %.0f", perimetro / distancia_estacas); // tem que ser inteiro, nao da pra considera "meia estaca"

  return 0;
}
