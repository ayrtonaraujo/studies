/*
6. Receber o salário de um trabalhador e o valor de um empréstimo. Se a prestação for maior que 20% do salário imprima "Empréstimo não concedido", caso contrário imprima "Empréstimo autorizado".
*/

#include <stdio.h>

int main()
{
    float salario, emprestimo;

    printf("Salario: ");
    scanf("%f", &salario);

    printf("Emprestimo: ");
    scanf("%f", &emprestimo);

    if (emprestimo > (salario * 0.2))
    {
        printf("Empréstimo não concedido");
    }
    else
    {
        printf("Empréstimo autorizado");
    }

    return 0;
}