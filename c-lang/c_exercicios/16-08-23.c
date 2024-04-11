#include <stdio.h>

int main ()
{
		int const data = 10;

		printf ("\n%d", data); 


		int *prt = (int const*) &data;
		*prt = 50;

		printf ("\n%d", data); 

		return 0;
}
