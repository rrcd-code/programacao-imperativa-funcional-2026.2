/******************************************************************************
Desenvolva um programa em C que leia três valores numéricos inteiros fornecidos pelo
usuário através do teclado, calcule a média aritmética simples desses valores como um número real de
dupla precisão (double) e exiba o resultado final na tela formatado com exatamente duas casas
decimais.

*******************************************************************************/

#include <stdio.h>

int main(void) {
    int v1, v2, v3;
    double media;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    media = (v1 + v2 + v3) / 3.0;

    printf("A média aritmética é: %.2f\n", media);

    return 0;
}