/*
102. Ler um número real x e decompor ele o decompor em número significante e em um expoente binário de modo que a seja verdadeira a equação x = significante ∗ 2 expoente.
Dica: use a função frexp da biblioteca math.h.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x, significante;
    int expoente;

    printf("Insira um numero: ");
    scanf("%lf", &x);

    significante = frexp(x, &expoente);

    printf("\nN. real: %.3lf\nSignificante: %.3lf\nExpoente (binario): %d\n", x, significante, expoente);

    return 0;
}