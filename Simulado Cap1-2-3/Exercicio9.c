/******************************************************************************
Questão 9. Geometria do Triângulo e Fórmula de Heron — Escreva um programa em C que leia os
comprimentos dos três lados (a, b, c) de um triângulo qualquer. Sabendo que o semiperímetro p é dado
por (a + b + c) / 2.0, calcule a área do triângulo utilizando a **Fórmula de Heron**: Area = sqrt(p * (p -
a) * (p - b) * (p - c)). Utilize a função sqrt() da biblioteca `<math.h>`.
*******************************************************************************/

R = 
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    // Leitura dos três lados do triângulo
    printf("Digite o comprimento dos três lados (a, b e c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Cálculo do semiperímetro
    p = (a + b + c) / 2.0;

    // Cálculo da área usando a Fórmula de Heron
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    // Exibição dos resultados
    printf("\n--- Resultados ---\n");
    printf("Semiperímetro (p): %.2f\n", p);
    printf("Área do triângulo:  %.2f\n", area);

    return 0;
}