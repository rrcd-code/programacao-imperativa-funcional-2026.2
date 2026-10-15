/******************************************************************************
Questão 13. Cálculo do Fatorial com Tratamento do Zero e Tipo `long long int` — Escreva um
programa em C que solicite um número inteiro N e calcule o seu fatorial (N!). Lembre-se que 0! = 1 e 1!
= 1. O programa deve utilizar a variável do resultado como `long long int` com o especificador `%lld`
para evitar estouro de memória e tratar entradas inválidas (números negativos).
*******************************************************************************/

R = 
#include <stdio.h>

int main() {
    int N, i;
    long long int fatorial = 1; // Suporta valores grandes para evitar estouro rápido de memória

    // Leitura do número
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &N);

    // Tratamento de entradas inválidas (números negativos)
    if (N < 0) {
        printf("Erro: Não é possível calcular o fatorial de um número negativo.\n");
    } else {
        // Para N = 0 ou N = 1, o laço não executa (ou roda 1 vez), mantendo fatorial = 1
        for (i = 1; i <= N; i++) {
            fatorial *= i;
        }

        // Exibição do resultado com o especificador %lld
        printf("%d! = %lld\n", N, fatorial);
    }

    return 0;
}