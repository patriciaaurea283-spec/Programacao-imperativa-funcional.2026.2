#include <stdio.h>
int main() {
    float nota, soma = 0, maior = -1, menor = 11;
    int qtd = 0;
    while (1) {
        printf("Digite a nota (ou -1.0 para encerrar): ");
        scanf("%f", &nota);
        if (nota == -1.0) break;
        if (nota < 0.0 || nota > 10.0) continue; // Ignora notas inválidas fora da regra
        soma += nota;
        qtd++;
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
    }
    if (qtd > 0) {
        printf("Total avaliados: %d\nMaior nota: %.2f\nMenor nota: %.2f\nMedia geral: %.2f\n", qtd, maior, menor, soma / qtd);
    }
    return 0;
}