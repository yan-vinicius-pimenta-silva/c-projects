//lista de exercício 1 21/02/2025

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// 3) Crie um programa que resolva a questão da função horária da posição do Movimento
// Retilíneo Uniforme. Peça ao usuário que informe a quantidade de tempo para a seguinte
// função horária:

// S = 12 + 2.8*t

// Seu programa deve ser capaz de ler dois instantes de tempo e exibir as respostas na tela.

int main(){

    float tempo1,tempo2;
    scanf("%f %f",&tempo1,&tempo2);

    float posicao1 = (12 + (2.8*tempo1));
    float posicao2 = (12 + (2.8*tempo2));

    printf("Posição 1 = %.2f.\n",posicao1);
    printf("Posição 2 = %.2f.\n",posicao2);


    return 0;
}