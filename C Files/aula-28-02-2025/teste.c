#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, chute, tentativas = 0;
    srand(time(NULL));
    numero = rand() % 100 + 1; // Número entre 1 e 100

    printf("Adivinhe o número entre 1 e 100!\n");

    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute < numero) {
            printf("Muito baixo!\n");
        } else if (chute > numero) {
            printf("Muito alto!\n");
        } else {
            printf("Parabéns! Você acertou em %d tentativas.\n", tentativas);
        }
    } while (chute != numero);

    return 0;
}
