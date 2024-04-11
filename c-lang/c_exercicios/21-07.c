#include <stdio.h> 

int main ()
{

		char n1, n2, n3, n4, n5, n6;

		printf ("Enter 6 characters:\n");
		scanf ("%c %c %c %c %c %c", &n1, &n2, &n3, &n4, &n5, &n6);

		printf ("*-----| ASCII |-----*\n\t%c = %d\n\t%c = %d\n\t%c = %d\n\t%c = %d\n\t%c = %d\n\t%c = %d\n", n1, n1,n2, n2, n3, n3, n4, n4, n5, n5, n6, n6);


return 0;
}
