/******************************************************************************
Escreva um programa completo em C que declare uma variável do tipo inteiro,
atribua um valor a ela (como o seu ano de nascimento ou o ano letivo corrente)
e a imprima na tela junto com umamensagem de texto explicativa utilizando a 
função printf() com o especificador de formato correspondente.
*******************************************************************************/

#include <stdio.h>

int main(){
    int anoNascimento = 1996;
    int anoLetivo = 2026;
    printf("O Ano de Nascimento do Aluno é : %d\n", anoNascimento);
    printf("O Ano Letivo do Aluno é : %d\n", anoLetivo);
    return 0;
}