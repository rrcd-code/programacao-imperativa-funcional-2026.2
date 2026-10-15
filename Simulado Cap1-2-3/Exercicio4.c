/******************************************************************************
Questão 04. Avaliação de Expressões Lógicas, Relacionais e Precedência (Cap. 2) — Considere as

variáveis inteiras i = 2, j = 3, k = 0 e as variáveis de ponto flutuante x = 2.5, y = 5.0. Avalie cada

expressão abaixo e determine seu resultado lógico em C (1 para Verdadeiro, 0 para Falso):

a) i < j + 2 => Resultado: ?

b) 2 * i - 5 <= j - 4 => Resultado: ?

c) !k && (x + y >= 7.5) => Resultado: ?

d) !(i == j) || (y / x == 2.0) => Resultado: ?

e) i == 2 && j == 4 || k == 0 => Resultado: ?
*******************************************************************************/

R = 
a) i < j + 2 => 1.
Avalia a adição primeiro: j + 2 -> 3 + 2 = 5.
Compara: 2 < 5 (Verdadeiro).

b) 2 * i - 5 <= j - 4 => 1
Lado esquerdo: 2 * 2 - 5 -> 4 - 5 = -1.
Lado direito: 3 - 4 = -1.
Compara: -1 <= -1 (Verdadeiro).

c) !k && (x + y >= 7.5) => 1
negação lógica: !0 resulta em 1 (Verdadeiro).
Expressão entre parênteses: 2.5 + 5.0 >= 7.5 -> 7.5 >= 7.5 (Verdadeiro/1).
Conjunção: 1 && 1 (Verdadeiro).

d) !(i == j) || (y / x == 2.0) => 1
Lado esquerdo: 2 == 3 é Falso (0), e a negação !(0) torna-se Verdadeiro (1).
Devido ao curto-circuito do operador ||, a expressão resulta imediatamente em 1 (Verdadeiro).

e) i == 2 && j == 4 || k == 0 => 1
Devido à precedência de operadores,
a conjunção && é avaliada antes da disjunção ||:(i == 2 && j == 4) -> (1 && 0) -> 0 (Falso).
Em seguida avalia-se o lado direito do ||:0 || (k == 0) -> 0 || (0 == 0) -> 0 || 1 (Verdadeiro).


