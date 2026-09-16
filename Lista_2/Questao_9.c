#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    
    // Para evitar matematicamente a divisao por zero, deve-se checar se b != 0
    if (b != 0) {
        double divisao_real = (double)a / b;
        printf("Divisao real: %.2lf\n", divisao_real);
    } else {
        printf("Erro: Divisao por zero nao eh permitida.\n");
    }
    
    return 0;
}