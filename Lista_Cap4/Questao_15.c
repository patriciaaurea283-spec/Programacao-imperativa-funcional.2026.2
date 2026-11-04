#include <stdio.h>

int main() {
    int idade, tempo_servico;

    printf("Introduza a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Introduza o tempo de serviço (anos): ");
    scanf("%d", &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
        printf("O trabalhador PODE aposentar-se.\n");
    } else {
        printf("O trabalhador NÃO pode aposentar-se.\n");
    }

    return 0;
}