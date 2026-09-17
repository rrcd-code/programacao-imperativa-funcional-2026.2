/******************************************************************************
Questão 08. Potências e Divisão com Ponto Flutuante — Desenvolva um programa em C 
que leia do teclado um número inteiro fornecido pelo usuário. O programa deve 
calcular e exibir: 
a) O seu quadrado (valor inteiro); b) A sua décima parte (valor real, com precisão 
de duas casas decimais). 
Garanta que o cálculo da décima parte não sofra de truncamento de divisão inteira.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    int quadrado = numero * numero;

    
    float decima_parte = numero / 10.0f;

    printf("a) Quadrado: %d\n", quadrado);
    printf("b) Decima parte: %.2f\n", decima_parte);

    return 0;
}