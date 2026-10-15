/******************************************************************************
Questão 02. Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1)
— Um estudante iniciante escreveu o código C abaixo tentando imprimir mensagens formatadas com
quebras de linha e tabulações, mas enfrentou erros de compilação. Identifique os três erros
sintáticos/estruturais presentes no código:
#include <stdio.h>
#include <stdlib.h>;
int Main()
{
int idade = 20;
printf( A idade do aluno eh: %d anos.. , idade);
cout << endl;
system("PAUSE");
return 0;
}
*******************************************************************************/

R = Ponto e virgula no #include <stdlib.h>; , Letra Maiuscula no int Main() , 
falta de aspas duplas no printf( A idade do aluno eh: %d anos.. , idade); ,
O comando cout << endl; utiliza a sintaxe de fluxo do C++, inexistente na biblioteca 
padrão da linguagem C (stdio.h)