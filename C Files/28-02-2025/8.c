
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // 8) Faça um programa que calcule a RESISTÊNCIA de um equipamento dado as seguintes informações:
    // a. O usuário irá informar a tensão;
    // b. O usuário irá informar a potência do equipamento;
    // Sabendo que:
    // Equação 1: P(potência) = U(tensão).I(corrente)
    // Equação 2: U(tensão)=R(resistência).I(corrente)
    // Manipule as equações de tal forma a encontrar a equação para descobrir a resistência.


    float t,p;
    scanf("%f %f",&t,&p);

    float i = p/t;
    float r = t/i;

    printf("O valor da resistência do resistor é: %.2f ohms.\n",r);






    return 0;
}