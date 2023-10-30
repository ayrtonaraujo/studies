/*

79. Calcular a corrente em um circuito elétrico resistivo simples:
• Leia os dados de uma fonte de tensão real composta por força eletromotriz (E) e resistência interna (ri).
• Leia os dados de uma fonte de um receptor composto por resistência interna (ri) e consumo (E').
• Calcular e exibir a corrente que passa no circuito composto pela fonte e receptor, sabendo que E = E'+ R * i, onde R é a soma das resistências internas.

*/




/*
Na minha concepção o programa deve ler um circuito parecido com esse no link:

http://gt-mre.ufsc.br/moodle/pluginfile.php/858/mod_label/intro/7.png

*/


#include <stdio.h>


int main ()
{   
     char stop_operation;
     float resistor;
     float add_resistor;
     float source; //fonte de energia





    printf ("Insira o valor da fonte de entrada (V): ");
    scanf ("%f", &source);
    getchar();


     while (stop_operation != 'n' && stop_operation != 'N')
     {
        printf ("\nInsira o valor do resistor: ");
        scanf ("%f", &add_resistor);

        getchar();

        
        resistor += add_resistor;


        printf ("Continuar? (S/N) :");
        scanf ("%c", &stop_operation);







     }




    printf ("Resistencia equivalente: %f ohms", resistor);
    
    printf ("\nCorrente do circuito: %f A", source/resistor);



    return 0;
}