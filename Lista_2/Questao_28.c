#include <stdio.h>

int main() {
    float horas_normais, horas_extras;
    
    printf("Digite o total de horas normais no ano: ");
    scanf("%f", &horas_normais);
    printf("Digite o total de horas extras no ano: ");
    scanf("%f", &horas_extras);
    
    float salario_bruto = (horas_normais * 10.0f) + (horas_extras * 15.0f);
    
    // Utilizacao do operador ternario para calcular a quantia excedente a isencao de R$ 12.000,00
    float excedente = (salario_bruto > 12000.0f) ? (salario_bruto - 12000.0f) : 0.0f;
    float imposto = excedente * 0.10f; // 10% de imposto sobre o excedente
    float salario_liquido = salario_bruto - imposto;
    
    printf("Salario Bruto Anual: R$ %.2f\n", salario_bruto);
    printf("Imposto Devido: R$ %.2f\n", imposto);
    printf("Salario Liquido Anual: R$ %.2f\n", salario_liquido);
    
    return 0;
}