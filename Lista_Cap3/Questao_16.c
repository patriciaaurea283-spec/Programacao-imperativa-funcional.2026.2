#include <stdio.h>
int main() {
    int senha_correta = 2026, senha_digitada, tentativas = 0;
    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);
        tentativas++;
        if (senha_digitada == senha_correta) {
            printf("Acesso Concedido! Tentativas utilizadas: %d\n", tentativas);
            return 0;
        } else {
            printf("Senha incorreta.\n");
        }
    }
    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}