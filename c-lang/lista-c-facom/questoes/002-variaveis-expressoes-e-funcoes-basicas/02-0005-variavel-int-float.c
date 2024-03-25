// 5. Faça um programa que declare uma variável inteira, atribua a essa variável o valor 2.97
// e mostre na tela o conteúdo da variável. Que valor é mostrado na tela? Por que isso
// acontece? Como pode ser evitado esse tipo de problema?

#include <stdio.h>

int main()
{

	int error = 2.97;
	printf("%d", error);

	// the problem caused by the wrong data type, the value 2.97 is a float not a int.
	// So, when you printf the variable, it cut the numbers after the point,
	// considering only the integer number "2". To solve this problem you have to turn
	// the variable 'error' into a float number: float error = 2.97;
}
