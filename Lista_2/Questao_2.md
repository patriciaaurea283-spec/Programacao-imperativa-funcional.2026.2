a) Um motivo para evitar a biblioteca é que ela é legada, proprietária e não faz parte do padrão. O uso compromete a portabilidade do código, impedindo a compilação direta em sistemas Linux, macOS e servidores de produção.

b)As funções padrão e portáveis são getchar() (para leitura de um único caractere do buffer) e putchar() (para exibição de um caractere).

c) #include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

int main() {

    char letra;
    printf("Digite um caractere: ");
    scanf(" %c", &letra); //a função scanf interpreta o ENTER como separador de cada entrada ignorando espaços e quebras de linha
    printf("Cartere digitado: %c.\n", letra);

    system("PAUSE");
    return 0;
}