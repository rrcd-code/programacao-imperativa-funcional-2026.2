/******************************************************************************
Questão 15. Geração de Padrões Visuais com Laços Aninhados: Triângulo de Floyd — Escreva um
programa em C que leia um número inteiro positivo N e imprima N linhas do **Triângulo de Floyd**
utilizando laços aninhados. Por exemplo, para N = 5, a saída no console deve ser exatamente:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*******************************************************************************/

R = 
#include <stdio.h>

int main() {
    int N, i, j;
    int num = 1; // Contador sequencial que será impresso

    // Leitura do número de linhas
    printf("Digite o número de linhas (N): ");
    scanf("%d", &N);

    // Validação de entrada
    if (N <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    // Laço externo para controlar o número de linhas (1 até N)
    for (i = 1; i <= N; i++) {
        // Laço interno para imprimir a quantidade de números da linha atual (i elementos)
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++; // Incrementa o número a cada valor impresso
        }
        printf("\n"); // Quebra de linha após finalizar a linha atual
    }

    return 0;
}