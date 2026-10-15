/******************************************************************************
Questão 12. Validação de Entrada de Dados com Laço Garantido (`do-while`) — Escreva um
programa em C que solicite ao usuário uma nota válida no intervalo fechado de 0.0 a 10.0. Caso o
usuário digite um valor inválido (como -2.5 ou 11.0), o programa deve exibir uma mensagem de erro e
repetir a solicitação utilizando a estrutura `do-while`. O programa só deve encerrar quando uma nota
válida for digitada.
*******************************************************************************/

R = 
#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota (entre 0.0 e 10.0): ");
        scanf("%f", &nota);

        // Mensagem de erro exibida caso o valor esteja fora do intervalo
        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: Nota inválida! O valor deve estar entre 0.0 e 10.0.\n\n");
        }
    } while (nota < 0.0 || nota > 10.0); // Repete enquanto a nota for inválida

    printf("\nNota válida registrada com sucesso: %.1f\n", nota);

    return 0;
}