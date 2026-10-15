/******************************************************************************
Questão 11. Cálculo Salarial com Gratificação e Impostos — Uma empresa contrata um técnico a R$
45,00 por dia trabalhado. Crie um programa em C que solicite o número de dias trabalhados, calcule o
salário bruto, adicione uma gratificação de 5% sobre o bruto e desconte 8% de imposto de renda
sobre o bruto. Ao final, exiba o holerite detalhado com o valor líquido a receber.
*******************************************************************************/

R = 
#include <stdio.h>

int main() {
    int dias;
    double salario_bruto, gratificacao, imposto, salario_liquido;
    const double VALOR_DIA = 45.00;

    // Leitura dos dias trabalhados
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    // Cálculos
    salario_bruto = dias * VALOR_DIA;
    gratificacao = salario_bruto * 0.05; // 5% de gratificação sobre o bruto
    imposto = salario_bruto * 0.08;      // 8% de imposto de renda sobre o bruto
    salario_liquido = salario_bruto + gratificacao - imposto;

    // Exibição do holerite detalhado
    printf("\n========== HOLERITE DETALHADO ==========\n");
    printf("Dias trabalhados:     %d dia(s)\n", dias);
    printf("Salário Bruto:        R$ %8.2f\n", salario_bruto);
    printf("(+) Gratificação (5%%): R$ %8.2f\n", gratificacao);
    printf("(-) Imposto de Renda (8%%): R$ %8.2f\n", imposto);
    printf("----------------------------------------\n");
    printf("Salário Líquido:      R$ %8.2f\n", salario_liquido);
    printf("========================================\n");

    return 0;
}