#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int code, quantity;
float price;

scanf("%d %d",&code,&quantity);

switch(code){
  case 1:
    price = 4.00;
  break;
  case 2:
    price = 4.50;
  break;
  case 3:
    price = 5.00;
  break;
  case 4:
    price = 2.00;
  break;
  case 5:
    price = 1.50;
  break;
}

float total = quantity * price;

printf("Total: R$ %.2f\n",total);

return 0;
}