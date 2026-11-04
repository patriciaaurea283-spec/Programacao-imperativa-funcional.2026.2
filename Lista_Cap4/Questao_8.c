#include <stdio.h>

int main() {
    int ano;

    printf("Introduza o ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d é BISSEXTO.\n", ano);
    } else {
        printf("O ano %d NÃO é bissexto.\n", ano);
    }

    return 0;
}