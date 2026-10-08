/******************************************************************************
Questão 25. Análise e Teste de Primalidade de um Número Inteiro — Escreva um programa em C
que receba um número inteiro positivo N e determine se N é um número primo. Um número é primo se
for maior que 1 e divisível apenas por 1 e por ele mesmo. O programa deve contar a quantidade de
divisores encontrados no laço e exibir uma mensagem conclusiva.
*******************************************************************************/


#include <stdio.h>

int main() {
    int N;
    int divisores = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Erro: O numero deve ser um inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }

    printf("O numero %d possui %d divisor(es).\n", N, divisores);

    if (divisores == 2) {
        printf("Conclusao: %d E um numero PRIMO.\n", N);
    } else {
        printf("Conclusao: %d NAO e um numero primo.\n", N);
    }

    return 0;
}