#include <stdio.h>

int main(){

  int time;
  scanf("%d",&time);

  int speed;
  scanf("%d",&speed);

  float distance = (speed*time);
  float fuel = distance/12;


  printf("%.3f\n",fuel);




  return 0;
}