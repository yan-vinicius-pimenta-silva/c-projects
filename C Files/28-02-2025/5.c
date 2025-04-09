
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // 5) Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos
    // (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

    int valor;
    int valores = 0;


    //inicializacao,condição,atualizacao
    for(int i = 0;i<6;i++){
    
        scanf("%d",&valor);

       
        if(valor > 0){
            valores++;
        }else{
    
            while(valor == 0){
                printf("Digite um valor válido:\n");
                scanf("%d",&valor);
            }
        }

        
       
    }

   
    printf("A quantidade de valores positivos digitados é %d",valores);



    return 0;
}