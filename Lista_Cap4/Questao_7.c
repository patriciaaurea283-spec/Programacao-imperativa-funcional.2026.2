#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Introduza um número real: ");
    scanf("%lf", &x);

    if (x >= 0) {
        printf("Raiz quadrada de %.2lf = %.2lf\n", x, sqrt(x));
    } else {
        printf("Quadrado de %.2lf = %.2lf\n", x, x * x);
    }

    return 0;
}