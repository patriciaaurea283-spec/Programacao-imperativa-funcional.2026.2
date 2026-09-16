#include <stdio.h>

int main() {
    const double PI = 3.141593;
    double raio;
    
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);
    
    double area = PI * raio * raio;
    double circunferencia = 2.0 * PI * raio;
    
    printf("Area: %.4lf\n", area);
    printf("Circunferencia: %.4lf\n", circunferencia);
    return 0;
}