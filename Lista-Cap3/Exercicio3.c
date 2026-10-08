/******************************************************************************
Questão 03. Flexibilidade do Laço for e Omissão de Expressões — A sintaxe do laço for em C
consiste em três expressões separadas por ponto-e-vírgulas: inicialização, teste e incremento.
Analise os três trechos de código abaixo:
// Trecho A: Incremento por divisão
for (a = 36; a > 0; a /= 2)
printf("%d\t", a);
// Trecho B: Omissão de inicialização e incremento
for (; (ch = getch()) != 'X' ;)
printf("%c", ch + 1);
// Trecho C: Omissão completa de expressões
for (;;)
printf("Laço Infinito\n");
a) Qual é a sequência exata de valores impressos no console ao executar o Trecho A?
b) Explique o comportamento do Trecho B. O que faz a operação 'ch + 1' e por que os
parênteses em '(ch = getch())' são estritamente necessários antes da comparação com 'X'?
c) Como o programa pode interromper a execução do laço infinito do Trecho C de forma
programática sem forçar o encerramento do processo pelo sistema operacional?
*******************************************************************************/


A) Sequência impressa: 
36	18	9	4	2	1

B) 
O que faz: Lê caracteres continuamente e encerra ao digitar 'X'.
Operação ch + 1: Imprime o caractere seguinte na tabela ASCII (ex: lê 'A', imprime 'B').

C)Interrupção programática:
Usando o comando break; (dentro de um if) ou return; para sair do laço.