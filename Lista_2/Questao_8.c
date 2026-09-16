#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    int quadrado = num * num;
    float decima_parte = (float)num / 10.0f; // Cast para evitar divisao inteira
    
    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);
    return 0;
}