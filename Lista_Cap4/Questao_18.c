#include <stdio.h>

int main() {
    int opcao;
    double temp_in, temp_out;

    printf("Conversor de Temperatura:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Introduza a temperatura em Celsius: ");
            scanf("%lf", &temp_in);
            temp_out = temp_in * 1.8 + 32;
            printf("Resultado: %.2lf °F\n", temp_out);
            break;
        case 2:
            printf("Introduza a temperatura em Celsius: ");
            scanf("%lf", &temp_in);
            temp_out = temp_in + 273.15;
            printf("Resultado: %.2lf K\n", temp_out);
            break;
        case 3:
            printf("Introduza a temperatura em Fahrenheit: ");
            scanf("%lf", &temp_in);
            temp_out = (temp_in - 32) / 1.8;
            printf("Resultado: %.2lf °C\n", temp_out);
            break;
        case 4:
            printf("Introduza a temperatura em Kelvin: ");
            scanf("%lf", &temp_in);
            temp_out = temp_in - 273.15;
            printf("Resultado: %.2lf °C\n", temp_out);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}