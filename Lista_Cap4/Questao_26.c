#include <stdio.h>

int main() {
    int mes, ano, bissexto;

    printf("Introduza o mês (1 a 12): ");
    scanf("%d", &mes);
    printf("Introduza o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Mês inválido!\n");
        return 1;
    }

    bissexto = ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0));

    switch (mes) {
        case 1:  printf("Janeiro - 31 dias\n"); break;
        case 2:  printf("Fevereiro - %s\n", bissexto ? "29 dias" : "28 dias"); break;
        case 3:  printf("Março - 31 dias\n"); break;
        case 4:  printf("Abril - 30 dias\n"); break;
        case 5:  printf("Maio - 31 dias\n"); break;
        case 6:  printf("Junho - 30 dias\n"); break;
        case 7:  printf("Julho - 31 dias\n"); break;
        case 8:  printf("Agosto - 31 dias\n"); break;
        case 9:  printf("Setembro - 30 dias\n"); break;
        case 10: printf("Outubro - 31 dias\n"); break;
        case 11: printf("Novembro - 30 dias\n"); break;
        case 12: printf("Dezembro - 31 dias\n"); break;
    }

    return 0;
}