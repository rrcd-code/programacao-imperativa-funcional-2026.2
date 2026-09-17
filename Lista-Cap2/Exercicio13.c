/******************************************************************************
Questão 13. Cálculo de Áreas de Figuras Planas Básicas — Crie um programa unificado em C
que ofereça suporte ao cálculo de três geometrias fundamentais. O usuário deve fornecer os dados
necessários e o programa exibirá: a) A área de um quadrado de lado L; b) A área de um retângulo
de base B e altura H; c) A área de um triângulo retângulo de base B e altura H. Todos os valores
de entrada e saída devem ser numéricos de ponto flutuante.
*******************************************************************************/
#include <stdio.h>

int main() {
    double lado, base, altura;

    printf("--- Entrada de Dados ---\n");
    printf("Digite o lado do quadrado (L): ");
    scanf("%lf", &lado);

    printf("Digite a base (B): ");
    scanf("%lf", &base);

    printf("Digite a altura (H): ");
    scanf("%lf", &altura);

    // Cálculos das áreas
    double area_quadrado = lado * lado;
    double area_retangulo = base * altura;
    double area_triangulo = (base * altura) / 2.0;

    // Exibição dos resultados
    printf("\n--- Resultados das Areas ---\n");
    printf("a) Area do quadrado (L = %.2f): %.2f\n", lado, area_quadrado);
    printf("b) Area do retangulo (B = %.2f, H = %.2f): %.2f\n", base, altura, area_retangulo);
    printf("c) Area do triangulo retangulo (B = %.2f, H = %.2f): %.2f\n", base, altura, area_triangulo);

    return 0;
}