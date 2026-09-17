/******************************************************************************
Questão 23. Cálculo de Horário de Término de Experimento Biológico — Desenvolva um
programa em C que auxilie na medição do tempo de experimentos científicos de laboratório. O
programa deve receber do usuário: a) O horário de início do experimento no formato Horas,
Minutos e Segundos de forma independente; b) A duração total da experiência expressa
estritamente em segundos. O programa deve calcular e exibir na tela o horário exato de término
do experimento no formato hh:mm:ss. Utilize os operadores de divisão (/) e resto da divisão (%)
para obter os novos valores de tempo de forma estruturada.
*******************************************************************************/
#include <stdio.h>

int main() {
    int h_inicio, m_inicio, s_inicio;
    int duracao_segundos;

    printf("Digite o horário de início (Horas Minutos Segundos): ");
    scanf("%d %d %d", &h_inicio, &m_inicio, &s_inicio);

    printf("Digite a duração total do experimento (em segundos): ");
    scanf("%d", &duracao_segundos);

    // Converte o tempo inicial para o total acumulado em segundos no dia
    int inicio_em_segundos = (h_inicio * 3600) + (m_inicio * 60) + s_inicio;
    int total_segundos = inicio_em_segundos + duracao_segundos;

    // Converte os segundos totais de volta para Horas, Minutos e Segundos
    int h_fim = (total_segundos / 3600) % 24; // % 24 reinicia o ciclo de 24 horas (meia-noite)
    int m_fim = (total_segundos % 3600) / 60;
    int s_fim = total_segundos % 60;

    printf("\n--- Horário do Experimento ---\n");
    printf("Horário de Início: %02d:%02d:%02d\n", h_inicio, m_inicio, s_inicio);
    printf("Duração:           %d segundos\n", duracao_segundos);
    printf("Horário de Término: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

    return 0;
}