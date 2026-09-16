#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa a semente aleatoria baseada no tempo atual
    srand((unsigned int)time(NULL));
    
    // O operador % 6 gera restos de 0 a 5. Somar 1 desloca a faixa para 1 a 6.
    int dado1 = (rand() % 6) + 1;
    int dado2 = (rand() % 6) + 1;
    int dado3 = (rand() % 6) + 1;
    
    printf("Lancamento dos 3 dados: %d, %d, %d\n", dado1, dado2, dado3);
    return 0;
}