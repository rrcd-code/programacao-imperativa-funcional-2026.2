/******************************************************************************
Determine a saída exata do programa a seguir e explique como o compilador C
interpreta os argumentos do tipo caractere simples ('\n', '\t', '\"') 
passados para o modificador %c:
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
system("PAUSE");
return 0;
}

/*'\n': O compilador converte para o valor inteiro 10 (ASCII da quebra de linha).

'\t': O compilador converte para o valor inteiro 9 (ASCII da tabulação horizontal).

'\"': A barra de escape \ faz o compilador interpretar a aspa como o caractere literal de aspa dupla,
convertendo para o valor inteiro 34 (ASCII de "). 

A instrução printf("%c", "\""); possui um erro grave de compatibilidade de tipos:

O texto "\"" utiliza aspas duplas, o que o torna uma string literal (um ponteiro do tipo char *), e não um caractere simples.

Como o especificador %c espera um valor do tipo int/char, passar um ponteiro resulta em um Comportamento Indefinido.
A forma correta para imprimir a aspa de fechamento seria passar o caractere entre aspas simples: 
printf("%c", '\"'); ou printf("%c", '"');.
*/
