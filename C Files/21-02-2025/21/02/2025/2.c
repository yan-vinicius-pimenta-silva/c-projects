#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

//     2) Faça um programa que calcule sua idade em dias e exiba a resposta na tela respeitando a
// seguinte formatação “A idade de 35 anos corresponde, aproximadamente, 12775 dias
// de vida”. Considere que um ano possua 365 dias. Depois, modifique o programa para
// aceitar duas idades e descobrir qual pessoa é a mais velha.

int idade;
scanf("%d",&idade);
int dias = idade * 365;

printf("A idade de %d anos corresponde,aproximadamente, %d dias de vida.\n",idade,dias);

    return 0;
}