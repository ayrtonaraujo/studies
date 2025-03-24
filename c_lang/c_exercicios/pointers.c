#include <stdio.h>
#include <stdint.h>

int main ()
{
    uint8_t number = 1;
    uint8_t increment = 5;

    
    while (number <=24)
    {
        printf ("%d\n", number += increment);


    }

return 0;
}