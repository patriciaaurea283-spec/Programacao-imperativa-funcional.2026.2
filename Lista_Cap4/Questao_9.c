#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Introduza a nota do Trabalho de Laboratório (peso 2): ");
    scanf("%f", &n1);
    printf("Introduza a nota da Avaliação Semestral (peso 3): ");
    scanf("%f", &n2);
    printf("Introduza a nota do Exame Final (peso 5): ");
    scanf("%f", &n3);

    media = (n1 * 2.0f + n2 * 3.0f + n3 * 5.0f) / 10.0f;

    printf("Média ponderada: %.2f\n", media);

    if (media >= 0.0f && media <= 2.9f) {
        printf("Situação: Reprovado\n");
    } else if (media >= 3.0f && media <= 4.9f) {
        printf("Situação: Em Recuperação\n");
    } else if (media >= 5.0f) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Média inválida!\n");
    }

    return 0;
}