#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    int antecessor = num;
    --antecessor; // Decremento unario pre-fixado diminui 1 unidade
    
    int sucessor = num;
    ++sucessor;   // Incremento unario pre-fixado aumenta 1 unidade
    
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);
    return 0;
}