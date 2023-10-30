/*
41. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que
solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que
deverá ser paga, sabendo-se que são descontados 8% para pagamento de impostos e
taxas de vidas.
*/


#include <stdio.h>

int main ()
{

	int salary = 30, discount = 8;
	int days;
	float result;
	
	printf ("Days of work: ");
	scanf ("%d", &days);
	
	result = salary * days - (salary*days *(discount/100.0));
	
	printf ("Total: %f", result);
	
	return 0;
		
}