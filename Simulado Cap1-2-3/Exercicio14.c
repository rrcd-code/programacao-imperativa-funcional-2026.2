/******************************************************************************
Questão 14. Autenticação de Senha com Limite Finito de Tentativas — Desenvolva um sistema de
autenticação que defina uma senha numérica secreta (ex: 2026). O programa deve permitir que o
usuário tente digitar a senha no máximo 3 vezes usando um laço `while` ou `for`. Se acertar, exiba
'Acesso Concedido!' e encerre; se errar as 3 vezes, exiba 'Conta Bloqueada por Segurança!'.
*******************************************************************************/

R = 
#include <stdio.h>

int main() {
    const int SENHA_CORRETA = 2026;
    int senha;
    int tentativas;
    int acesso_concedido = 0;

    for (tentativas = 1; tentativas <= 3; tentativas++) {
        printf("Digite a senha de acesso (Tentativa %d de 3): ", tentativas);
        scanf("%d", &senha);

        if (senha == SENHA_CORRETA) {
            printf("\nAcesso Concedido!\n");
            acesso_concedido = 1;
            break; // Interrompe o laço imediatamente ao acertar
        } else if (tentativas < 3) {
            printf("Senha incorreta! Tente novamente.\n\n");
        }
    }

    // Se após 3 tentativas o acesso não foi concedido
    if (!acesso_concedido) {
        printf("\nConta Bloqueada por Segurança!\n");
    }

    return 0;
}