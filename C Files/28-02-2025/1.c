
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // 1) Faça um programa que calcule sua idade em dias e exiba a resposta na tela respeitando a seguinte
    // formatação “A idade de 35 anos corresponde, aproximadamente, 12775 dias de vida”. Considere
    // que um ano possua 365 dias. Depois, modifique o programa para aceitar duas idades e descobrir
    // qual pessoa é a mais velha.


    int idade1,idade2;
    scanf("%d %d",&idade1,&idade2);

    int dias1 = idade1 * 365;
    int dias2 = idade2 * 365;
    
    if(idade1 == idade2){
        printf("As idades são iguais.\n");
    } else if(idade1 > idade2){
        printf("A idade 1 é maior que a idade 2");
    } else{
        printf("A idade 2 é maior que a idade 1");
    }


    return 0;
}