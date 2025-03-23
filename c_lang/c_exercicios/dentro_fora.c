#include <stdio.h>

int main()
{
    int numero_usuario, quantidade_numeros, fora = 0, dentro = 0;

    printf("Quantos numeros? ");
    scanf("%d", &quantidade_numeros);

    for (int i = 0; i < quantidade_numeros; i++)
    {
        printf("\nInsira um valor: ");
        scanf("%d", &numero_usuario);

        if (numero_usuario >= 10 && numero_usuario <= 20)
        {
            dentro++;
        }
        else
        {
            fora++;
        }
    }

    printf("\nDentro: %d", dentro);
    printf("\nFora: %d", fora);

    return 0;
}