/******************************************************************************
Questão 03. Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2) — Os
operadores de atribuição em C executam suas ações da direita para a esquerda e podem ser
combinados com operadores aritméticos. Determine os valores finais de a, b, c e d após a execução da
sequência abaixo:
int a = 2, b = 4, c = 5, d = 10;
a += b + c; // Valor final de a = ?
b *= c = d - 2; // Valores finais de b e c = ?
d %= a + 3; // Valor final de d = ?
a += b += c += 5; // Valores finais de a, b e c = ?
*******************************************************************************/

R = 
a += b + c; 
Avalia a expressão à direita: b + c -> 4 + 5 = 9.
Soma ao valor de a: a = 2 + 9 = 11.
Estado atual: a = 11, b = 4, c = 5, d = 10.


b *= c = d - 2;
Primeiro resolve c = d - 2: c = 10 - 2 = 8.
Em seguida resolve b *= 8: b = 4 * 8 = 32.
Estado atual: a = 11, b = 32, c = 8, d = 10.


d %= a + 3;
Avalia a expressão à direita: a + 3 -> 11 + 3 = 14.
Aplica o resto da divisão (resto de 10 por 14): d = 10 % 14 = 10.
Estado atual: a = 11, b = 32, c = 8, d = 10.


a += b += c += 5;
c += 5 -> c = 8 + 5 = 13.
b += 13 -> b = 32 + 13 = 45.
a += 45 -> a = 11 + 45 = 56.


Estado final: a = 56, b = 45, c = 13, d = 10.