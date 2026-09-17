/******************************************************************************
Questão 09. Operações Aritméticas Básicas e Cast de Tipos — Escreva um programa em
C que solicite e leia dois números inteiros do usuário. O programa deve calcular e 
exibir os resultados das quatro operações aritméticas básicas (soma, subtração, 
multiplicação e divisão real). Certifique-se de que o resultado da divisão seja 
exibido com duas casas decimais e trate de forma explícita a divisão real sem 
perdas de precisão (divisão inteira). Adicione um comentário informando como
evitaria matematicamente a divisão por zero neste capítulo.
*******************************************************************************/
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);

    
    if (num2 != 0) {
        
        float divisao = (float)num1 / num2;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Divisao: Nao e possivel dividir por zero!\n");
    }

    return 0;
}