/******************************************************************************
Questão 27. Simulador de Caixa Eletrônico (Decomposição de Cédulas) — Escreva um programa
que simule o saque de um caixa eletrônico. O usuário informa o valor do saque em reais (número
inteiro positivo). O programa deve calcular e exibir a menor quantidade de cédulas de R$ 100, R$ 50,
R$ 20, R$ 10, R$ 5 e R$ 2 necessárias para compor o valor. Utilize laços de repetição para efetuar as
subtrações sucessivas.
*******************************************************************************/


#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor do saque em reais (R$): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Erro: O valor do saque deve ser um inteiro positivo.\n");
        return 1;
    }

    int valor_restante = valor;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int total_cedulas = sizeof(cedulas) / sizeof(cedulas[0]);

    printf("\nDecomposicao do saque de R$ %d:\n", valor);

    for (int i = 0; i < total_cedulas; i++) {
        int quantidade = 0;

        // Subtrações sucessivas conforme solicitado
        while (valor_restante >= cedulas[i]) {
            valor_restante -= cedulas[i];
            quantidade++;
        }

        if (quantidade > 0) {
            printf("Cedulas de R$ %d: %d\n", cedulas[i], quantidade);
        }
    }

    if (valor_restante > 0) {
        printf("\nAtencao: R$ %d nao pode ser sacado com as cedulas disponiveis.\n", valor_restante);
    }

    return 0;
}