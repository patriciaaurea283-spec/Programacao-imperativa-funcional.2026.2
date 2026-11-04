#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double n1, n2, resultado;

    printf("Escolha a operação (+, -, *, /, ^): ");
    scanf(" %c", &op);

    printf("Introduza dois operandos reais: ");
    scanf("%lf %lf", &n1, &n2);

    switch (op) {
        case '+':
            resultado = n1 + n2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (n2 == 0) {
                printf("Erro: Divisão por zero não é permitida!\n");
            } else {
                resultado = n1 / n2;
                printf("Resultado: %.2lf\n", resultado);
            }
            break;
        case '^':
            resultado = pow(n1, n2);
            printf("Resultado: %.2lf\n", resultado);
            break;
        default:
            printf("Erro: Operador inválido!\n");
            break;
    }

    return 0;
}