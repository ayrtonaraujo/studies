//comparacao de vetores

#include <stdio.h>

int main () {
    int array_a[5] = {1,2,3,4,5};
    int array_b[5] = {3,4,3,4,5};

    for (int i = 0; i < 5; i++) {
        if (array_a[i] == array_b[i]) {
            printf("\n%d e igual a %d", array_a[i], array_b[i]);
        }
        else {
             printf("\n%d nao e igual a %d", array_a[i], array_b[i]);
        }
    }
    
    return 0;
}