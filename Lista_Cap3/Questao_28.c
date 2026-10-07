#include <stdio.h>
int main() {
    int opcao;
    float salario, novo_salario, desconto;
    do {
        printf("\n--- MENU FOLHA DE PAGAMENTO ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Informe o salario base: R$ ");
                scanf("%f", &salario);
                novo_salario = (salario <= 2000.0) ? salario * 1.15 : salario * 1.10;
                printf("Novo salario: R$ %.2f\n", novo_salario);
                break;
            case 2:
                printf("Informe o salario: R$ ");
                scanf("%f", &salario);
                desconto = (salario <= 3000.0) ? salario * 0.08 : salario * 0.15;
                printf("Desconto de IR: R$ %.2f\n", desconto);
                break;
            case 3:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);
    return 0;
}