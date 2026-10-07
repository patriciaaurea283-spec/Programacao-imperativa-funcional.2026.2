#include <stdio.h>

int main() {
    int senha_secreta = 2026;
    int senha_digitada;
    int tentativas = 0;
    
    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);
        tentativas++;
        
        if (senha_digitada == senha_secreta) {
            printf("Acesso Concedido!\n");
            return 0;
        } else {
            printf("Senha incorreta.\n");
        }
    }
    
    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}