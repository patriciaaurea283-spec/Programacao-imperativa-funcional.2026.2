#include <stdio.h>

int main() {
    double a, b, c;

    printf("Introduza os três lados do triângulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Condição de existência
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || b == c || a == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }

    return 0;
}