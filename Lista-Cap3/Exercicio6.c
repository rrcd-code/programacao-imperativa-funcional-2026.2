/******************************************************************************
Questão 06. Laço Sem Corpo e Incremento Pós-fixado — Analise o trecho de código abaixo
que utiliza um laço de repetição com corpo vazio:
int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);
a) Qual é o valor final da variável x que será impresso pela instrução printf?
b) Explique passo a passo a sequência de incrementos e comparações lógicas que ocorrem
durante a execução do teste 'x++ < 5'.
c) Reescreva esse código de forma explícita e clara (sem corpo vazio), mantendo exatamente o
mesmo resultado final de x.
*******************************************************************************/


A) Valor final de x:
6

B) Passo a passo da execução:

O operador pós-fixado (x++) compara o valor atual de x com 5 e incrementa x em 1 logo em seguida:

x = 0: compara 0 < 5 (verdadeiro), incrementa x para 1.

x = 1: compara 1 < 5 (verdadeiro), incrementa x para 2.

x = 2: compara 2 < 5 (verdadeiro), incrementa x para 3.

x = 3: compara 3 < 5 (verdadeiro), incrementa x para 4.

x = 4: compara 4 < 5 (verdadeiro), incrementa x para 5.

x = 5: compara 5 < 5 (falso), incrementa x para 6 e encerra o laço.

C) Código reescrito de forma explícita:
#include <stdio.h>

int main() {
    int x = 0;

    while (x < 5) {
        x++;
    }
    x++; // Incremento referente ao teste final (quando x era 5 e a condição falhou)

    printf("Valor final de x = %d\n", x); // Saída: 6
    return 0;
}