/*
42. Leia os valores de dois catetos de um triângulo e calcule e mostre o valor da hipotenusa.
*/


#include <stdio.h>
#include <math.h>



int main ()
{
	
	float cateto_adjacente, cateto_oposto, hipotenusa;
	
	printf ("Cateto Adjacente (cm): ");
	scanf ("%f", &cateto_adjacente);
	
	
	printf ("Cateto Oposto (cm): ");
	scanf ("%f", &cateto_oposto);
	
	
	hipotenusa =  sqrt (pow(cateto_adjacente,2) + pow (cateto_oposto,2));
	
	printf ("Hipotenusa: %.2f cm", hipotenusa);
	
		
	
	
return 0;
}