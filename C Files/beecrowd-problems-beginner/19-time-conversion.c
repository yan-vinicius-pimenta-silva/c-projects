#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int duration;
scanf("%d",&duration);

int hours = duration/3600;
int remainder_hours = duration % 3600;

int minutes = remainder_hours /60;
int remainder_minutes = hours % 60;

int seconds = remainder_hours % 60;

printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;
}