/******************************************************************************
Questão 04. Operadores de Atribuição Composta e Precedência — Os operadores de
atribuição composta (+=, -=, *=, /=, %=) executam uma operação aritmética e uma 
atribuição simultaneamente. Determine quais serão os valores das variáveis a, b, c 
e d após a execução sequencial completa das seguintes instruções de inicialização 
e atribuição em C. Justifique seus cálculos apresentando a ordem de avaliação 
passo a passo:
int a = 1, b = 2, c = 3, d = 4;
a += b + c; // Valor final de a = ?
b *= c = d + 2; // Valores finais de b e c = ?
d %= a + a + a; // Valor final de d = ?
d -= c -= b -= a; // Valor final de d, c e b = ?
a += b += c += 7; // Valor final de a, b e c = ?

*******************************************************************************/

Estado Iniciala = 1, b = 2, c = 3, d = 4
Passo a Passo da Execução Sequencial1. a += b + c;
Regra: O operador de adição (+) tem maior precedência que a atribuição composta (+=).
Cálculo da direita: b + c $\rightarrow$ $2 + 3 = 5$.
Atribuição: a = a + 5 $\rightarrow$ $1 + 5 = 6$.
Estado: a = 6, b = 2, c = 3, d = 42. b *= c = d + 2;
Regra: Os operadores de atribuição (= e *=) possuem associatividade da direita para a esquerda.
Avaliação da soma: d + 2 $\rightarrow$ $4 + 2 = 6$.
Atribuição em c: c = 6 (o valor retornado pela expressão é $6$).
Atribuição composta em b: b *= 6 $\rightarrow$ b = b * 6 $\rightarrow$ $2 \times 6 = 12$.
Estado: a = 6, b = 12, c = 6, d = 43. d %= a + a + a;
Regra: A adição (+) é executada antes da atribuição composta (%=).
Cálculo da direita: a + a + a $\rightarrow$ $6 + 6 + 6 = 18$.
Atribuição: d = d % 18 $\rightarrow$ $4 \pmod{18} = 4$.
Estado: a = 6, b = 12, c = 6, d = 44. d -= c -= b -= a;
Regra: Operadores de atribuição idênticos encadeados associam da direita para a esquerda.
Passo 1 (b -= a): b = b - a $\rightarrow$ $12 - 6 = 6$ (retorna $6$).
Passo 2 (c -= 6): c = c - 6 $\rightarrow$ $6 - 6 = 0$ (retorna $0$).
Passo 3 (d -= 0): d = d - 0 $\rightarrow$ $4 - 0 = 4$.
Estado: a = 6, b = 6, c = 0, d = 45. a += b += c += 7;
Regra: Associatividade da direita para a esquerda.
Passo 1 (c += 7): c = c + 7 $\rightarrow$ $0 + 7 = 7$ (retorna $7$).
Passo 2 (b += 7): b = b + 7 $\rightarrow$ $6 + 7 = 13$ (retorna $13$).
Passo 3 (a += 13): a = a + 13 $\rightarrow$ $6 + 13 = 19$.
Estado: a = 19, b = 13, c = 7, d = 4
Valores Finais das VariáveisVariávelValor Final
a 19
b 13
c 7
d 4