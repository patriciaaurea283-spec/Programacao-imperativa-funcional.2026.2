#include <stdio.h>

int main() {
    char ch;
    printf("Digite um caractere: ");
    scanf(" %c", &ch);
    
    // Em C, um 'char' eh internamente armazenado como um inteiro de 1 byte.
    // Imprimir com %d exibe o valor numerico decimal correspondente na Tabela ASCII.
    printf("O caractere '%c' possui o codigo ASCII decimal: %d\n", ch, ch);
    return 0;
}