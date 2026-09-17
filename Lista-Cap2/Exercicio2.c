/******************************************************************************
Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas — Historicamente,
literaturas de C utilizam funções unbuffered de entrada definidas na biblioteca 
legada e não-padrão <conio.h>, tais como getch() e getche(), para ler caracteres 
imediatamente sem exigir que o usuário pressione [ENTER]. Sob a perspectiva da 
portabilidade moderna da linguagem e do padrão ANSI C:
a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas 
modernos(Linux, macOS, servidores)?
R= a) Motivos para evitar a <conio.h>
Não faz parte do Padrão C: O cabeçalho <conio.h> (Console Input Output) nunca 
fez parte das especificações ANSI C ou ISO C.
Falta de Portabilidade: É uma biblioteca legada desenvolvida especificamente para
o ambiente MS-DOS/Windows (muito difundida em compiladores antigos como Turbo 
C/Borland C). Ela não existe nativamente em sistemas POSIX (Linux, macOS, Unix), 
fazendo com que o código falhe na compilação em servidores ou outros sistemas 
operacionais.

b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão 
<stdio.h> para entrada e saída de caracteres?
R= Funções equivalentes na biblioteca padrão <stdio.h>

Entrada de Caracteres: getchar() ou fgetc(stdin)

Saída de Caracteres: putchar() ou fputc()

c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de
maneira robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer 
do teclado.
R= O espaço em branco antes do especificador %c no scanf orienta o compilador a 
ignorar automaticamente qualquer caractere invisível residual no buffer do teclado,
incluindo espaços, tabulações e a quebra de linha ('\n').

*******************************************************************************/

