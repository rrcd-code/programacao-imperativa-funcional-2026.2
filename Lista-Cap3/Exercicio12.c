/******************************************************************************
Questão 12. Tabela de Conversão de Temperaturas (Celsius, Fahrenheit e Kelvin) — Crie um
programa que imprima uma tabela de conversão de temperaturas de 0°C a 100°C, com variação de 5
em 5 graus Celsius. Para cada valor em Celsius, o programa deve calcular e exibir os valores
equivalentes em Fahrenheit (F = (9*C)/5 + 32) e Kelvin (K = C + 273.15), utilizando formatação
alinhada com duas casas decimais.
*******************************************************************************/


#include <stdio.h>

int main() {
    printf("%-10s %-12s %-10s\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("------------------------------------\n");

    for (int c = 0; c <= 100; c += 5) {
        double f = (9.0 * c) / 5.0 + 32.0;
        double k = c + 273.15;

        printf("%-10.2f %-12.2f %-10.2f\n", (double)c, f, k);
    }

    return 0;
}