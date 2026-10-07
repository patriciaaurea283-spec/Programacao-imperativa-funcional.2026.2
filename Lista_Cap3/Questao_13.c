#include <stdio.h>
int main() {
    int N;
    long long int fat = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Erro: Numero negativo nao possui fatorial.\n");
    } else {
        for (int i = 1; i <= N; i++) fat *= i;
        printf("%d! = %lld\n", N, fat);
    }
    return 0;
}