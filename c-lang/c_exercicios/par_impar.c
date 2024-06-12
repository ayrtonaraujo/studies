#include <stdio.h>

int main()
{
    int valor_n, valor_x;

    printf("Quantas vezes? ");
    scanf("%d", &valor_n);

    for (int i = 0; i < valor_n; i++)
    {
        printf("\nInsira um valor: ");
        scanf("%d", &valor_x);

        if (valor_x == 0)
        {
            printf("NULO");
        }
        else
        {
            if (valor_x % 2 != 0)
            {
                printf("\nIMPAR ");
            }
            else
            {
                printf("\nPAR ");
            }

            if (valor_x < 0)
            {
                printf("NEGATIVO");
            }
            if (valor_x > 0)
            {
                printf("POSITIVO");
            }
        }
    }

    return 0;
}