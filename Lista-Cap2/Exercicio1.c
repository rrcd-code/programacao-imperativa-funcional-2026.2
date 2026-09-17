/******************************************************************************
Questão 01. Truncamento de Tipos e Coerção Implícita — Um estudante do curso de ADS
escreveu o programa em C abaixo visando entender o comportamento de variáveis e 
atribuições de tipos incompatíveis. Analise o código, compile mentalmente ou em seu 
ambiente de desenvolvimento e responda às questões indicadas.
#include <stdio.h>
#include <stdlib.h>
int main() {
int valor_inteiro;
valor_inteiro = 2.97;
printf("O valor armazenado eh: %d\n", valor_inteiro);
system("PAUSE");
return 0;
}

a) Qual é o valor numérico que será efetivamente exibido no console ao executar 
esse programa?
R= 2

b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa 
atribuição?
R= Nome do fenômeno: Coerção Implícita de Tipo (ou conversão implícita de tipo),
que resulta em Truncamento.
Por que ocorre: O literal 2.97 é do tipo ponto flutuante (double). 
Ao ser atribuído a uma variável declarada como int, o compilador realiza uma 
conversão automática descartando integralmente a parte fracionária (.97), sem 
efetuar nenhum tipo de arredondamento matemático.

c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em
C pelo programador caso ele necessite arredondar o valor ou manter a precisão?
R= Para manter a precisão decimal: Altere o tipo da variável para float ou double e 
ajuste a máscara do printf para %f ou %.2f.
*******************************************************************************/

