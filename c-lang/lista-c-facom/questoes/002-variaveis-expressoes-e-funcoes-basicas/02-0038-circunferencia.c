/*
38. Leia o valor do raio de um círculo e calcule a sua circunferência.
*/

#include <stdio.h>

#define Pi 3.141592

int main()
{

	float radius, perimeter;

	printf("Insert the radius (cm) :");
	scanf("%f", &radius);

	perimeter = 2.0 * Pi * radius;

	printf("Perimeter (cm): %.2f", perimeter);

	return 0;
}