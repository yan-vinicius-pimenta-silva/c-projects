
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // 4) Crie um programa que resolva a questão da função horária da posição do Movimento Retilíneo
    // Uniforme:
    // S = 20 + 3*t
    // Leia dois instantes de tempo e exiba as respostas na tela para cada um. Verifique se os resultados
    // são iguais, caso contrário, indique o maior e o menor.

    int tempo1,tempo2,posicao1,posicao2;
    scanf("%d %d",&tempo1,&tempo2);

    posicao1 = ((20)+(3*tempo1));
    posicao2 = ((20)+(3*tempo2));

    if(posicao1 == posicao2){
        printf("As posições são iguais\n");
    }else if(posicao1 > posicao2){
        printf("A posição 1 é maior\n");
    }else{
        printf("A posição 2 é maior\n");
    }


    return 0;
}