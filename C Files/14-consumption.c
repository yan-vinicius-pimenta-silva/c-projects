#include <stdio.h>

int main(){

  int X;
  float Y;

  scanf("%d",&X);
  scanf("%f",&Y);

  float consumption = X/Y;

  printf("%.3f km/l\n",consumption);

  return 0;
}