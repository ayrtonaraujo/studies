/*
Faça um programa que mostre para o usuário um menu de opções para as seguintes operações matemáticas: soma, subtração, divisão (quociente), multiplicação, resto da divisão inteira, exponenciação e logaritmo (em uma base especificada pelo usuário), logaritmo natural, raiz quadrada, raiz nonésima, seno, cosseno e tangente. O usuário deverá escolher uma das opções, e entrar com os operandos necessários. O programa deve exibir o resultado obtido.
*/

#include <stdio.h>
#include <math.h>

void Operacoes();

int main()
{

    int opcao;
    float resultado;
    float num_1, num_2;
    int num_int_1, num_int_2;

    Operacoes();

    scanf("%d", &opcao);

    while (opcao < 0 || opcao > 13)
    {
        printf("\nOpcao invalida, escolha uma correta.\n");

        Operacoes();
        scanf("%d", &opcao);
    }

    switch (opcao)
    {
    case 1:
        printf("\nOpcao escolhida: ");
        printf("\n1. Soma\n");

        printf("Insira o primeiro numero: ");
        scanf("%f", &num_1);

        printf("Insira o segundo numero: ");
        scanf("%f", &num_2);

        printf("\n\nResultado: %.2f", num_1 + num_2);
        break;

    case 2:
        printf("\nOpcao escolhida: ");
        printf("\n2. Subtracao\n");

        printf("Insira o primeiro numero: ");
        scanf("%f", &num_1);

        printf("Insira o segundo numero: ");
        scanf("%f", &num_2);

        printf("\n\nResultado: %.2f", num_1 - num_2);
        break;

    case 3:
        printf("\nOpcao escolhida: ");
        printf("\n3. Divisao (quociente)\n");

        printf("Insira o primeiro numero: ");
        scanf("%f", &num_1);

        printf("Insira o segundo numero: ");
        scanf("%f", &num_2);

        printf("\n\nResultado: %.2f", num_1 / num_2);
        break;

    case 4:
        printf("\nOpcao escolhida: ");
        printf("\n4. Multiplicacao\n");

        printf("Insira o primeiro numero: ");
        scanf("%f", &num_1);

        printf("Insira o divisor: ");
        scanf("%f", &num_2);

        printf("\n\nResultado: %.2f", num_1 * num_2);
        break;

    case 5:
        printf("\nOpcao escolhida: ");
        printf("\n5. Resto da divisao inteira\n");

        printf("Insira o primeiro numero: ");
        scanf("%f", &num_1);

        printf("Insira o divisor: ");
        scanf("%f", &num_2);

        num_int_1 = (int)num_1;
        num_int_2 = (int)num_2;

        resultado = num_int_1 % num_int_2;

        printf("\n\nResultado: %.2f", resultado);
        break;

    case 6:
        printf("\nOpcao escolhida: ");
        printf("\n6. Exponenciação\n");

        printf("Insira a base: ");
        scanf("%f", &num_1);

        printf("Insira o expoente: ");
        scanf("%f", &num_2);

        printf("\n\nResultado: %.2f", pow(num_1, num_2));
        break;

    case 7:
        printf("\nOpcao escolhida: ");
        printf("\n7. Logaritmo (base especificada)\n");

        printf("Insira o numero: ");
        scanf("%f", &num_1);

        printf("Insira a base: ");
        scanf("%f", &num_2);

        printf("\n\nResultado: %.2f", log(num_1) / log(num_2));
        break;

    case 8:
        printf("\nOpcao escolhida: ");
        printf("\n8. Logaritmo natural\n");

        printf("Insira o numero: ");
        scanf("%f", &num_1);

        printf("\n\nResultado: %.2f", log10(num_1));
        break;

    case 9:
        printf("\nOpcao escolhida: ");
        printf("\n9. Raiz quadrada\n");

        printf("Insira o numero: ");
        scanf("%f", &num_1);

        printf("\n\nResultado: %.2f", sqrt(num_1));
        break;

    case 10:
        printf("\nOpcao escolhida: ");
        printf("\n10. Raiz nonesima\n");

        printf("Insira o numero: ");
        scanf("%f", &num_1);

        printf("\n\nResultado: %.2f", pow(num_1, 1.0 / 9.0));
        break;

    case 11:
        printf("\nOpcao escolhida: ");
        printf("\n11. Seno\n");

        printf("Insira o angulo em radianos: ");
        scanf("%f", &num_1);

        printf("\n\nResultado: %.2f", sin(num_1));
        break;

    case 12:
        printf("\nOpcao escolhida: ");
        printf("\n12. Cosseno\n");

        printf("Insira o angulo em radianos: ");
        scanf("%f", &num_1);

        printf("\n\nResultado: %.2f", cos(num_1));
        break;

    case 13:
        printf("\nOpcao escolhida: ");
        printf("\n13. Tangente\n");

        printf("Insira o angulo em radianos: ");
        scanf("%f", &num_1);

        printf("\n\nResultado: %.2f", tan(num_1));
        break;
    }

    return 0;
}

void Operacoes()
{

    printf("\nEscolha a operacao:");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Divisao (quociente)\n");
    printf("4. Multiplicacao\n");
    printf("5. Resto da divisao inteira\n");
    printf("6. Exponenciação\n");
    printf("7. Logaritmo (base especificada)\n");
    printf("8. Logaritmo natural\n");
    printf("9. Raiz quadrada\n");
    printf("10. Raiz nonesima\n");
    printf("11. Seno\n");
    printf("12. Cosseno\n");
    printf("13. Tangente\n");
    printf("\n\nDigite a opcao desejada: ");
}