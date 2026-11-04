#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Introduza a nota (0.0 a 10.0): ");
    scanf("%f", &nota);
    printf("Introduza o número de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0f && nota <= 10.0f) {
        printf("Conceito: %s\n", (faltas <= 20) ? "A" : "B");
    } else if (nota >= 7.5f && nota <= 8.9f) {
        printf("Conceito: %s\n", (faltas <= 20) ? "B" : "C");
    } else if (nota >= 5.0f && nota <= 7.4f) {
        printf("Conceito: %s\n", (faltas <= 20) ? "C" : "D");
    } else if (nota >= 4.0f && nota <= 4.9f) {
        printf("Conceito: %s\n", (faltas <= 20) ? "D" : "E");
    } else if (nota >= 0.0f && nota <= 3.9f) {
        printf("Conceito: E\n");
    } else {
        printf("Nota inválida!\n");
    }

    return 0;
}