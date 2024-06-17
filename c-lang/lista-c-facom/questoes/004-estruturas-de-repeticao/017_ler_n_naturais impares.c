#include <stdio.h>

int main()
{
    int numero_usuario;

    printf("Insira um valor: ");
    scanf("%d", &numero_usuario);

    for (int i = 0; i < numero_usuario; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
}