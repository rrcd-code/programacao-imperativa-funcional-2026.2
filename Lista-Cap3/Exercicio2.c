/******************************************************************************
Questão 02. Escopo e Tempo de Vida de Variáveis de Bloco — Um estudante escreveu o
programa abaixo com o intuito de calcular a soma dos quadrados dos números inteiros de 1 a 9,
mas encontrou falhas durante a compilação e execução:

#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
for (i = 1; i < 10; i++) {
int soma = 0;
soma += i * i;
}
printf("Soma final = %d\n", soma);
system("PAUSE");
return 0;
}

a) Por que o compilador emitirá um erro de sintaxe/declaração na instrução printf final?
b) Mesmo que a instrução printf fosse movida para dentro do bloco do laço for, por que o
valor impresso para soma estaria conceitualmente incorreto a cada iteração?
c) Apresente o código corrigido e explique o conceito de visibilidade, escopo de bloco e tempo
de vida de variáveis na linguagem C.
*******************************************************************************/


A) Motivo do erro no printf:
A variável soma foi declarada dentro do for. Fora das chaves {} do laço, ela 
não existe (escopo de bloco).

B) Problema se o printf ficasse dentro do laço:
soma seria reinicializada com 0 a cada iteração, perdendo os valores anteriores 
e exibindo apenas $i^2$ em vez da soma acumulada.

C)Código Corrigido e Conceitos:

Escopo de Bloco: Região entre {} onde a variável é reconhecida.

Visibilidade: Onde no código o nome da variável pode ser acessado.

Tempo de Vida: Período em que a variável existe na memória 
(nascendo ao entrar no bloco {} e morrendo ao sair dele).

#include <stdio.h>

int main() {
    int soma = 0; 

    for (int i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    return 0;
}



