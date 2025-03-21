
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

// 6) Faça um programa que calcule e exiba na tela os volumes de três esferas, sendo fornecido o valor
// de seu raio (R). A fórmula para o cálculo é:
// V = 4/3 * PI * R 3
// Considere PI = 3.14159
// Além disso, seu programa deve ser capaz de indicar qual dos volumes é o maior dentre todos.

int raio1,raio2,raio3;
float vol1,vol2,vol3;

scanf("%d %d %d",&raio1,&raio2,&raio3);

vol1 = ((4/3)*3.14159*(raio1*raio1*raio1));
vol2 = ((4/3)*3.14159*(raio2*raio2*raio2));
vol3 = ((4/3)*3.14159*(raio3*raio3*raio3));

if(vol1 == vol2 && vol2 == vol3){
    printf("Os volumes são iguais.\n");
}else if(vol1 > vol2 && vol1 > vol3){
    printf("O volume 1 é o maior.\n");
}else if(vol2 > vol1 && vol2 > vol3){
    printf("O volume 2 é o maior.\n");
}else if(vol3 > vol1 && vol3 > vol2 ){
    printf("O volume 3 é o maior.\n");
}


    return 0;
}