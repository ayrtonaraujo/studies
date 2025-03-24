#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    while (num2 == num1) { //evitar numero repetido
        printf("\nO num 2 esta igual ao num 1, insira um valor diferente.");
        printf("\nDigite o segundo numero inteiro: ");
        scanf("%d", &num2);
    }

    printf("Numeros impares entre %d e %d:\n", num1, num2);

    // Certificar-se de que num1 é o menor número
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int current = num1;

    while (current <= num2) {
        if (current % 2 != 0) {
            printf("%d\n", current);
        }
        current++;
    }

    return 0;
}
