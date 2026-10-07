#include <stdio.h>
int main() {
    int L;
    printf("Digite a dimensao L do quadrado (3 a 20): ");
    scanf("%d", &L);
    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= L; j++) {
            if (i == 1 || i == L || j == 1 || j == L) printf("X");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}