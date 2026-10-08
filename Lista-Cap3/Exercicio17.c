/******************************************************************************
Questão 17. Estatísticas de Turma (Menor, Maior, Média e Contagem) — Faça um programa para
ler uma sequência de notas de alunos (valores reais de 0.0 a 10.0). A entrada de dados deve ser
encerrada quando o usuário digitar a nota '-1.0'. Ao final, o programa deve exibir: a) Total de alunos
avaliados; b) A maior nota da turma; c) A menor nota da turma; d) A média geral da turma.
*******************************************************************************/


#include <stdio.h>

int main() {
    float nota;
    float soma = 0.0;
    float maior, menor;
    int total_alunos = 0;

    printf("Digite as notas dos alunos (0.0 a 10.0) ou -1.0 para encerrar:\n");

    while (1) {
        printf("Nota do aluno %d: ", total_alunos + 1);
        scanf("%f", &nota);

        if (nota == -1.0f) {
            break;
        }

        if (nota < 0.0f || nota > 10.0f) {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0.\n\n");
            continue;
        }

        soma += nota;
        total_alunos++;

        if (total_alunos == 1) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }
    }

    if (total_alunos > 0) {
        printf("\n--- ESTATISTICAS DA TURMA ---\n");
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) Maior nota da turma: %.2f\n", maior);
        printf("c) Menor nota da turma: %.2f\n", menor);
        printf("d) Media geral da turma: %.2f\n", soma / total_alunos);
    } else {
        printf("\nNenhum aluno foi avaliado.\n");
    }

    return 0;
}