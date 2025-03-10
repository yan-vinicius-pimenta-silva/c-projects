#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

  float number;
  scanf("%f",&number);
  
  int integer = number;

  int n100 = integer/100 ;
  int n50 = integer%100/50;
  int n20 = (integer%100%50)/20;
  int n10;
  int n5 ;
  int n2 ;
  
  printf("%d\n",n100);
  printf("%d\n",n50);
  printf("%d\n",n20);

  int c1 ;
  int c050 ;
  int c025 ;
  int c010 ;
  int c005 ;
  int c001 ;




  return 0;
}