/*
37. Leia o valor do raio de um círculo e calcule a área deste círculo.
*/

#include <stdio.h>

#define Pi 3.141592

int main()
{

	float radius, area;

	printf("Insert the radius (cm) :");
	scanf("%f", &radius);

	area = Pi * (radius * radius);

	printf("Area (cm^2): %.2f", area);

	return 0;
}