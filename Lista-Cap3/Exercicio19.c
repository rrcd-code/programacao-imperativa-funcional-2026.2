/******************************************************************************
Questão 19. Cálculo do N-ésimo Termo da Sequência de Fibonacci — A sequência de Fibonacci é
dada por: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... onde cada termo a partir do terceiro é a soma dos dois
anteriores. Escreva um programa que solicite ao usuário o número do termo desejado (N) e calcule e
imprima o valor correspondente desse termo, além de listar todos os termos até N.
*******************************************************************************/


#include <stdio.h>

int main() {
    int N;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Erro: N deve ser um numero inteiro positivo.\n");
        return 1;
    }

    long long int t1 = 1, t2 = 1, proximo;

    printf("Sequencia ate o %d-esimo termo: ", N);

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%lld", t1);
        } else if (i == 2) {
            printf(", %lld", t2);
        } else {
            proximo = t1 + t2;
            printf(", %lld", proximo);
            t1 = t2;
            t2 = proximo;
        }
    }

    printf("\n\nO %d-esimo termo da sequencia de Fibonacci e: %lld\n", N, (N == 1) ? 1 : t2);

    return 0;
}