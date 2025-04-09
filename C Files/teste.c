#include <stdio.h>
#include <string.h>  // Para usar strlen()

int main() {
    char palavra[100];
    int contador = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    // Remove o caractere de nova linha (\n) se estiver presente
    palavra[strcspn(palavra, "\n")] = '\0';

    // Contar as vogais
    for (int i = 0; i < strlen(palavra); i++) {
        // Verificar se o caractere é uma vogal
        char c = palavra[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;  // Se for uma vogal, incrementa o contador
        }
    }

    // Exibir a quantidade de vogais
    printf("Quantidade de vogais: %d\n", contador);

    return 0;
}
