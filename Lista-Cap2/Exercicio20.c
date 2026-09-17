/******************************************************************************
Questão 20. Teorema de Pitágoras e a Hipotenusa — Escreva um programa em C que peça
para o usuário inserir os valores correspondentes aos dois catetos (lado_a e lado_b) de um
triângulo retângulo. O programa deve calcular e exibir na tela o comprimento de sua hipotenusa.
Dica: utilize o teorema de Pitágoras (hipotenusa = raiz quadrada da soma dos quadrados dos
catetos), importando as funções pow() ou sqrt() de <math.h>.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    double lado_a, lado_b, hipotenusa;

    printf("Digite o valor do primeiro cateto (lado_a): ");
    scanf("%lf", &lado_a);

    printf("Digite o valor do segundo cateto (lado_b): ");
    scanf("%lf", &lado_b);

    // Teorema de Pitágoras: h = sqrt(a^2 + b^2)
    hipotenusa = sqrt((lado_a * lado_a) + (lado_b * lado_b));

    printf("\n--- Resultado ---\n");
    printf("Cateto A:   %.2f\n", lado_a);
    printf("Cateto B:   %.2f\n", lado_b);
    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}