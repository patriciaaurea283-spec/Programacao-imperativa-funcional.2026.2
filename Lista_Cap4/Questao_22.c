#include <stdio.h>

int main() {
    float valor_produto, valor_final;
    int estado;

    printf("Introduza o valor do produto: ");
    scanf("%f", &valor_produto);

    printf("Selecione o estado de destino:\n1 - MG (7%%)\n2 - SP (12%%)\n3 - RJ (15%%)\n4 - MS (8%%)\nCódigo: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            valor_final = valor_produto * 1.07f;
            break;
        case 2:
            valor_final = valor_produto * 1.12f;
            break;
        case 3:
            valor_final = valor_produto * 1.15f;
            break;
        case 4:
            valor_final = valor_produto * 1.08f;
            break;
        default:
            printf("Erro: Código de estado inválido!\n");
            return 1;
    }

    printf("Preço final acrescido do imposto: R$ %.2f\n", valor_final);

    return 0;
}