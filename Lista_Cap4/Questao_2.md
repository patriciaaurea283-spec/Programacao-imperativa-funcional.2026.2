a) Será impressa a mensagem "Opção B". 
A variável x vale 15, logo a condição do primeiro if (x > 10) é verdadeira. O fluxo entra no bloco e testa if (y > 10). Como y vale 5, esta condição é falsa. Sem o uso de chaves, a cláusula else associa-se ao if mais próximo (y > 10). Como y > 10 falhou, a instrução contida no else é executada, imprimindo Opção B.   

b) Na ausência de chaves ({}), a cláusula else associa-se sempre ao comando if mais próximo e interno que ainda não possua um else associado, independentemente da indentação do código.

c) Código reescrito:

#include <stdio.h>

int main() {
    int x = 15, y = 5;

    if (x > 10) {
        if (y > 10) {
            printf("Opção A\n");
        }
    } else {
        printf("Opção B\n");
    }

    return 0;
}