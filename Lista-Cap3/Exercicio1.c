/******************************************************************************
Questão 01. Diferenças Fundamentais e Tempo de Avaliação de Laços — A linguagem C
disponibiliza três estruturas de controle para execução iterativa de código: for, while e do-while.
Analise o funcionamento dessas estruturas e responda:
a) Qual é a diferença essencial entre as estruturas while e do-while em relação ao número
mínimo de execuções do bloco de código e ao momento em que a condição de teste é
avaliada?
b) Em que situações de programação cada uma das três estruturas (for, while e do-while) se
apresenta como a escolha mais elegante, legível e adequada?
c) Análise de código: O trecho 'while (condicao);' (com ponto-e-vírgula ao final) é um erro de
compilação ou um erro de lógica? Explique detalhadamente o que ocorre durante a execução
se condicao for verdadeira.
*******************************************************************************/

A) While : 
Momento da avaliação: A condição de teste é avaliada antes de qualquer execução 
do bloco de código.

Número mínimo de execuções: 0 (zero). Se a condição for falsa (false / 0) já na 
primeira verificação, o bloco interno é totalmente ignorado.


Do-While : 
Momento da avaliação: A condição de teste é avaliada após a execução do bloco 
de código.

Número mínimo de execuções: 1 (uma). Como a checagem só ocorre ao final, o bloco
interno é obrigatoriamente executado pelo menos uma vez, independente de a 
condição ser verdadeira ou falsa.


B) FOR: 
Quando usar: Quando o número de iterações é determinado ou conhecido previamente
, ou quando há um contador/índice com passos bem definidos.

Por que é mais elegante: Concentra a inicialização, a condição de parada e a 
atualização (incremento/decremento) no próprio cabeçalho da estrutura, tornando 
a leitura direta.

While :
Quando usar: Quando o número de iterações é indeterminado e a execução depende 
de um evento ou estado que precisa ser testado antes de iniciar.

Por que é mais elegante: Reflete a ideia de "enquanto algo for verdadeiro, faça...",
garantindo que a ação só comece se for seguro/necessário.

Do-While: 
Quando usar: Quando o número de iterações é indeterminado, mas a ação do bloco 
precisa ocorrer obrigatoriamente ao menos uma vez antes da validação.

Por que é mais elegante: Evita a duplicação de código (não é preciso escrever a 
instrução uma vez fora do laço e repetida dentro dele).


C) Erro de Compilação vs. Erro de Lógica:
Não é um erro de compilação. Na linguagem C, o ponto-e-vírgula ; isolado após a 
instrução while é interpretado sintaticamente como um comando nulo 
(null statement). O compilador aceita a sintaxe normalmente.

Trata-se de um erro de lógica (na imensa maioria das aplicações convencionais),
pois altera o comportamento esperado da estrutura de controle.


O que ocorre durante a execução se condicao for verdadeira:

O programa avalia a expressão condicao. Como ela é verdadeira (diferente de 0), 
o laço entra em execução.

A cada iteração, o programa executa a instrução associada ao while — que, 
neste caso, é o comando nulo ; (não faz nada).

Em seguida, ele volta a testar a condicao. Como o bloco de código interno 
não existe (é apenas ;), não há instrução para alterar o valor das variáveis 
envolvidas na condicao.

O programa entra em um laço infinito (infinite loop), consumindo processamento 
da CPU (busy-waiting) sem avançar para as próximas linhas do programa e sem 
executar qualquer instrução útil, causando o travamento do fluxo de execução.
