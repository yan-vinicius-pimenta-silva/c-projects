
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

// 7) Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto
// em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um
// dos eixos cartesianos ou na origem (x = y = 0).
// Se o ponto estiver na origem, escreva a mensagem “Origem”.
// Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.


float x,y;
scanf("%f %f",&x,&y);


    if(x == 0 && y == 0){
        printf("O ponto está na origem.\n");
    }else if(x == 0 && y > 0 || y < 0){
        printf("Eixo Y");
    }else if(y == 0 && x > 0 || x < 0){
        printf("Eixo X");
    }else if(y>0 && x > 0){
        printf("O ponto está em Q1");
    }else if(y > 0 && x <0){
        printf("O ponto está em Q2");
    }else if(y < 0 && x < 0){
        printf("O ponto está em Q4");
    }else if(y < 0 && x > 0){
        printf("O ponto está em Q3");
    }

    




    return 0;
}