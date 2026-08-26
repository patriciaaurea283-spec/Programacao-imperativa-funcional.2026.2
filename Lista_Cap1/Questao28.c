#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    double media;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    media = (a + b + c) / 3.0;

    printf("Media: %.2f\n", media);

    system("PAUSE");

    return 0;
}