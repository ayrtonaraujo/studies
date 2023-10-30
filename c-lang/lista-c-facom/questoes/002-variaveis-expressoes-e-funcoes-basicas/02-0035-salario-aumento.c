/*
35. Faça um programa que leia o valor do salário de um funcionário, calcule e mostre seu
novo salário, sabendo que o mesmo recebeu um aumento de 21,3%.
*/

#include <stdio.h>

#define gain 21.3

float increase (float number_1);

int main ()
{
	float salaryA, salaryN;
	
	printf ("Last salary: $ ");
	scanf ("%f", &salaryA);
	
	salaryN = increase (salaryA);
	
	printf ("\nSalary now (+21.3%c): $ %f", 37, salaryN);
	
	return 0;
	
	
	
}

float increase (float number_1) 
{

	float result;
	result = number_1 + (number_1 * (gain/100.0));

	return result;	
	
}