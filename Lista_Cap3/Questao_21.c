#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    char secreto = rand() % 26 + 'a';
    char palpite;
    int tentativas = 0;
    do {
        printf("Adivinhe a letra (a-z): ");
        scanf(" %c", &palpite);
        tentativas++;
        if (palpite < secreto) printf("A letra secreta vem DEPOIS no alfabeto.\n");
        else if (palpite > secreto) printf("A letra secreta vem ANTES no alfabeto.\n");
    } while (palpite != secreto);
    printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
    return 0;
}