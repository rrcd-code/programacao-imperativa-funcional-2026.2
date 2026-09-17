/******************************************************************************
Questão 21. Leitura de Caractere e Exibição de seu Código ASCII — A tabela ASCII associa
cada caractere a um valor inteiro único de 1 byte. Desenvolva um programa em C que leia um
caractere do teclado informado pelo usuário e exiba na tela esse mesmo caractere formatado como
um número inteiro. Escreva uma breve explicação em comentários no seu código sobre o que esse
número representa.
*******************************************************************************/
#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    // O espaço antes do %c consome eventuais espaços ou 'ENTER' pendentes no buffer de entrada
    scanf(" %c", &caractere);

    printf("\n--- Resultado ---\n");
    printf("Caractere digitado: '%c'\n", caractere);
    printf("Código ASCII (decimal): %d\n", caractere);

    return 0;
}