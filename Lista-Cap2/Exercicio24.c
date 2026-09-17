/******************************************************************************
Questão 24. Conversor de Velocidade de km/h para m/s — Escreva um programa em C que
leia do teclado uma velocidade expressa em quilômetros por hora (km/h) e exiba o seu valor
convertido e formatado para metros por segundo (m/s). Use a constante física de conversão: m/s =
km/h / 3.6.
*******************************************************************************/
#include <stdio.h>

#define FATOR_CONVERSAO 3.6

int main() {
    double kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &kmh);

    // Conversão de km/h para m/s dividindo pelo fator físico 3.6
    ms = kmh / FATOR_CONVERSAO;

    printf("\n--- Resultado da Conversão ---\n");
    printf("Velocidade: %.2f km/h\n", kmh);
    printf("Velocidade: %.2f m/s\n", ms);

    return 0;
}