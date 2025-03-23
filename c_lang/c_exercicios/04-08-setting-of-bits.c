#include <stdio.h>
#include <stdint.h>


int main ()
{
    int32_t num1, output;

    printf ("Number: ");
    scanf ("%d", &num1);

    output = num1 | 0x90;
    printf ("[input] [output] : 0x%x 0x%x \n", num1, output);


return 0;
}