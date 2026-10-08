/******************************************************************************
Questão 07. Contagem Progressiva em Três Versões (for, while, do-while) — Desenvolva três
programas independentes (ou três funções no mesmo arquivo) que mostrem na tela os números
inteiros de 0 a 100 em ordem crescente. A primeira versão deve utilizar obrigatoriamente o laço for, a
segunda versão a estrutura while, e a terceira versão a estrutura do-while. Em comentário ao final do
código, responda: qual das três estruturas é a mais adequada para este caso e por quê?
*******************************************************************************/


#include <stdio.h>

// Versão 1: Estrutura for
void versao_for() {
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
}

// Versão 2: Estrutura while
void versao_while() {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

// Versão 3: Estrutura do-while
void versao_dowhile() {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main() {
    versao_for();
    versao_while();
    versao_dowhile();
    return 0;
}

