
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // 1) Ler um número inteiro n. Escrever a soma de todos os números de 1 até n.

    int x;
    scanf("%d",&x);
    int soma = 0;
    for(int i = 1;i <= x;i++){
        soma = soma + i;
    }

    printf("O valor da soma é %d",soma);

    return 0;
}