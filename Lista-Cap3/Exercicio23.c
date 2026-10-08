/******************************************************************************
Questão 23. Desenho de Moldura e Quadrado Vazado com Caracteres — Desenvolva um
programa que solicite ao usuário a dimensão do lado de um quadrado L (com L entre 3 e 20). O
programa deve utilizar laços aninhados para desenhar no console um quadrado vazado composto pelo
caractere 'X'. Por exemplo, para L = 5, a saída deve ser:
XXXXX
X X
X X
X X
XXXXX
*******************************************************************************/


#include <stdio.h>

int main() {
    int L;

    printf("Digite o tamanho do lado do quadrado L (entre 3 e 20): ");
    scanf("%d", &L);

    if (L < 3 || L > 20) {
        printf("Erro: O tamanho do lado deve estar entre 3 e 20.\n");
        return 1;
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++) {

            if (i == 0 || i == L - 1 || j == 0 || j == L - 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}