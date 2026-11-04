#include <stdio.h>

int main() {
    double salario, aumento, novo_salario;
    int codigo;

    printf("Introduza o salário atual: ");
    scanf("%lf", &salario);
    printf("Introduza o código do cargo (1=Técnico, 2=Gerente, 3=Demais Cargos): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            aumento = (salario <= 3000) ? salario * 0.15 : salario * 0.10;
            break;
        case 2:
            aumento = (salario <= 5000) ? salario * 0.10 : salario * 0.05;
            break;
        case 3:
            aumento = salario * 0.08;
            break;
        default:
            printf("Código de cargo inválido!\n");
            return 1;
    }

    novo_salario = salario + aumento;
    printf("Valor do aumento: R$ %.2lf\n", aumento);
    printf("Novo salário reajustado: R$ %.2lf\n", novo_salario);

    return 0;
}