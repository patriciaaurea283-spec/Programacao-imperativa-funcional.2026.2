#include <stdio.h>
int main() {
    long long int soma_total = 0;
    for (int i = 1; i <= 100; i++) {
        int quad = i * i;
        printf("%d -> %d\n", i, quad);
        soma_total += quad;
    }
    printf("Soma total dos quadrados: %lld\n", soma_total);
    return 0;
}