/******************************************************************************
Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3) — Analise o
programa abaixo que calcula a soma acumulada de quadrados dentro de um laço for contendo um
comando de desvio e controle de escopo interno:
#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
for (i = 1; i <= 10; i++) {
if (i == 5) continue;
if (i == 8) break;
int soma = 0;
soma += i * i;
}
printf("Soma final = %d\n", soma);
system("PAUSE");
return 0;
}

a) Por que o compilador emitirá um erro de compilação na instrução printf final?
b) Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e
break no fluxo?
c) Reescreva o código corrigindo o escopo de 'soma' e apresente o resultado que será impresso no
console.
*******************************************************************************/

R = 
A) A variável soma foi declarada no escopo interno do laço for. 
Por essa razão, ela deixa de existir assim que o laço termina, 
tornando-se inacessível para a instrução printf externa e gerando um erro de compilação (undeclared identifier).

B)Iterações executadas com cálculo: $i = 1, 2, 3, 4, 6$ e $7$.
Impacto do continue ($i = 5$): Interrompe imediatamente a iteração atual sem executar o cálculo $5^2$ e salta para o incremento (i++).
Impacto do break ($i = 8$): Interrompe e encerra prematuramente a execução do laço for, impedindo o processamento das iterações de $8$ a $10$.

C) 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Declarada fora do laço para acumular o valor e ter escopo global à função

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
