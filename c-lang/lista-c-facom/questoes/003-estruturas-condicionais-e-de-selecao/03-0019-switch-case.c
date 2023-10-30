//19. Faça um programa que escreva o menu abaixo, leia uma opção do usuário e execute a operação correspondente.
//O programa deve exibir uma mensagem de erro se a opção for inválida. O menu do programa deve ser o seguinte:
//Escolha uma opção:
//1 - Soma de dois números.
//2 - Diferença entre dois números.
//3 - Produto entre dois números.
//4 - Divisão entre dois números (o denominador não pode ser zero).
//Sua opção:


#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para permitir acentuações em pt-br (testando)


void opMath (void);

float number1, number2; // coloquei essas variáveis como globais, mas não é necessário



int main ()
{
    
    int option;
   

    setlocale (LC_ALL, "Portuguese"); //configura o idioma para pt-br

    printf ("Escolha uma opção:");
    printf ("\n1 - Soma de dois numeros.");
    printf ("\n2 - Subtração entre dois números.");
    printf ("\n3 - Produto entre dois numeros.");
    printf ("\n4 - Divisão entre dois numeros (o denominador não pode ser zero).");
    printf ("\n-------------------");
    printf ("\nSua opçãoo: ");

    scanf ("%d", &option);


    switch (option)
    {

    case 1:
       
        opMath ();
            
        printf ("-----------\nResultado: %.2f", number1 + number2);
        
        break;

    case 2:

       opMath ();

        printf ("-----------\nResultado: %.2f", number1 - number2);
        
        break;
  
   case 3:
       
        opMath ();

        printf ("-----------\nResultado: %.2f", number1 * number2);
        
        break; 

    case 4:
        
        opMath ();

        printf ("-----------\nResultado: %.2f", number1 / number2);
        
        break;

    default:

        printf ("Opção inválida. O programa irá fechar.");

        break;
    }


return 0;
}


void opMath (void)
{
        printf ("\nNúmero 1: ");
        scanf ("%f", &number1);

        printf ("Número 2: ");
        scanf ("%f", &number2);

}