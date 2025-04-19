#include <stdio.h>

int main()
{   
    char c [100];
    scanf(" %[^\n]", &c); // [^\n] <-- deveras interessante

    printf ("\n%s", c);
    return 0;
}