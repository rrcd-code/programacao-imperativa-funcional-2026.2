/******************************************************************************
Questão 09. Acumulador de Valores Reais com Sentinela de Parada Negativa — Faça um
programa que permita ao usuário fornecer uma sequência indeterminada de valores reais positivos. O
programa deve parar de solicitar valores no momento em que o usuário fornecer um valor negativo
(que funcionará como sentinela de parada). Ao final, o programa deve exibir a quantidade de valores
válidos digitados, a soma total e a média aritmética (garantindo que o valor negativo de parada não
entre nos cálculos).
*******************************************************************************/


#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int quantidade = 0;

    printf("Digite valores reais positivos (ou um negativo para encerrar):\n");
    printf("Digite um valor: ");
    scanf("%f", &valor);

    while (valor >= 0.0) {
        soma += valor;
        quantidade++;

        printf("Digite um valor: ");
        scanf("%f", &valor);
    }

    if (quantidade > 0) {
        printf("\n--- RESULTADOS ---\n");
        printf("Quantidade de valores validos: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", soma / quantidade);
    } else {
        printf("\nNenhum valor valido foi digitado.\n");
    }

    return 0;
}