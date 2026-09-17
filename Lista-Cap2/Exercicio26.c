/******************************************************************************
Questão 26. Orçamento para Cercamento Perimetral de Terrenos — Desenvolva um programa
para cercamento de terrenos agrícolas. O programa deve ler do teclado: a) O comprimento e a
largura do terreno em metros; b) O preço unitário do metro de arame farpado (em reais). Sabendo
que o cercamento de segurança exige exatamente 3 fios de arame esticados ao longo do
perímetro do terreno, calcule e mostre na tela quantos metros de arame farpado devem ser
comprados e o custo total do cercamento.
*******************************************************************************/
#include <stdio.h>

#define FIOS_DE_ARAME 3

int main() {
    double comprimento, largura, preco_por_metro;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%lf", &largura);

    printf("Digite o preço unitário do metro de arame (R$): ");
    scanf("%lf", &preco_por_metro);

    // Cálculo do perímetro retângulo: 2 * (comprimento + largura)
    double perimetro = 2.0 * (comprimento + largura);

    // Quantidade total de arame para dar 3 voltas completas
    double total_metros = perimetro * FIOS_DE_ARAME;

    // Cálculo do custo total do orçamento
    double custo_total = total_metros * preco_por_metro;

    printf("\n--- Orçamento de Cercamento Perimetral ---\n");
    printf("Perímetro do terreno:      %.2f m\n", perimetro);
    printf("Metragem total de arame:   %.2f m (para %d fios)\n", total_metros, FIOS_DE_ARAME);
    printf("Custo total estimado:      R$ %.2f\n", custo_total);

    return 0;
}