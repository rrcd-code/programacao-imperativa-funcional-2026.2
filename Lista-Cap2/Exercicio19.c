/******************************************************************************
Questão 19. Cálculo de Salário Líquido com Desconto na Fonte — Uma empresa de prestação
de serviços contrata um encanador à taxa fixa de R$ 30,00 por dia útil trabalhado. Elabore um
programa que solicite ao usuário o número de dias efetivamente trabalhados pelo profissional.
Calcule e imprima a quantia bruta devida e o valor líquido final a ser pago, sabendo que são
descontados estritamente 8% de imposto de renda retido na fonte sobre o total bruto.
*******************************************************************************/
#include <stdio.h>

#define TAXA_DIARIA 30.00
#define ALIQUOTA_IR 0.08

int main() {
    int dias_trabalhados;

    printf("Digite o número de dias trabalhados pelo encanador: ");
    scanf("%d", &dias_trabalhados);

    // Cálculos do valor bruto, imposto retido e valor líquido final
    double valor_bruto = dias_trabalhados * TAXA_DIARIA;
    double imposto_retido = valor_bruto * ALIQUOTA_IR;
    double valor_liquido = valor_bruto - imposto_retido;

    printf("\n--- Demonstrativo de Pagamento ---\n");
    printf("Dias trabalhados:  %d\n", dias_trabalhados);
    printf("Valor Bruto:       R$ %.2f\n", valor_bruto);
    printf("Imposto de Renda: -R$ %.2f (8%%)\n", imposto_retido);
    printf("----------------------------------\n");
    printf("Valor Líquido:     R$ %.2f\n", valor_liquido);

    return 0;
}