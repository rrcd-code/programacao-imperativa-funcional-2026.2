/******************************************************************************
Questão 21. Jogo de Adivinhação com Letras Aleatórias e Dicas (rand()) — Desenvolva um jogo
interativo em C que sorteie uma letra minúscula aleatória entre 'a' e 'z' usando a função rand() % 26 +
'a' da biblioteca <stdlib.h>. O programa deve pedir para o usuário adivinhar a letra. A cada tentativa
errada, o programa deve informar se a letra secreta vem antes ou depois da letra digitada no alfabeto.
Quando o usuário acertar, exiba uma mensagem de parabéns e o total de tentativas.
*******************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa a semente para geração de números aleatórios
    srand(time(NULL));

    char letra_secreta = rand() % 26 + 'a';
    char palpite;
    int tentativas = 0;

    printf("=== JOGO DE ADIVINHACAO DE LETRAS ===\n");
    printf("Tente adivinhar a letra secreta (entre 'a' e 'z').\n\n");

    do {
        printf("Digite seu palpite: ");
        scanf(" %c", &palpite); // O espaço antes de %c ignora possíveis caracteres de nova linha (\n)
        tentativas++;

        if (palpite < letra_secreta) {
            printf("Dica: A letra secreta vem DEPOIS no alfabeto!\n\n");
        } else if (palpite > letra_secreta) {
            printf("Dica: A letra secreta vem ANTES no alfabeto!\n\n");
        } else {
            printf("\nParabens! Voce acertou a letra secreta ('%c')!\n", letra_secreta);
            printf("Total de tentativas: %d\n", tentativas);
        }
    } while (palpite != letra_secreta);

    return 0;
}