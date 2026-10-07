#include <stdio.h>
int main() {
    int N;
    long long int t1 = 1, t2 = 1, proximoTermo;
    printf("Digite o N-esimo termo desejado: ");
    scanf("%d", &N);
    printf("Sequencia: ");
    for (int i = 1; i <= N; ++i) {
        if (i == 1) { printf("%lld ", t1); continue; }
        if (i == 2) { printf("%lld ", t2); continue; }
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
        printf("%lld ", proximoTermo);
    }
    printf("\nO %d-esimo termo e: %lld\n", N, N <= 2 ? 1 : proximoTermo);
    return 0;
}