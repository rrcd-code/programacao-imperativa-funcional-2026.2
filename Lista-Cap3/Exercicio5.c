/******************************************************************************
Questão 05. Operador Vírgula e Múltiplas Variáveis de Controle — O operador vírgula (,)
permite agrupar múltiplas expressões em um único comando, garantindo a avaliação da esquerda
para a direita. Observe o trecho abaixo:
int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}
a) Exatamente quantas iterações o laço acima executará antes de ser encerrado?
b) Escreva a saída exata produzida pelo comando printf em cada uma das iterações
executadas.
c) Reescreva a lógica deste mesmo laço utilizando obrigatoriamente a estrutura while.
*******************************************************************************/


A) Número de iterações:
5 iterações.

B) 
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

C) Equivalente usando while:
int i = 0, j = 10;

while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}