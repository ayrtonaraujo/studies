// 6. Faça um programa que declare uma variável real com precisão dupla, atribua a essa
// variável a expressão 123/456 e mostre o resultado que está armazenado na variável?
// Que valor é mostrado na tela? Por que isso acontece? Como pode ser evitado esse tipo
// de problema?

#include <stdio.h>

int main()
{
	double value = 123 / 456;

	printf("%lf", value);

	// The erro is in the double definition. Double is a precise float,
	// so you have to write the numbers with decimal point. The right way:
	// double value = 123.0 / 456.0. The result will be near to 0.2697.

	return 0;
}
