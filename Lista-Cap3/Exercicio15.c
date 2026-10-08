/******************************************************************************
Questão 15. Filtragem Numérica Simultânea com Operadores Lógicos — Criar um programa em C
que solicite ao usuário um número limite inteiro positivo NUM. Em seguida, o programa deve imprimir
todos os números no intervalo fechado de 1 até NUM que sejam múltiplos de 3 e de 5 ao mesmo
tempo (por exemplo: 15, 30, 45, ...). Caso nenhum número satisfaça a condição, informe o usuário.
*******************************************************************************/


#include <stdio.h>

int main() {
    int NUM;
    int encontrou = 0;

    printf("Digite um numero limite inteiro positivo NUM: ");
    scanf("%d", &NUM);

    if (NUM <= 0) {
        printf("Erro: O numero fornecido deve ser positivo.\n");
        return 1;
    }

    printf("Multiplos de 3 e 5 no intervalo de 1 a %d:\n", NUM);
    for (int i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero satisfaz a condicao no intervalo informado.");
    }

    printf("\n");
    return 0;
}