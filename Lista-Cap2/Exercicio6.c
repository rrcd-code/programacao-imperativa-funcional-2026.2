/******************************************************************************
Questão 06. Comportamento e Precedência dos Incrementos — O comportamento de
incrementos prefixados e pós-fixados (++x e x++) é uma fonte frequente de erros 
sutis na Linguagem C. Analise os dois trechos de código independentes abaixo e 
responda:
// Trecho A
int n = 5;
int x = ++n;
printf("Trecho A: n = %d, x = %d\n", n, x);
// Trecho B
int m = 5;
int y = m++;
printf("Trecho B: m = %d, y = %d\n", m, y);


a) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado
(++n) e o pós-fixado (m++). Quais serão os valores impressos na tela por cada 
trecho?

b) Um programador júnior tentou imprimir uma variável em printf() modificando-a 
múltiplas vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, 
n+1, n++);. Explique por que essa instrução pode gerar resultados inconsistentes 
e imprevisíveis dependendo do compilador adotado (comportamento indefinido).

*******************************************************************************/
a) Diferença de fluxo, atribuição e valores impressosValores Impressos na 
Tela:Trecho A: Trecho A: n = 6, x = 6Trecho B: Trecho B: m = 6, y = 5Diferença de 
Fluxo:Pré-incremento (++n): O valor da variável n é incrementado em $+1$ antes da 
avaliação da expressão. n passa a ser $6$ e esse novo valor é atribuído a x.
Pós-incremento (m++): O valor atual de m ($5$) é avaliado e atribuído a y primeiro.
Após essa atribuição, o incremento de m é efetuado na memória, fazendo m passar a 
valer $6$.


b) Inconsistência e Comportamento Indefinido (Undefined Behavior)
A chamada printf("%d\t%d\t%d\n", n, n+1, n++); gera resultados imprevisíveis devido
a dois motivos fundamentais do padrão ANSI C:Ordem de Avaliação de Argumentos 
Não Especificada: O padrão da linguagem C não garante a ordem em que os argumentos 
de uma função são avaliados antes de serem passados. O compilador pode avaliá-los 
da esquerda para a direita, da direita para a esquerda ou em qualquer ordem 
otimizada para a arquitetura.Violação de Pontos de Sequência (Sequence Points): 
Modificar uma variável (via efeito colateral do n++) e ler o valor dessa mesma 
variável em outros argumentos (n e n+1) na mesma expressão, sem um sequence point 
intermediário, constitui Comportamento Indefinido (Undefined Behavior). 
O compilador pode gerar códigos assembly completamente distintos dependendo da 
versão, do SO ou do nível de otimização selecionado.