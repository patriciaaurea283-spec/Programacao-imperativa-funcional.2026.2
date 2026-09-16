#include <stdio.h>

int main() {
    const double PI = 3.141593;
    double raio;
    
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);
    
    double area = 4.0 * PI * raio * raio;
    // O uso de 4.0 / 3.0 garante a divisao em ponto flutuante, evitando o truncamento de 4/3 -> 1
    double volume = (4.0 / 3.0) * PI * raio * raio * raio;
    
    printf("Area de superficie: %.4lf\n", area);
    printf("Volume: %.4lf\n", volume);
    return 0;
}