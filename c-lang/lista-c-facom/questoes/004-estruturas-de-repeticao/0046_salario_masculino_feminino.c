/*
46. Faça um programa para ler o código, o sexo (M: masculino F: feminino) e o número de horas/aula dada mensalmente pelos professores de uma universidade, sabendo-se que cada hora/aula vale R$ 30,00. Emita uma listagem contendo o código, o salário bruto e o salário líquido (levando em consideração os descontos explicados a seguir) de todos os professores. Mostre também a média dos salários líquidos dos professores do sexo masculino e a média dos salários líquidos dos professores do sexo feminino. Considere:
• Desconto para homens, 10% e, para mulheres, 5%.
• As informações terminarão quando for lido o código = 99999.
*/

#include <stdio.h>

#define HORA_AULA 30.0

int main () {

    char sexo;
    char *sexo_array = NULL;

    float salario_bruto, salario_liquido;
    float *salario_bruto_array = NULL;
    float *salario_liquido_array = NULL;

    int cont_masc = 0, cont_fem = 0;
    float soma_masc = 0, soma_fem = 0;

    int horas, minutos;
    float hora_aula;

    int codigo;
    int *codigo_array = NULL;

    int contador = 0;
    
    while (1) {
        
        //codigo
        do {
            printf ("\nInsira um codigo (99999 para finalizar): ");
            scanf ("%d", &codigo);
        } while (codigo <= 0);

        if (codigo >= 99999) {
            break;
        }
        
        //sexo
        do {
            printf ("Qual o sexo (M/F)?");
            scanf (" %c", &sexo);
        } while (sexo != 'M' && sexo != 'F');

        //hora aula
         do {        
            printf ("Hora/aula (HH:MM): ");
            scanf ("%d:%d", &horas, &minutos);
        } while (minutos < 0 || horas < 0 || minutos > 59);

        hora_aula = (float)horas + (minutos / 60.0);

        //dados media salarial
        salario_bruto = hora_aula * HORA_AULA;

        if (sexo == 'M' || sexo == 'm') {
            cont_masc++;
            salario_liquido = salario_bruto - (salario_bruto * 0.1);
            soma_masc += salario_liquido;
        }
        else {
            cont_fem++;
            salario_liquido = salario_bruto - (salario_bruto * 0.05);
            soma_fem += salario_liquido;
        }

        // realloc arrays
        codigo_array = realloc(codigo_array, (contador + 1) * sizeof(int));
        sexo_array = realloc(sexo_array, (contador + 1) * sizeof(char));
        salario_bruto_array = realloc(salario_bruto_array, (contador + 1) * sizeof(float));
        salario_liquido_array = realloc(salario_liquido_array, (contador + 1) * sizeof(float));

        // armazenar dados nos arrays
        codigo_array[contador] = codigo;
        sexo_array[contador] = sexo;
        salario_bruto_array[contador] = salario_bruto;
        salario_liquido_array[contador] = salario_liquido;

        //conta loop
        contador++;
    }

    printf("\nCodigo\tSexo\tBruto\tLiquido\n");

    for (int i = 0; i < contador; i++) {
        printf("%d\t%c\t%.2f\t%.2f\n", codigo_array[i], sexo_array[i], salario_bruto_array[i], salario_liquido_array[i]);

    }

    //free memory
    free(codigo_array);
    free(sexo_array);
    free(salario_bruto_array);
    free(salario_liquido_array);

    printf ("\n\nMedia salarial (M): $ %.2f", soma_masc / cont_masc);
    printf ("\nMedia salarial (F): $ %.2f", soma_fem / cont_fem);
    printf ("\nQuant. M: %d", cont_masc);
    printf ("\nQuant. F: %d", cont_fem);

    return 0;
}