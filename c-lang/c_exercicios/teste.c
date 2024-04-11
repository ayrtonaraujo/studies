#include <stdio.h>

/* Protótipo da função para calcular a média */
float calcularMedia(int numeros[], int tamanho);

int main() {
    const int tamanhoArray = 5;
    int numeros[tamanhoArray];
    int i;

    /* Leitura dos números */
    printf("Digite %d números:\n", tamanhoArray);
    for (i = 0; i < tamanhoArray; i++) {
        scanf("%d", &numeros[i]);
    }

    /* Cálculo da média */
    float media = calcularMedia(numeros, tamanhoArray);

    /* Impressão do resultado */
    printf("A média dos números é: %.2f\n", media);

    return 0;
}

/* Função para calcular a média de um array de números inteiros */
float calcularMedia(int numeros[], int tamanho) {
    int soma = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return (float)soma / tamanho;
}

