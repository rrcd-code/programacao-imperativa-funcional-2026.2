/******************************************************************************
Explique detalhadamente o comportamento do programa abaixo quando executado no
console. Apresente qual será a saída exata gerada pelas sequências de 
escape utilizadas no formato de controle:
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("\n\t\"Primeiro programa\"");
system("PAUSE");
return 0;
}

/*1- O comando printf inicia a impressão aplicando o \n, fazendo o cursor pular para a linha de baixo.*/

/*2- O \t aplica um recuo horizontal (tabulação) na nova linha.*/

/*3- As sequências \" imprimem as aspas ao redor do texto, exibindo "Primeiro programa".*/

/*4- Como não há uma quebra de linha (\n) no final do printf, o buffer da saída é descarregado e o comando system("PAUSE")
imprime a mensagem do sistema operacional imediatamente após as aspas de fechamento.*/

/*5- Ao pressionar qualquer tecla, o programa executa return 0; e encerra com código de sucesso.*/