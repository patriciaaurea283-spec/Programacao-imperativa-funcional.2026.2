#include <stdio.h>
int main() {
    int N;
    printf("Digite uma dimensao impar N (3 a 19): ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}