#include <stdio.h>

int main() {
    int senha_digitada;
    int contador_tentativas = 0; // 1. Criar o contador iniciando em 0

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);
        
        contador_tentativas++; // 2. Soma 1 a cada nova tentativa digitada

        if (senha_digitada != 1234) {
            printf("Senha incorreta, otário Tente novamente.\n\n");
        }
    } while (senha_digitada != 1234);

    // 3. Exibir o total de tentativas no final
    printf("Acesso permitido! Senha correta.\n");
    printf("Foram necessarias %d tentativas para acertar.\n", contador_tentativas);
    
    return 0;
}