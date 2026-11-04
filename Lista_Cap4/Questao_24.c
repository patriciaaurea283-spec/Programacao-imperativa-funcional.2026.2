#include <stdio.h>

int main() {
    int a1, a2, a3;

    printf("Introduza os três ângulos internos (números inteiros): ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if (a1 > 0 && a2 > 0 && a3 > 0 && (a1 + a2 + a3 == 180)) {
        if (a1 == 90 || a2 == 90 || a3 == 90) {
            printf("Triângulo Retângulo\n");
        } else if (a1 > 90 || a2 > 90 || a3 > 90) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Erro: A soma dos ângulos deve ser exatamente igual a 180°!\n");
    }

    return 0;
}