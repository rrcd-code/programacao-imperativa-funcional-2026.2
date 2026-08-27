/******************************************************************************
Desenvolva um programa completo em C que declare variáveis de ponto flutuante para
os seguintes itens e seus preços unitários: Lápis (4.88), Borrachas (234.54), 
Canetas (42.04), Cadernos (8.00) e Fitas (13.05). Utilize a função printf() para 
exibir esses dados no console em formato de tabela, alinhados à direita, com 
largura mínima de campo de 12 caracteres e precisão de duas casas decimais,
conforme a saída abaixo:

Lapis 4.88
Borrachas 234.54
Canetas 42.04
Cadernos 8.00
Fitas 13.05
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float lapis = 4.88;
    float borrachas = 234.54;
    float canetas = 42.04;
    float cadernos = 8.00;
    float fitas = 13.05;

    printf("%12s %12.2f\n", "Lapis", lapis);
    printf("%12s %12.2f\n", "Borrachas", borrachas);
    printf("%12s %12.2f\n", "Canetas", canetas);
    printf("%12s %12.2f\n", "Cadernos", cadernos);
    printf("%12s %12.2f\n", "Fitas", fitas);

    return 0;
}

