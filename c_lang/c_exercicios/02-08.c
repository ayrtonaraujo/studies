#include <stdio.h>


void hello_w (void);

typedef struct{
	void (*pFunk)(void);
}MinhaEstrutura;


int main ()
{
	int n1, n2;
	int *ponteiro;
	MinhaEstrutura p;
	 
	p.pFunk = hello_w;
	
	
	p.pFunk();
	

	
	//callback of function with pointer
	
	
	
	
	n1 = 40;
	ponteiro = &n1;
	
	printf ("%d", *ponteiro);
	printf ("\n%x", &n1);

	printf ("\n%x", &ponteiro);
	
	
	
		
	
	
}

void hello_w (void ) {
	
	printf ("Hello");
}
