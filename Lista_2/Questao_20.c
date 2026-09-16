#include <stdio.h>
#include <math.h>

int main() {
    double lado_a, lado_b;
    printf("Digite o valor do primeiro cateto: ");
    scanf("%lf", &lado_a);
    printf("Digite o valor do segundo cateto: ");
    scanf("%lf", &lado_b);
    
    double hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);
    printf("Comprimento da hipotenusa: %.2lf\n", hipotenusa);
    return 0;
}