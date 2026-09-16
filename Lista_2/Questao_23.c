#include <stdio.h>

int main() {
    int h_ini, m_ini, s_ini, duracao_seg;
    
    printf("Digite o horario de inicio (hh mm ss): ");
    scanf("%d %d %d", &h_ini, &m_ini, &s_ini);
    
    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao_seg);
    
    // Converte horario inicial para total de segundos no dia
    long total_segundos = h_ini * 3600 + m_ini * 60 + s_ini + duracao_seg;
    
    // Trata o estouro de 24 horas (86400 segundos em um dia)
    total_segundos %= 86400;
    
    int h_fim = total_segundos / 3600;
    int m_fim = (total_segundos % 3600) / 60;
    int s_fim = total_segundos % 60;
    
    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
    return 0;
}