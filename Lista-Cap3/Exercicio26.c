/******************************************************************************
Questão 26. Mapeamento e Soma de Primos em um Intervalo Fechado [A, B] — Desenvolva um
programa que solicite ao usuário dois números inteiros positivos A e B (garantindo A < B). O programa
deve encontrar e listar todos os números primos situados no intervalo fechado [A, B], e ao final exibir a
soma total de todos os primos encontrados nesse intervalo.
*******************************************************************************/


#include <stdio.h>

int main() {
    int A, B;

    printf("Digite o valor de A (inteiro positivo): ");
    scanf("%d", &A);
    printf("Digite o valor de B (inteiro positivo e maior que A): ");
    scanf("%d", &B);

    if (A <= 0 || B <= 0 || A >= B) {
        printf("Erro: Os numeros devem ser positivos e A deve ser estritamente menor que B.\n");
        return 1;
    }

    long long int soma_primos = 0;
    int quantidade_primos = 0;

    printf("\nNumeros primos no intervalo [%d, %d]:\n", A, B);

    for (int num = A; num <= B; num++) {
        if (num < 2) {
            continue;
        }

        int eh_primo = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo) {
            printf("%d ", num);
            soma_primos += num;
            quantidade_primos++;
        }
    }

    if (quantidade_primos == 0) {
        printf("Nenhum numero primo encontrado no intervalo.");
    }

    printf("\n\nSoma total dos numeros primos no intervalo: %lld\n", soma_primos);

    return 0;
}