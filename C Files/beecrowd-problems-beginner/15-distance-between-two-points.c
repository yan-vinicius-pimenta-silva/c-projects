#include <stdio.h>


int main(){

  int distance;
  scanf("%d",&distance);

  //car X = 60km/h;
  //car Y = 90km/h;


  //relative speed = speed of car Y - speed of car X;
  //relative speed = 90 - 60 = 30km/h;
  //Convert relative speed into distance per minute: 30/60 = 0.5km/min
  // speed = distance/time

 float time = distance/0.5;

 printf("%.0f minutos\n",time);







  return 0;
}
