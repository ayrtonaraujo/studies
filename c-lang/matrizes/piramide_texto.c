#include <stdio.h>

int main() {
    int i, j, n_linhas;
    
    printf ("Linhas: ");
    scanf("%d", &n_linhas);
    
    for ( i = 1; i <= n_linhas; i ++) {
        for (j = 0; j < i; j++){
            printf("%d ", j + 1);
        } 
    printf("\n");
        
    }

    return 0;
}