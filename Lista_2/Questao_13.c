#include <stdio.h>

int main() {
    float lado, base, altura;
    
    printf("--- Quadrado ---\n");
    printf("Digite o lado L: ");
    scanf("%f", &lado);
    printf("Area do Quadrado: %.2f\n\n", lado * lado);
    
    printf("--- Retangulo ---\n");
    printf("Digite a base B e altura H: ");
    scanf("%f %f", &base, &altura);
    printf("Area do Retangulo: %.2f\n\n", base * altura);
    
    printf("--- Triangulo Retangulo ---\n");
    printf("Digite a base B e altura H: ");
    scanf("%f %f", &base, &altura);
    printf("Area do Triangulo: %.2f\n", (base * altura) / 2.0f);
    
    return 0;
}