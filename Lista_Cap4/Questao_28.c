#include <stdio.h>

int main() {
    int opcao;

    printf("--- SISTEMA DE ATENDIMENTO AUTOMÁTICO BANCÁRIO ---\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("A redirecionar para a consulta de saldo...\n");
            break;
        case 2:
            printf("A redirecionar para o envio do extrato bancário...\n");
            break;
        case 3:
            printf("A redirecionar para o menu de transferências...\n");
            break;
        case 4:
            printf("A aguardar ligação. A encaminhar para um dos nossos atendentes...\n");
            break;
        default:
            printf("Opção inválida! Por favor, selecione uma opção entre 1 e 4.\n");
            break;
    }

    return 0;
}