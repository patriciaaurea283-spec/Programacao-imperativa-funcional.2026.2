#include <stdio.h>

int main() {
    char maiuscula;
    printf("Digite uma letra maiuscula (A-Z): ");
    scanf(" %c", &maiuscula);
    
    // Na Tabela ASCII, as letras minusculas estao deslocadas 32 posicoes a frente das maiusculas.
    char minuscula = maiuscula + 32;
    
    printf("Letra convertida para minuscula: %c\n", minuscula);
    return 0;
}