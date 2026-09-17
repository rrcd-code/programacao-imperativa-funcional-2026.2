/******************************************************************************
Questão 12. Operadores Unários de Antecessor e Sucessor — Elabore um programa em C que
receba um número inteiro do usuário e, utilizando exclusivamente os operadores unários de
incremento (++) e decremento (--), exiba o seu antecessor e o seu sucessor no console,
justificando sua implementação lógica.
*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Variaveis auxiliares para preservar o valor original de 'numero'
    int antecessor = numero;
    int sucessor = numero;

    // Aplicacao exclusiva dos operadores unarios de decremento e incremento
    antecessor--;
    sucessor++;

    printf("Numero: %d\n", numero);
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}