#include <stdio.h>

int main() {
    float dist, litros, consumo;

    printf("Introduza a distância percorrida (km): ");
    scanf("%f", &dist);
    printf("Introduza a quantidade de combustível consumido (litros): ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Erro: Litros de combustível devem ser maiores que zero.\n");
        return 1;
    }

    consumo = dist / litros;
    printf("Consumo médio: %.2f km/l\n", consumo);

    if (consumo < 8.0f) {
        printf("Venda o carro!\n");
    } else if (consumo >= 8.0f && consumo <= 14.0f) {
        printf("Económico!\n");
    } else {
        printf("Super económico!\n");
    }

    return 0;
}