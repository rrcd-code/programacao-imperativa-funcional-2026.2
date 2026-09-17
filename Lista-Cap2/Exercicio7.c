/******************************************************************************
Questão 07. Leitura e Inversão Formatada de Datas — Escreva um programa completo em 
C que solicite ao usuário a inserção de uma data no formato dd/mm/aaaa 
(utilizando as barras como separadores na digitação) e a exiba em formato invertido 
aaaa/mm/dd. Use as capacidades específicas de formatação de string de controle da 
função scanf().

*******************************************************************************/
#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    
    
    if (scanf("%d/%d/%d", &dia, &mes, &ano) == 3) {
        
        printf("Data formatada (aaaa/mm/dd): %04d/%02d/%02d\n", ano, mes, dia);
    } else {
        printf("Erro: Formato de data invalido. Certifique-se de usar barras (dd/mm/aaaa).\n");
    }

    return 0;
}