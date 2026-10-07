#include <stdio.h>
int main() {
    int NUM, encontrou = 0;
    printf("Digite o numero limite: ");
    scanf("%d", &NUM);
    for (int i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    if (!encontrou) printf("Nenhum numero atende a condicao.");
    return 0;
}