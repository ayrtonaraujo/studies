#include <stdio.h>

int main ()
{
	char l1;
	
	printf ("Your char: ");
	scanf ("%c", &l1);
	
	printf ("Integer: %ld\n It's the ASCII code of '%c'.", l1, l1);
	
	
}
