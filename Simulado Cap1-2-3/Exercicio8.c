/******************************************************************************
Questão 8. Cálculos Geométricos e Constantes com `<math.h>` — Desenvolva um programa em C
que solicite ao usuário o valor do raio R de uma esfera. Defina a constante PI como 3.14159265 e
calcule: a) A área da superfície da esfera (A = 4 * PI * R2); b) O volume da esfera (V = (4.0/3.0) * PI *
R3). Utilize a função pow() da biblioteca `<math.h>` e exiba os resultados formatados com 3 casas
decimais. Atenção para a divisão real de 4.0 por 3.0!
*******************************************************************************/

R = 
#include <stdio.h>
#include <math.h>

// Definição da constante PI conforme solicitado
#define PI 3.14159265

int main() {
    double R, area, volume;

    // Leitura do raio
    printf("Digite o valor do raio (R) da esfera: ");
    scanf("%lf", &R);

    // a) Cálculo da área da superfície: A = 4 * PI * R^2
    area = 4.0 * PI * pow(R, 2);

    // b) Cálculo do volume da esfera: V = (4.0 / 3.0) * PI * R^3
    // Observação: Uso de 4.0/3.0 para garantir a divisão entre números em ponto flutuante (real)
    volume = (4.0 / 3.0) * PI * pow(R, 3);

    // Exibição dos resultados formatados com 3 casas decimais
    printf("\n--- Resultados ---\n");
    printf("Area da superficie: %.3f\n", area);
    printf("Volume da esfera:   %.3f\n", volume);

    return 0;
}