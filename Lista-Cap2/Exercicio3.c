/******************************************************************************
Questão 03. Formatação de Saída em Bases Numéricas e ASCII — A função de saída 
printf() oferece controle total sobre a representação dos dados na tela através 
de especificadores de formato de base numérica. Desenvolva as instruções em C 
necessárias para realizar a seguinte tarefa:
Leia um único número inteiro fornecido pelo usuário e exiba uma única mensagem no 
console que mostre esse mesmo valor nas seguintes representações simultâneas: 
base decimal (%d), base hexadecimal em caixa baixa (%x), base octal (%o) e o 
caractere correspondente à tabela ASCII (%c).

*******************************************************************************/

#include <stdio.h>

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    // Exibe todas as representacoes em uma unica mensagem
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: '%c'\n", 
           valor, valor, valor, valor);

    return 0;
}

/*
Especificadores utilizados na formatação:

%d: Representa o número na base decimal com sinal.

%x: Representa o número na base hexadecimal em letras minúsculas (caixa baixa).

%o: Representa o número na base octal.

%c: Mapeia o valor numérico para seu caractere correspondente na tabela ASCII. */