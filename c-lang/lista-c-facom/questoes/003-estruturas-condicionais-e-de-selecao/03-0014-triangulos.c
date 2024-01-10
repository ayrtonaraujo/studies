/*
14. Dados três valores A, B e C, verificar se eles podem ser comprimentos de lados de um triângulo e, se forma um triângulo equilátero, isósceles ou escaleno. Considere que:
    • O comprimento de um lado do triângulo é menor que a soma dos dois outros lados;
    • Um triângulo equilátero deve ter os três lados com a mesmo tamanho;
    • Um triângulo isósceles deve ter pelo menos dois lados com a mesmo tamanho;
    • Um triângulo escaleno deve ter os três lados com tamanhos diferente;
*/

#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Valor A: ");
    scanf("%f", &a);

    printf("Valor B: ");
    scanf("%f", &b);

    printf("Valor C: ");
    scanf("%f", &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Triangulo.");
    }
    if (a == b && b == c && c == a)
    {
        printf("Triangulo equilátero.");
    }
    if (a != b && b != c && c != a)
    {
        printf("Triangulo escaleno.");
    }
    if (a == b || b == c || c == a )
    {
        printf("Triangulo isoceles.");
    }
    else 
    {
        printf("Valor nao compoem um triangulo.");
    }

    return 0;
}