#include <stdio.h>

int main()
{
    int casos;
    float notas[3] = {};

    printf("Quantos casos? ");
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        printf("\nCASO %d", i + 1);

        for (int j = 0; j < 3; j++)
        {
            printf("Insira o valor de N%d: ", j + 1);
            scanf("%f", &notas[j]);

            if (j == 2)
            {
                printf("\nMedia: %.1f\n", (notas[0] * 2.0 + notas[1] * 3.0 + notas[2] * 5.0) / 10.0);
            }
        }
    }

    return 0;
}