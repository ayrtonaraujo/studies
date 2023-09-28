/*
5. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto.   Fazer um algoritmo que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido.
*/


#include <stdio.h>

#define LIMITE 0.3

int main ()
{
    float salario_bruto, valor_prestacao;

    printf ("Insira o valor do seu salario: ");
    scanf ("%f", &salario_bruto);

    printf ("Qual valor da prestacao que voce deseja?: ");
    scanf ("%f", &valor_prestacao);

    (valor_prestacao > salario_bruto * LIMITE)?printf("Reprovado. Seu limite de credito e: %.2f", salario_bruto * LIMITE):printf("Aprovado. Dentro do limite de credito de: %.2f", salario_bruto * LIMITE);



    return 0;
}