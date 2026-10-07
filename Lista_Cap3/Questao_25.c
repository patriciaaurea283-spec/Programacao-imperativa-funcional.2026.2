#include <stdio.h>
int main() {
    int N, divisores = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) divisores++;
    }
    if (divisores == 2) printf("%d e PRIMO. Divisores encontrados: 2.\n", N);
    else printf("%d NAO e primo. Divisores encontrados: %d.\n", N, divisores);
    return 0;
}