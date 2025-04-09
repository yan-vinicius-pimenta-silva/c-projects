
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // 2) Ler um número inteiro n. Escrever a soma de todos os números pares de 2 até n.

    int x;
    scanf("%d",&x);
    int soma = 0;

    for(int i = 1;i <= x;i++){
        if(i%2 == 0){
            soma = soma + i;
        }
    }

    printf("A soma dos números pares é:%d",soma);
    return 0;
}