/******************************************************************************
Questão 22. Conversão de Caixa Alta para Baixa via Tabela ASCII — Escreva um programa que
solicite e leia uma letra maiúscula do usuário. O programa deve convertê-la em uma letra
minúscula utilizando operações aritméticas de deslocamento na tabela ASCII (offset de 32 posições
ou através da subtração do caractere 'A' e adição de 'a'). Não utilize funções prontas de bibliotecas
como <ctype.h>.
*******************************************************************************/
#include <stdio.h>

int main() {
    char letra_maiuscula, letra_minuscula;

    printf("Digite uma letra maiúscula: ");
    // O espaço antes de %c descarta caracteres de espaço/nova linha pendentes
    scanf(" %c", &letra_maiuscula);

    // Converte adicionando o deslocamento relativo entre 'a' e 'A' (equivalente a somar 32 na ASCII)
    letra_minuscula = letra_maiuscula + ('a' - 'A');

    printf("\n--- Resultado ---\n");
    printf("Letra maiúscula digitada: '%c' (ASCII: %d)\n", letra_maiuscula, letra_maiuscula);
    printf("Letra minúscula convertida: '%c' (ASCII: %d)\n", letra_minuscula, letra_minuscula);

    return 0;
}