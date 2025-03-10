#include <stdio.h>
#include <stdlib.h>

int main(){

  int a,b,c;

  scanf("%d %d %d",&a,&b,&c);

  int maiorab = (a+b+abs(a-b))/2;
  int maior = (maiorab + c + abs(maiorab - c))/2;

  printf("%i eh o maior\n",maior);

  return 0;
}