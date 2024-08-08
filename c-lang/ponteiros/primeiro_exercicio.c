#include <stdio.h>

int main ()
{
    int a, b;
    int *p1, *p2;

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    printf("%n, %n", p1, p2);

    return 0;
}