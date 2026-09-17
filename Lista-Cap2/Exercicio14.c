/******************************************************************************
Questão 14. Fórmula de Heron para Triângulos Quaisquer — Escreva um programa em C que
calcule a área de um triângulo qualquer a partir do tamanho de seus três lados (a, b e c)
informados pelo usuário. Utilize a Fórmula de Heron: Area = sqrt(p * (p - a) * (p - b) * (p - c)), onde
p é o semi-perímetro dado por (a + b + c) / 2.0. Nota: para esta questão, inclua a biblioteca
matemática <math.h> e lembre-se de vincular a biblioteca na compilação do GCC (-lm).
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Digite os três lados do triângulo (a, b e c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Cálculo do semiperímetro
    double p = (a + b + c) / 2.0;

    // Cálculo da área utilizando a Fórmula de Heron
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\n--- Resultados ---\n");
    printf("Semiperímetro (p): %.2f\n", p);
    printf("Área do triângulo: %.2f\n", area);

    return 0;
}