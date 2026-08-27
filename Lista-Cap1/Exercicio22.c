/******************************************************************************
Desenhe no console um carro e uma caminhonete utilizando caracteres de bloco e de
controle estudados no capítulo. Utilize sequências de escape em hexadecimal (como \xDC e \xDF) para
renderizar a seguinte arte gráfica:

▄▄████▄▄
▀O▀▀▀▀▀O▀
▄▄█ ██████
▀O▀▀▀▀▀OO▀
*******************************************************************************/

#include <stdio.h>

int main(void) {
    // Carro
    printf("\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\n");
    printf("\xDFO\xDF\xDF\xDF\xDF\xDFO\xDF\n\n");

    // Caminhonete
    printf("\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF\n");

    return 0;
}
