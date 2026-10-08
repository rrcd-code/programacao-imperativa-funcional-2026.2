/******************************************************************************
Questão 28. Sistema de Folha de Pagamento com Menu Contínuo (do-while & switch) —
Desenvolva um programa completo para gerenciamento de folha de pagamento de uma empresa. O
programa deve exibir um menu de opções em um laço do-while contínuo:
1. Reajuste Salarial (Calcula e exibe novo salário: 15% de aumento para salários até R$ 2.000,00 e
10% para salários superiores).
2. Retenção de Imposto de Renda (Calcula desconto: 8% para salários até R$ 3.000,00 e 15% para
salários superiores).
3. Encerrar Programa.
O programa deve validar as opções do menu e só finalizar a execução quando a opção 3 for
expressamente selecionada.
*******************************************************************************/


#include <stdio.h>

int main() {
    int opcao;
    double salario, novo_salario, imposto, salario_liquido;

    do {
        printf("\n=== SISTEMA DE FOLHA DE PAGAMENTO ===\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- REAJUSTE SALARIAL ---\n");
                printf("Digite o salario atual (R$): ");
                scanf("%lf", &salario);

                if (salario < 0) {
                    printf("Erro: O salario nao pode ser negativo.\n");
                } else {
                    if (salario <= 2000.00) {
                        novo_salario = salario * 1.15;
                        printf("Percentual aplicado: 15%%\n");
                    } else {
                        novo_salario = salario * 1.10;
                        printf("Percentual aplicado: 10%%\n");
                    }
                    printf("Novo salario reajustado: R$ %.2f\n", novo_salario);
                }
                break;

            case 2:
                printf("\n--- RETENCAO DE IMPOSTO DE RENDA ---\n");
                printf("Digite o salario atual (R$): ");
                scanf("%lf", &salario);

                if (salario < 0) {
                    printf("Erro: O salario nao pode ser negativo.\n");
                } else {
                    if (salario <= 3000.00) {
                        imposto = salario * 0.08;
                        printf("Aliquota aplicada: 8%%\n");
                    } else {
                        imposto = salario * 0.15;
                        printf("Aliquota aplicada: 15%%\n");
                    }
                    salario_liquido = salario - imposto;
                    printf("Valor retido (IR): R$ %.2f\n", imposto);
                    printf("Salario liquido: R$ %.2f\n", salario_liquido);
                }
                break;

            case 3:
                printf("\nEncerrando o programa... Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida! Por favor, escolha entre 1, 2 ou 3.\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}