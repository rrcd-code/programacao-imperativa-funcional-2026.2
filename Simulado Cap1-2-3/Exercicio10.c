/******************************************************************************
Questão 10. Resto da Divisão (`%`) e Decomposição do Tempo — Desenvolva um programa em C
que receba uma quantidade inteira de segundos informada pelo usuário. O programa deve calcular e
exibir o tempo equivalente decomposto em Horas, Minutos e Segundos restantes (Exemplo: 3665
segundos correspondem a 1 hora, 1 minuto e 5 segundos).
*******************************************************************************/

R = 
#include <stdio.h>

int main() {
    int total_segundos, horas, minutos, segundos;

    // Leitura do total de segundos
    printf("Digite o tempo em segundos: ");
    scanf("%d", &total_segundos);

    // Cálculos de decomposição
    horas = total_segundos / 3600;              // 1 hora tem 3600 segundos
    minutos = (total_segundos % 3600) / 60;     // Resto das horas dividido por 60
    segundos = total_segundos % 60;             // Resto dos minutos

    // Exibição do resultado
    printf("\n%d segundos correspondem a: %d hora(s), %d minuto(s) e %d segundo(s).\n", 
            total_segundos, horas, minutos, segundos);

    return 0;
}