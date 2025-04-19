#include <stdio.h>

int main(void)
{
    char resposta;

    printf("Do you agree (Y / N)? ");
    scanf("%c", &resposta);

    while (resposta != 'Y' && resposta != 'y' && resposta != 'N' && resposta != 'n') {
        
        printf ("\nEnter a valid option. 'Y' or 'N'.");
        printf("\nDo you agree (Y / N)? ");
        scanf(" %c", &resposta);

    }

    if (resposta == 'Y' || resposta == 'y')
    {
        printf("\nAgreed.");
    }

    else if (resposta == 'N' || resposta == 'n')
    {
        printf("\nDisagreed.");
    }
}