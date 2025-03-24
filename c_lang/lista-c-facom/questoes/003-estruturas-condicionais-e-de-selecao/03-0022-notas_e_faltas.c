/*
22. Leia a nota e o número de faltas de um aluno e escreva seu conceito de acordo com a tabela 3.3.
*/

#include <stdio.h>

void conceitoA();
void conceitoB();
void conceitoC();
void conceitoD();
void conceitoE();

int main()
{
    float notaAluno;
    int numeroFaltas;

    printf("Nota final: ");
    scanf("%f", &notaAluno);

    printf("Numero de faltas: ");
    scanf("%d", &numeroFaltas);

    while (notaAluno < 0.0 || notaAluno > 10.0)
    {
        printf ("\nNota invalida, inserir novamente.");
        printf("\nNota final: ");
        scanf("%f", &notaAluno);
    }
    
    if (notaAluno >= 9.0 && notaAluno <= 10.0)
    {
        if (numeroFaltas <= 20)
        {
            conceitoA();
        }

        if (numeroFaltas > 20)
        {
            conceitoB();
        }
    }

    if (notaAluno >= 7.5 && notaAluno <= 8.9)
    {
        if (numeroFaltas <= 20)
        {
            conceitoB();
        }

        if (numeroFaltas > 20)
        {
            conceitoC();
        }
    }

    if (notaAluno >= 5.0 && notaAluno <= 7.4)
    {
        if (numeroFaltas <= 20)
        {
            conceitoC();
        }

        if (numeroFaltas > 20)
        {
            conceitoD();
        }
    }

    if (notaAluno >= 4.0 && notaAluno <= 4.9)
    {
        if (numeroFaltas <= 20)
        {
            conceitoD();
        }

        if (numeroFaltas > 20)
        {
            conceitoE();
        }
    }

    if (notaAluno >= 0.0 && notaAluno <= 3.9)
    {
        if (numeroFaltas <= 20)
        {
            conceitoE();
        }

        if (numeroFaltas > 20)
        {
            conceitoE();
        }
    }

    return 0;
}


void conceitoA()
{
    printf("\nConceito A.");
}

void conceitoB()
{
    printf("\nConceito B.");
}

void conceitoC()
{
    printf("\nConceito C.");
}

void conceitoD()
{
    printf("\nConceito D.");
}

void conceitoE()
{
    printf("\nConceito E.");
}