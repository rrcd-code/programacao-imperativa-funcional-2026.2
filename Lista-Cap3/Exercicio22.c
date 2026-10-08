/******************************************************************************
Questão 22. Geração do Triângulo de Floyd com Laços Aninhados — Escreva um programa em C
que leia um número inteiro positivo N e imprima N linhas do Triângulo de Floyd. Por exemplo, se N =
5, a saída na tela deve ser exatamente:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*******************************************************************************/


#include <stdio.h>

int main() {
    int N;
    int contador = 1;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Erro: O numero de linhas deve ser positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++;
        }
        printf("\n");
    }

    return 0;
}