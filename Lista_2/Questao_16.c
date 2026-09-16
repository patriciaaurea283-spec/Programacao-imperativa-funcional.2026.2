#include <stdio.h>
#include <math.h>

int main() {
    float h_degrau_cm, h_total_m;
    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &h_degrau_cm);
    printf("Digite a altura total desejada (em metros): ");
    scanf("%f", &h_total_m);
    
    float h_total_cm = h_total_m * 100.0f;
    int degraus = (int)ceil(h_total_cm / h_degrau_cm);
    
    printf("Numero minimo de degraus: %d\n", degraus);
    return 0;
}