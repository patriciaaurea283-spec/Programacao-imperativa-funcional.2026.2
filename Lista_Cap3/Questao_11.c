#include <stdio.h>
int main() {
    int A, B;
    printf("Digite os valores de A e B: ");
    scanf("%d %d", &A, &B);
    if (A <= B) {
        for (int i = A; i <= B; i++) printf("%d ", i);
    } else {
        for (int i = A; i >= B; i--) printf("%d ", i);
    }
    return 0;
}