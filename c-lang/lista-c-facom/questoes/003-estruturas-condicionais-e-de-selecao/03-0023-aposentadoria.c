/*
23. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos de idade.
• Ou ter trabalhado pelo menos 30 anos.
• Ou ter pelo menos 60 anos e ter trabalhado pelo menos 25 anos.
*/

#include <stdio.h>

int main ()
{
    int idade, anos_trabalho;

    printf ("Idade: ");
    scanf ("%d", &idade);

    printf ("Anos trabalhados: ");
    scanf ("%d", &anos_trabalho);

    while (idade < 0.0) 
    {
         printf ("\nIdade invalida, inserir novamente.");
        printf ("\nIdade: ");
        scanf ("%d", &idade);
    }
    
     while (anos_trabalho > idade) 
    {
        printf ("\nAnos trabalhados maior que a idade, inserir novamente.");
        printf ("\nAnos trabalhados: ");
        scanf ("%d", &anos_trabalho);
    }

    if (idade >= 65)
    {
        printf ("Tem direito.");
    }

    else if (anos_trabalho >= 25)
    {
        printf ("Tem direito.");
    }

    else if (idade >= 60 && anos_trabalho >= 25)
    {
         printf ("Tem direito.");
    }

    else {
        printf ("Nao tem direito.");
    }

    


    return 0;
}