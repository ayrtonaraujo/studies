#include <stdio.h>

int inverterDigitos(int numero) {
    int numeroInvertido = 0;
    while (numero > 0) {
        int digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }
    return numeroInvertido;
}

int main() {
    int numero;
    
    printf("Digite um numero inteiro de tres digitos: ");
    scanf("%d", &numero);
    
    if (numero >= 100 && numero <= 999) {
        int numeroInvertido = inverterDigitos(numero);
        printf("Numero lido: %d\n", numero);
        printf("Numero obtido: %d\n", numeroInvertido);
    } else {
        printf("Por favor, digite um numero de tres digitos.\n");
    }
    
    return 0;
}
