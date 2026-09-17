/******************************************************************************
Questão 05. Avaliação de Expressões Lógicas e Relacionais — Determine o resultado lógico (1
para verdadeiro, 0 para falso) de cada uma das expressões relacionais e lógicas a seguir,
assumindo que as variáveis foram inicializadas como: int i = 1, j = 2, k = 3, n = 2; float x = 3.3, y
= 4.4;. Consulte a tabela de precedência do Capítulo 2 de Viviane.
a) i < j + 3 => Resultado: ?
b) 2 * i - 7 <= j - 8 => Resultado: ?
c) -x + y >= 2.0 * y => Resultado: ?
d) x == y => Resultado: ?
e) !(n - j) => Resultado: ?
f) !n - j => Resultado: ?
g) i && j && k => Resultado: ?
h) i || j - 3 && k => Resultado: ?
i) i < j && 2 >= k => Resultado: ?
j) i == 2 || j == 4 || k == 5 => Resultado: ?

*******************************************************************************/
a) i < j + 3 $\rightarrow$ 1 (Verdadeiro)
Passos: j + 3 $\rightarrow$ $2 + 3 = 5$.
A comparação $1 < 5$ é verdadeira.

b) 2 * i - 7 <= j - 8 $\rightarrow$ 0 (Falso)
Passos: $2 \times 1 - 7 = -5$ e $2 - 8 = -6$. 
A comparação $-5 \le -6$ é falsa.

c) -x + y >= 2.0 * y $\rightarrow$ 0 (Falso)
Passos: $-3.3 + 4.4 = 1.1$ e $2.0 \times 4.4 = 8.8$.
A comparação $1.1 \ge 8.8$ é falsa.

d) x == y $\rightarrow$ 0 (Falso)
Passos: $3.3 == 4.4$ é falso.

e) !(n - j) $\rightarrow$ 1 (Verdadeiro)
Passos: n - j $\rightarrow$ $2 - 2 = 0$. 
A negação !(0) resulta em 1.

f) !n - j $\rightarrow$ -2 (em contexto lógico equivale a 1 / Verdadeiro)
Passos: !n $\rightarrow$ !2 $= 0$ (já que $2 \neq 0$).
Em seguida, $0 - j \rightarrow 0 - 2 = -2$. 
Em C, qualquer valor numérico diferente de $0$ é tratado como verdadeiro em testes condicionais.

g) i && j && k $\rightarrow$ 1 (Verdadeiro)
Passos: Como $i=1$, $j=2$ e $k=3$ são todos não-nulos (verdadeiros), o resultado do $AND$ lógico é 1.

h) i || j - 3 && k $\rightarrow$ 1 (Verdadeiro)
Passos: Devido à regra de curto-circuito do operador ||, como a expressão à esquerda (i = 1) já é verdadeira, o resultado final é 1 sem necessidade de avaliar a subexpressão à direita.

i) i < j && 2 >= k $\rightarrow$ 0 (Falso)
Passos: i < j ($1 < 2$) é verdadeiro ($1$). 
Porém, 2 >= k ($2 \ge 3$) é falso ($0$). A operação $1 \land 0$ resulta em 0.

j) i == 2 || j == 4 || k == 5 $\rightarrow$ 0 (Falso)
Passos: Todas as três igualdades são falsas ($1 == 2 \rightarrow 0$, $2 == 4 \rightarrow 0$, $3 == 5 \rightarrow 0$).
A combinação $0 \lor 0 \lor 0$ resulta em 0.