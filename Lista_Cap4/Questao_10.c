#include <stdio.h>

int main() {
    int num;

    printf("Introduza um número inteiro: ");
    scanf("%d", &num);

    // Paridade
    if (num % 2 == 0) {
        printf("Paridade: PAR\n");
    } else {
        printf("Paridade: ÍMPAR\n");
    }

    // Sinal
    if (num > 0) {
        printf("Sinal: POSITIVO\n");
    } else if (num < 0) {
        printf("Sinal: NEGATIVO\n");
    } else {
        printf("Sinal: ZERO\n");
    }

    return 0;
}