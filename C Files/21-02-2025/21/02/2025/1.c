//lista de exercício 1 21/02/2025

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

// 1) Crie um programa que leia dois valores inteiros do teclado e escreva na tela:
// a. O dobro do primeiro número
// b. A multiplicação entre o primeiro e o segundo número
// c. O resto da divisão entre o primeiro e o segundo número
// d. A divisão inteira entre o primeiro e o segundo número;

int a,b;
scanf("%d %d",&a,&b);

int c = 2*a;
int d = a*b;
int e = a%b;
int f = a/b;

printf("O dobro do primeiro número é: %d\n",c);
printf("A multiplicação entre o primeiro e o segundo é: %d\n",d);
printf("O resto da divisão entre o primeiro e o segundo é: %d\n",e);
printf("A divisão inteira entre o primeiro e o segundo é: %d\n",f);

    return 0;
}