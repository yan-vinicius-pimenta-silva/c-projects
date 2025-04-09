
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

 int codigo,quantidade;
 float preco,total;

 printf("Digite o código do produto e sua quantidade.\n");
 scanf("%d %d",&codigo,&quantidade);

 switch(codigo){
    case 1:
        preco = 4.00;
        break;
    case 2:
        preco = 4.50;
        break;
    case 3:
        preco = 5.00;
        break;
    case 4:
        preco = 2.00;
        break;
    case 5:
        preco = 1.50;
        break;
    default:
        printf("Digite um valor válido.\n"); 
 }

 total = preco * quantidade;

 printf("O valor total da conta é:R$%.2f\n.",total);

    return 0;
}