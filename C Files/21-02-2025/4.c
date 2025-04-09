#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

//     4) Faça um programa que calcule e exiba na tela os volumes de três esferas, sendo fornecido
// o valor de seu raio (R). A fórmula para o cálculo é:
// V = 4/3 * PI * R 3

// Considere PI = 3.14159

float raio1,raio2,raio3,vol1,vol2,vol3;
scanf("%f %f %f",&raio1,&raio2,&raio3);

vol1 = ((4/3))*(3.14159)*(raio1*raio1*raio1);
vol2 = ((4/3))*(3.14159)*(raio2*raio2*raio2);
vol3 = ((4/3))*(3.14159)*(raio3*raio3*raio3);

printf("Vol 1 = %.2f.\n",vol1);
printf("Vol 2 = %.2f.\n",vol2);
printf("Vol 3 = %.2f.\n",vol3);

    return 0;
}