//lista de exercício 1 21/02/2025

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

//     5) Renatinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma
// viagem, utilizando um automóvel que faz 13.8 KM/L. Para isso, ele pediu sua ajuda para
// desenvolver um programa. Para efetuar o cálculo, é necessário informar o tempo gasto na
// viagem (em horas) e a velocidade média durante ela (em km/h). Assim, pode-se obter
// distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o
// valor com 3 casas decimais após o ponto.

    float tempo,velocidade;
    scanf("%f %f",&tempo,&velocidade);

    float dist = velocidade*tempo;
    float litros  = dist/13.8;
    
    printf("São necessários %.3f litros de combustível.\n",litros);



    return 0;
}