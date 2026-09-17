/******************************************************************************
Questão 16. Quantidade de Degraus em uma Escada de Obra — Um trabalhador da construção
civil deseja subir uma escada de degraus idênticos. Escreva um programa em C que receba do
usuário a altura de cada degrau (em centímetros) e a altura total que o usuário deseja alcançar
subindo a escada (em metros). O programa deve calcular e exibir o número mínimo de degraus
que ele deve subir. Certifique-se de realizar a compatibilidade de unidades de medida (metros vs.
centímetros).
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    double altura_degrau_cm, altura_total_m;

    printf("Digite a altura de cada degrau (em centímetros): ");
    scanf("%lf", &altura_degrau_cm);

    printf("Digite a altura total a ser alcançada (em metros): ");
    scanf("%lf", &altura_total_m);

    // Conversão de metros para centímetros (1m = 100cm)
    double altura_total_cm = altura_total_m * 100.0;

    // A função ceil() arredonda o resultado para cima, garantindo que qualquer
    // fração de degrau necessária seja contada como um degrau inteiro a mais.
    int quantidade_degraus = (int) ceil(altura_total_cm / altura_degrau_cm);

    printf("\nNúmero mínimo de degraus necessários: %d\n", quantidade_degraus);

    return 0;
}