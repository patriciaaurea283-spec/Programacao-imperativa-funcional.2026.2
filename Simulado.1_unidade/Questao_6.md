a) A variável soma foi declarada internamente ao bloco do laço for. Por conta da regra de visibilidade e escopo de bloco, a variável deixa de existir na memória ao final da estrutura de repetição. O comando printf localizado fora desse laço não tem acesso a ela.

b) As iterações de 1 a 4 executam totalmente. A iteração 5 é interrompida no meio pelo continue, saltando o cálculo matemático e avançando para a próxima repetição. As iterações 6 e 7 executam totalmente. A iteração 8 é interrompida definitivamente pelo break, encerrando o laço antes de atualizar qualquer valor.

c) O código corrigido resulta na soma de 1 + 4 + 9 + 16 + 36 + 49 = 115.

#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, soma = 0; // Escopo corrigido
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}