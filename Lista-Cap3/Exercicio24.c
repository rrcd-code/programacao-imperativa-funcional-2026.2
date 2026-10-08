/******************************************************************************
Questão 24. Padrão Visual em X (Diagonais Cruzadas) — Crie um programa em C que solicite uma
dimensão ímpar N (entre 3 e 19). O programa deve utilizar laços aninhados e condicionais lógicas para
desenhar um padrão visual de duas diagonais que se cruzam no centro forming um 'X' com o caractere
'*'. Por exemplo, para N = 5:
* *
* *
*
* *
* *
*******************************************************************************/


#include <stdio.h>

int main() {
    int N;

    printf("Digite uma dimensao impar N (entre 3 e 19): ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Erro: A dimensao deve ser um numero impar entre 3 e 19.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Imprime '*' na diagonal principal (i == j) ou na diagonal secundaria (i + j == N - 1)
            if (i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}