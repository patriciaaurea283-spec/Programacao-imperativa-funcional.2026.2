#include <stdio.h>

int main() {
    int N, contador = 1;
    
    printf("Informe a quantidade de linhas (N): ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++;
        }
        printf("\n");
    }
    
    return 0;
}