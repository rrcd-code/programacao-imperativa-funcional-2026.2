/******************************************************************************
Questão 28. Cálculo de Salário Anual com Imposto Progressivo — Uma empresa metalúrgica
remunera seus operários à taxa de R$ 10,00 por hora normal trabalhada e R$ 15,00 por hora
extra (adicional de 50%). Desenvolva um programa completo em C que receba do usuário o
número total de horas normais e de horas extras trabalhadas por um empregado no acumulado de
um ano. O programa deve calcular e exibir: a) O salário anual bruto obtido; b) O imposto
progressivo a ser pago sabendo que o trabalhador é isento de imposto para salários até R$
12.000,00 anuais, mas paga 10% de imposto retido sobre o valor que exceder essa faixa de

Cesar School | Programação Imperativa e Funcional | Página 6

isenção. Dica: utilize expressões aritméticas lineares e o operador condicional (? :) para simular a
tomada de decisão de imposto sem recorrer a laços ou desvios complexos neste capítulo.
*******************************************************************************/
#include <stdio.h>

#define TAXA_HORA_NORMAL 10.00
#define TAXA_HORA_EXTRA  15.00
#define LIMITE_ISENCAO   12000.00
#define ALIQUOTA_IMPOSTO 0.10

int main() {
    double horas_normais, horas_extras;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%lf", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%lf", &horas_extras);

    // a) Cálculo do salário bruto anual
    double salario_bruto = (horas_normais * TAXA_HORA_NORMAL) + (horas_extras * TAXA_HORA_EXTRA);

    // Identificação do valor excedente à faixa de isenção via operador ternário
    double valor_excedente = (salario_bruto > LIMITE_ISENCAO) ? (salario_bruto - LIMITE_ISENCAO) : 0.0;

    // b) Cálculo do imposto progressivo (10% sobre o excedente)
    double imposto = valor_excedente * ALIQUOTA_IMPOSTO;
    double salario_liquido = salario_bruto - imposto;

    printf("\n--- Demonstrativo Anual Salarial ---\n");
    printf("a) Salário Anual Bruto: R$ %.2f\n", salario_bruto);
    printf("b) Imposto Retido (10%%): R$ %.2f\n", imposto);
    printf("------------------------------------\n");
    printf("   Salário Anual Líquido: R$ %.2f\n", salario_liquido);

    return 0;
}