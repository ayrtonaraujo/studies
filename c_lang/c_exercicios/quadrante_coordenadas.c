#include <stdio.h>

int main(void)
{
    int x, y;

    while (x != 0 || y != 0)
    {
        printf("\nInsira o X: ");
        scanf("%d", &x);

        printf("\nInsira o Y: ");
        scanf("%d", &y);

        if (x > 0 && y > 0)
        {
            printf("\nQ1");
        }

        if (x < 0 && y > 0)
        {
            printf("\nQ2");
        }

        if (x < 0 && y < 0)
        {
            printf("\nQ1");
        }

        if (x > 0 && y < 0)
        {
            printf("\nQ1");
        }
    }

    return 0;
}