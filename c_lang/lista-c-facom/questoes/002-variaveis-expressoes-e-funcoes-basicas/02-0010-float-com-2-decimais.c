// 10. Ler um valor real e exibir este valor com a precisão de duas cadas decimais (nem mais nem menos).

#include <stdio.h>

int main()
{
    float numero_real;

    printf("Número real: ");
    scanf("%f", &numero_real);

    printf("Duas casas decimais: %.2f", numero_real);

    return 0;
}
