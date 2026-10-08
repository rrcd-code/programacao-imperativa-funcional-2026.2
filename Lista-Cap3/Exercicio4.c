/******************************************************************************
Questão 04. Comandos de Desvio de Fluxo: break vs. continue — Os comandos break e
continue são instruções de controle de desvio que alteram a execução normal de laços de
repetição:
a) Descreva a ação exata executada pelo programa quando o comando break é acionado
dentro de um laço for ou while.

Cesar School | Programação Imperativa e Funcional | Página 3

b) Descreva a ação exata executada pelo programa quando o comando continue é acionado
dentro de um laço for. Qual das três expressões do cabeçalho do for é executada
imediatamente após o continue?
c) Em uma estrutura de laços aninhados (um laço for interno dentro de outro laço for externo),
qual laço é interrompido quando a instrução break é executada dentro do laço interno?
*******************************************************************************/


A) Ação do break:
Encerra imediatamente o laço (for ou while), cancela todas as iterações 
restantes e desvia a execução do programa para a primeira linha após o bloco 
do laço.

B) Ação do continue:
Interrompe apenas a iteração atual (pula o restante do código do bloco) e avança
para a próxima iteração.

C) Laço interrompido em estruturas aninhadas:
O break interrompe apenas o laço interno (o laço no qual ele foi escrito). 
O laço externo continua sua execução normalmente.