/******************************************************************************
Questão 18. Geometria da Esfera e Frações de Ponto Flutuante — Crie um programa em C
que leia o raio de uma esfera e calcule sua área de superfície (A = 4 * Pi * R^2) e o seu volume (V
= (4.0/3.0) * Pi * R^3). Defina Pi como 3.141593. Atenção: Garanta que o termo fracionário 4/3
do volume não sofra truncamento de divisão inteira, o que comprometeria gravemente o resultado.
*******************************************************************************/
#include <stdio.h>

#define PI 3.141593

int main() {
    double raio, area, volume;

    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);

    // Área de superfície: A = 4 * Pi * R^2
    area = 4.0 * PI * raio * raio;

    // Volume: V = (4.0 / 3.0) * Pi * R^3
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("\n--- Resultados ---\n");
    printf("Raio: %.2f\n", raio);
    printf("Área de superfície: %.4f\n", area);
    printf("Volume da esfera: %.4f\n", volume);

    return 0;
}