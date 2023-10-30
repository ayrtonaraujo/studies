//3. Faça um programa que declare uma variável real com precisão simples, atribua a essa
//variável o valor do número π (3.1415) e mostre, para o usuário, o conteúdo dessa
//variável.



#include <stdio.h>

#define PI 3.141592 //você pode definir o PI aqui também

int main ()
{

		float pi = 3.141592;

		printf ("The value of π is %.4f.\n", pi);

		/*
		usando o "#define PI 3.141592" seria dessa maneira:

			printf ("Valor do Pi: %f", PI);

		*/

return 0;
}
