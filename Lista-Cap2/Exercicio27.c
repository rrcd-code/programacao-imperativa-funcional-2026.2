/******************************************************************************
Questão 27. Geração de Valores Aleatórios via Resto de Divisão — Escreva um programa em
C que gere e exiba no console três números aleatórios inteiros dentro do intervalo estrito de 1 a 6
(simulando o lançamento de três dados independentes). Utilize as funções rand() e srand() da
biblioteca <stdlib.h>, aliadas ao uso do operador de resto da divisão (%) estudado no Capítulo 2.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa a semente do gerador com o tempo atual do sistema
    srand((unsigned int) time(NULL));

    // Mapeia os valores de [0, 5] para a faixa de [1, 6]
    int dado1 = (rand() % 6) + 1;
    int dado2 = (rand() % 6) + 1;
    int dado3 = (rand() % 6) + 1;

    printf("--- Simulação de Lançamento de 3 Dados ---\n");
    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);

    return 0;
}