/******************************************************************************
Questão 20. Tabela de Caracteres ASCII e Códigos Hexadecimais — Escreva um programa que
utilize um laço for para imprimir a tabela de caracteres da tabela ASCII para os códigos decimais
compreendidos entre 32 e 126 (caracteres imprimíveis). Para cada código, imprima o valor em decimal,
o valor equivalente em hexadecimal (usando o formatador %X) e o próprio caractere visível.
*******************************************************************************/


#include <stdio.h>

int main() {
    printf("%-10s %-12s %-10s\n", "Decimal", "Hexadecimal", "Caractere");
    printf("----------------------------------\n");

    for (int i = 32; i <= 126; i++) {
        printf("%-10d 0x%-10X %c\n", i, i, (char)i);
    }

    return 0;
}