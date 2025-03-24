#include <stdio.h>
#include <stdint.h>

void wait_for_user_input (void);


int main ()
{
    int32_t num1;
    
    printf ("N1: ");
    scanf ("%d", &num1);




    if (num1 & 1) {
        printf ("%d is odd\n", num1 );
    }
  
  
    else
    {
        printf ("%d is even\n", num1);

    }



    wait_for_user_input (); 


    return 0;
}

void wait_for_user_input (void) {

}