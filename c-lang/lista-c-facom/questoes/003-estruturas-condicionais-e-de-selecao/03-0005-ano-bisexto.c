/*
5. Verificar se um determinado ano, fornecido pelo usuário, é bissexto. Um ano é bissexto se for divisível por 400 ou se for divisível por 4 e não for divisível por 100. Exemplos: 1988, 1992, 1996, 2000. Repare que 1900 não é bissexto.
*/

#include <stdio.h>

int main() {
    int anoFornecido;

    printf("Insira o ano: ");
    scanf("%d", &anoFornecido);

       if ((anoFornecido % 400 == 0) || ((anoFornecido % 4 == 0) && (anoFornecido % 100 != 0))) {
        printf("O ano é bissexto!\n");
    } else {
        printf("O ano não é bissexto!\n");
    }

    return 0;
}
