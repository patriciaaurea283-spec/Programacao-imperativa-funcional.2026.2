#include <stdio.h>
int main() {
    float valor, soma = 0;
    int qtd = 0;
    while (1) {
        printf("Digite um valor (negativo para parar): ");
        scanf("%f", &valor);
        if (valor < 0) break;
        soma += valor;
        qtd++;
    }
    if (qtd > 0) {
        printf("Valores validos: %d\nSoma: %.2f\nMedia: %.2f\n", qtd, soma, soma / qtd);
    }
    return 0;
}