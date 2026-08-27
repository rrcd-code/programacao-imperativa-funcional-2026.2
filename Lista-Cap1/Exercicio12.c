/******************************************************************************
A declaração de variáveis define o tipo e o identificador de cada espaço reservado
na memória. Analise cada uma das declarações na tabela a seguir, preencha o seu 
status (Correto ou Incorreto) e, caso seja incorreto, justifique detalhadamente o 
erro sintático:

Instrução  Status (C/I)  Justificativa Teórica
a) int a; [ Correto ] [ Declaração sintaticamente válida para variável inteira 
padrão. ]
b) float b; [ Correto  ] [ Declaração válida para variável de ponto flutuante 
de precisão simples. ]
c) double float c; [ Incorreto ] [ float e double são dois tipos de dados de ponto
flutuante distintos. Combinar dois especificadores de tipo base na mesma declaração
gera um conflito sintático. ]
d) unsigned char d; [ Correto  ] [ Declaração válida utilizando o modificador de sinal
unsigned com o tipo base char. ]
e) unsigned e; [ Correto ] [ No padrão C, omitting o tipo int ao usar os modificadores
unsigned, signed, short ou long é totalmente válido, sendo essa sintaxe o 
equivalente abreviado de unsigned int. ]
f) long float f; [ Incorreto ] [ O modificador long não pode ser aplicado ao tipo float
no padrão ANSI C. Para declarar variáveis de ponto flutuante com maior precisão, deve-se
utilizar double ou long double. ]
g) long g; [ Correto ] [ Declaração válida; o uso isolado do modificador long funciona 
como um atalho sintático padronizado para long int. ]
h) long double h; [ Correto ] [ Declaração válida que combina o modificador long com o 
tipo double para representar um ponto flutuante de precisão estendida. ]




*******************************************************************************/


