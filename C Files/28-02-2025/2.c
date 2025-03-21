
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // 2) Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou
    // "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si. Lembre-se de utilizar o
    // operador de resto da divisão (%).

    int A,B;
    scanf("%d %d",&A,&B);

    int resto1 = A%B;
    int resto2 = B%A;

    if(resto1 == 0 || resto2 == 0){
        printf("São multiplos.\n");
    }else{
        printf("Não são multiplos.\n");
    }



    return 0;
}