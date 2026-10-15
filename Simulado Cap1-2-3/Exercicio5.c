/******************************************************************************
Questão 05. Estruturas de Repetição: Comparação entre for, while e do-while (Cap. 3) — As
estruturas de repetição permitem a execução iterativa de instruções em C. Analise as características de
for, while e do-while e responda fundamentadamente:
a) Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do
bloco de código e ao momento do teste condicional?
b) Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?
c) O trecho de código 'while (condicao);' (com ponto-e-vírgula ao final do cabeçalho) constitui um erro de
compilação ou de lógica? O que acontece se condicao for verdadeira?
*******************************************************************************/

R = 
a) while vs do-while:

while: O teste condicional é feito antes da execução do bloco (pré-testado). Número mínimo de execuções: 0.

do-while: O teste condicional é feito depois da execução do bloco (pós-testado). Número mínimo de execuções: 1.

b) Uso do laço for:

É a escolha mais elegante e legível quando o número de iterações é conhecido previamente 
ou quando há um contador/variável de controle, pois agrupa a inicialização,
a condição de parada e a atualização (incremento/decremento) na mesma linha.

c) Análise de while (condicao);:

É um erro de lógica (não de compilação, pois a sintaxe de instrução nula é válida em C).

Se condicao for verdadeira, o programa entrará em um loop infinito, 
pois repetirá indefinidamente a instrução vazia ; sem nunca atualizar as variáveis da condição.