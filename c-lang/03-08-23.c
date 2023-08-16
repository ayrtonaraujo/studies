

#include <stdio.h>

int main () 
{
	
    
    int n1, flag = 1;

    
    while (flag) {
    printf ("\nN1: ");
	scanf ("%d", &n1);
	
    
	(n1 % 2 == 0)? printf ("\npar") : printf ("\nimpar");

    (n1 == 0) ? flag = 0 : (flag = 1);
    

    }



return 0;

}