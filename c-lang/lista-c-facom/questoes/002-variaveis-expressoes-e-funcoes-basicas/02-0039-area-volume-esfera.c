/*
39. Leia o valor do raio de uma esfera e calcule a área de sua superfície
e o volume da esfera.
*/

#include <stdio.h>

#define Pi 3.141592

//f(x)
float area_f (float radius);
float volume_f (float radius);


int main ()
{
	
	float radius, area, volume;
	
	printf ("\tInsert the radius (cm) :");
	scanf ("%f", &radius);
	
	area = area_f (radius);
	volume = volume_f (radius);
	
	printf ("\n\tArea: %.2f cm^2\n\tVolume: %.2f cm^3", area, volume);
	
	return 0;	
}


float area_f (float radius)
{
	float area;
	area = 4.0 * Pi *(radius * radius);
	
	return area;
	
}

float volume_f (float radius)
{
	float volume;
	volume = (4.0/3.0) * Pi * (radius*radius*radius);
	
	return volume;
	
}