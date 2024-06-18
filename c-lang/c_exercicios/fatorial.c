#include <stdio.h>

int main()
{
    int numero_usuario, fatorial = 0, resultado = 1;

    do
    {
        printf("\nInsira um valor: ");
        scanf("%d", &numero_usuario);

        if (numero_usuario > 15 || numero_usuario < 0)
        {
            printf("\nInsira um valor menor que 15 e >= que 0.");
        }

    } while (numero_usuario > 15 || numero_usuario < 0);

    if (numero_usuario == 0)
    {
        fatorial = 1;
    }
    else
    {
        for (int i = 1; i <= numero_usuario; i++)
        {

            fatorial = i * resultado;
            resultado = fatorial;
        }
    }

    printf("\n\nResultado fatorial: %d", fatorial);

    return 0;
}