/******************************************************************************
Questão 25. Salário Líquido com Gratificação e Tributação — Faça um programa em C que leia
o salário-base de um funcionário. O programa deve calcular e exibir o salário líquido a receber
sabendo que esse funcionário tem uma gratificação fixa de 5% sobre o seu salário-base (adicional),
mas paga um imposto retido de 7% também calculado sobre o seu salário-base. Justifique a
fórmula matemática do cálculo através dos operadores aritméticos.
*******************************************************************************/
#include <stdio.h>

#define PERCENTUAL_GRATIFICACAO 0.05
#define PERCENTUAL_IMPOSTO 0.07

int main() {
    double salario_base;

    printf("Digite o salário-base do funcionário: R$ ");
    scanf("%lf", &salario_base);

    // Cálculos intermediários das parcelas
    double gratificacao = salario_base * PERCENTUAL_GRATIFICACAO;
    double imposto = salario_base * PERCENTUAL_IMPOSTO;

    // Cálculo final do salário líquido
    double salario_liquido = salario_base + gratificacao - imposto;

    printf("\n--- Demonstrativo Salarial ---\n");
    printf("Salário-Base:       R$ %.2f\n", salario_base);
    printf("Gratificação (+5%%): R$ %.2f\n", gratificacao);
    printf("Imposto Retido (-7%%): R$ %.2f\n", imposto);
    printf("----------------------------------\n");
    printf("Salário Líquido:    R$ %.2f\n", salario_liquido);

    return 0;
}