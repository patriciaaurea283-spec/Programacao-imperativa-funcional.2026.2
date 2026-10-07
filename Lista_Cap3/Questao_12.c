#include <stdio.h>
int main() {
    printf("Celsius\t Fahrenheit\t Kelvin\n");
    for (int C = 0; C <= 100; C += 5) {
        float F = (9.0 * C) / 5.0 + 32;
        float K = C + 273.15;
        printf("%d\t %.2f\t\t %.2f\n", C, F, K);
    }
    return 0;
}