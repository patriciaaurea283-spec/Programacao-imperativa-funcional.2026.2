#include <stdio.h>

int main() {
    const double PI = 3.141593;
    double graus;
    
    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);
    
    double radianos = graus * (PI / 180.0);
    printf("Angulo em radianos: %.6lf rad\n", radianos);
    return 0;
}