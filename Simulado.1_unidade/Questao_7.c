#include <stdio.h>
#include <math.h>

int main() {
    const float PI = 3.14159265;
    float R, area, volume;
    
    printf("Informe o raio da esfera: ");
    scanf("%f", &R);
    
    area = 4 * PI * pow(R, 2);
    volume = (4.0 / 3.0) * PI * pow(R, 3);
    
    printf("Area da superficie: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);
    
    return 0;
}