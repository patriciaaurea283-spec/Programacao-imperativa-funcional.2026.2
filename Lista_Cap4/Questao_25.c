#include <stdio.h>

int main() {
    int total, entregue, troco;
    int n100, n50, n20, n10, n5, n2;

    printf("Introduza o valor total da compra: ");
    scanf("%d", &total);
    printf("Introduza o valor entregue pelo cliente: ");
    scanf("%d", &entregue);

    if (entregue < total) {
        printf("Erro: Valor entregue é insuficiente!\n");
        return 1;
    }

    troco = entregue - total;
    printf("Troco total: R$ %d\n", troco);

    n100 = troco / 100; troco %= 100;
    n50  = troco / 50;  troco %= 50;
    n20  = troco / 20;  troco %= 20;
    n10  = troco / 10;  troco %= 10;
    n5   = troco / 5;   troco %= 5;
    n2   = troco / 2;   troco %= 2;

    printf("Cédulas de R$ 100: %d\n", n100);
    printf("Cédulas de R$ 50 : %d\n", n50);
    printf("Cédulas de R$ 20 : %d\n", n20);
    printf("Cédulas de R$ 10 : %d\n", n10);
    printf("Cédulas de R$ 5  : %d\n", n5);
    printf("Cédulas de R$ 2  : %d\n", n2);

    if (troco > 0) {
        printf("Sobra indivisível em cédulas: R$ %d\n", troco);
    }

    return 0;
}