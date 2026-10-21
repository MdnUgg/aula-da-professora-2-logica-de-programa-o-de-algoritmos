#include <stdio.h>

int main() {
    int senha_digitada;

    // Executa o bloco de código primeiro, depois testa a condição
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);

        if (senha_digitada != 1234) {
            printf("Senha incorreta! Tente novamente.\n\n");
        }
    } while (senha_digitada != 1234); // Continua repetindo ENQUANTO a senha for errada

    printf("Acesso permitido! Senha correta.\n");
    return 0;
}