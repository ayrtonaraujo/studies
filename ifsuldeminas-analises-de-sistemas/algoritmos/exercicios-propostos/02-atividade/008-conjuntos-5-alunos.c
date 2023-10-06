/*
8. Escrever um programa que leia um conjunto de 5 informações contendo, cada uma delas, a altura de uma pessoa, calcule e mostre a maior e a menor altura da turma.
*/

#include <stdio.h>

#define QTD_PESSOAS 5

int main()
{
    float altura_pessoas[QTD_PESSOAS];
    int indice_maior = 0, indice_menor = 0;
    float maior = 0, menor = 0;

    for (int i = 0; i < QTD_PESSOAS; i++)
    {
        printf("Altura da Pessoa %d: ", i + 1);
        scanf("%f", &altura_pessoas[i]);

        if (i == 0 || maior < altura_pessoas[i])
        {
            maior = altura_pessoas[i];
            indice_maior = i + 1;
        }

        if (i == 0 || menor > altura_pessoas[i])
        {
            menor = altura_pessoas[i];
            indice_menor = i + 1;
        }
    }

    printf("==============");
    printf("A pessoa \"%d\" e a maior (Altura: \"%.2f\")", indice_maior, maior);
    printf("\nA pessoa \"%d\" e a menor (Altura: \"%.2f\")", indice_menor, menor);

    return 0;
}
