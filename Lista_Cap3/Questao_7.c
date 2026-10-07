#include <stdio.h>

int main() {
    // Versão 1: for
    for (int i = 0; i <= 100; i++) printf("%d ", i);
    printf("\n");
    // Versão 2: while
    int j = 0;
    while (j <= 100) { printf("%d ", j); j++; }
    printf("\n");
    // Versão 3: do-while
    int k = 0;
    do { printf("%d ", k); k++; } while (k <= 100);

    return 0;
}