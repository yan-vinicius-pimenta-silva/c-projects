#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int A,B,C,D;
  scanf("%d %d %d %d",&A,&B,&C,&D);

  int sumcd = C+D;
  int sumab = A+B;

  
  if(B > C && D > A && sumcd > sumab && C > 0 && D > 0 && A %2 == 0 ){
    printf("Valores aceitos\n");
  }else{
    printf("Valores nao aceitos\n");
  }

  return 0;
}