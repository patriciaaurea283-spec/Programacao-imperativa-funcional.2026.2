#include <stdio.h>

int main() {
    float salario_base;
    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salario_base);
    
    /* 
       Fórmula: Salário Líquido = Salário Base + (5% de Gratificação) - (7% de Imposto)
       Líquido = Base + (Base * 0.05) - (Base * 0.07) = Base * (1 + 0.05 - 0.07) = Base * 0.98
    */
    float gratificacao = salario_base * 0.05f;
    float imposto = salario_base * 0.07f;
    float salario_liquido = salario_base + gratificacao - imposto;
    
    printf("Salario Liquido a receber: R$ %.2f\n", salario_liquido);
    return 0;
}