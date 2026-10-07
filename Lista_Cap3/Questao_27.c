#include <stdio.h>
int main() {
    int saque, qtd;
    int notas[] = {100, 50, 20, 10, 5, 2};
    printf("Informe o valor do saque em reais: ");
    scanf("%d", &saque);
    for (int i = 0; i < 6; i++) {
        qtd = 0;
        while (saque >= notas[i]) {
            saque -= notas[i];
            qtd++;
        }
        if (qtd > 0) printf("%d cedula(s) de R$ %d\n", qtd, notas[i]);
    }
    if (saque > 0) printf("Valor de R$ %d restante (nao possivel sacar com as notas disponiveis).\n", saque);
    return 0;
}