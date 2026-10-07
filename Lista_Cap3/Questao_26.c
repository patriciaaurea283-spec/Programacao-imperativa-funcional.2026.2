#include <stdio.h>
int main() {
    int A, B, soma = 0;
    printf("Digite A e B (A < B): ");
    scanf("%d %d", &A, &B);
    for (int i = A; i <= B; i++) {
        if (i < 2) continue;
        int primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) { primo = 0; break; }
        }
        if (primo) {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nSoma dos primos no intervalo: %d\n", soma);
    return 0;
}