/******************************************************************************
Elabore um programa em C que utilize caracteres para desenhar um 'pinheiro de Natal'
estilizado no console. Enriqueça o desenho adicionando outros caracteres (como *, o, +) simulando
enfeites espalhados pela árvore:

X
X*X
X+XoX
X*X+X*X
XXXXXXXXX
XX
XX
XXXX
*******************************************************************************/

#include <stdio.h>

int main(void) {
    printf("    X\n");
    printf("   X*X\n");
    printf("  X+XoX\n");
    printf(" X*X+X*X\n");
    printf("XXXXXXXXX\n");
    printf("   XX\n");
    printf("   XX\n");
    printf("  XXXX\n");

    return 0;
}