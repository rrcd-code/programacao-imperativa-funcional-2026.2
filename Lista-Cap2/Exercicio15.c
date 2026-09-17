/******************************************************************************
Questão 15. Cálculo de Média Aritmética Simples e Ponderada — Desenvolva um programa
que leia quatro notas escolares de um aluno. Calcule e exiba no console: a) A média aritmética
simples das notas; b) A média ponderada das notas, assumindo que as provas possuem os
seguintes pesos sequenciais: Peso 1 para as provas 1 e 2, e Peso 2 para as provas 3 e 4. Ambos
os resultados devem ser representados com duas casas decimais.
*******************************************************************************/
#include <stdio.h>

int main() {
    double nota1, nota2, nota3, nota4;

    printf("Digite as quatro notas do aluno: ");
    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

    // a) Média aritmética simples (divisão pela quantidade total de notas)
    double media_simples = (nota1 + nota2 + nota3 + nota4) / 4.0;

    // b) Média ponderada (Pesos: P1=1, P2=1, P3=2, P4=2; Soma dos pesos = 6)
    double media_ponderada = (nota1 * 1.0 + nota2 * 1.0 + nota3 * 2.0 + nota4 * 2.0) / 6.0;

    printf("\n--- Resultados ---\n");
    printf("a) Média Aritmética Simples: %.2f\n", media_simples);
    printf("b) Média Aritmética Ponderada: %.2f\n", media_ponderada);

    return 0;
}