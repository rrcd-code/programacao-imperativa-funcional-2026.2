/******************************************************************************
Desenvolva três versões independentes de programas em C para produzir no console a
saída de texto abaixo. A primeira versão deve usar uma única chamada de printf(); 
a segunda deve usar exatamente duas instruções de impressão independentes; e a 
terceira deve desenhar as frases emolduradas utilizando caracteres gráficos de 
caixa:

Treinamento em programação.
Linguagem C.
*******************************************************************************/

#include <stdio.h>

int main(void) {
    printf("Treinamento em programação.\nLinguagem C.\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    printf("Treinamento em programação.\n");
    printf("Linguagem C.\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    // Linha superior (29 caracteres horizontais de preenchimento)
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    
    // Conteúdo alinhado com 27 posições de texto
    printf("\xBA %-27s \xBA\n", "Treinamento em programação.");
    printf("\xBA %-27s \xBA\n", "Linguagem C.");
    
    // Linha inferior
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    
    return 0;
}
