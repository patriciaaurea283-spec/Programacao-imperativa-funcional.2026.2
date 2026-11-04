#include <stdio.h>

int main() {
    double valor_total, valor_final, parcela, comissao;
    int opcao;

    printf("Introduza o valor total da compra: ");
    scanf("%lf", &valor_total);

    printf("Opções de pagamento:\n1 - À vista (10%% de desconto)\n2 - Parcelado 3x sem juros\nOpção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valor_final = valor_total * 0.90;
        comissao = valor_final * 0.05;
        printf("Valor final a pagar (com desconto): R$ %.2lf\n", valor_final);
        printf("Comissão do vendedor: R$ %.2lf\n", comissao);
    } else if (opcao == 2) {
        parcela = valor_total / 3.0;
        comissao = valor_total * 0.05;
        printf("Valor de cada parcela (3x): R$ %.2lf\n", parcela);
        printf("Comissão do vendedor: R$ %.2lf\n", comissao);
    } else {
        printf("Opção de pagamento inválida!\n");
    }

    return 0;
}