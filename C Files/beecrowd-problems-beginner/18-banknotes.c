#include <stdio.h>
<<<<<<< HEAD

int main(){

  


  return 0;
}
=======
#include <stdlib.h>
#include <math.h>

int main(){

int N;
scanf("%d",&N);

int n100 = N/100;
int n50 = (N%100)/50;
int n20 = ((N%100)-(n50*50))/20;
int n10 = (((N%100)-(n50*50)-(n20*20))/10);
int n5 =  (((N%100)-(n50*50)-(n20*20)-(n10*10))/5);
int n2 =  (((N%100)-(n50*50)-(n20*20)-(n10*10)-(n5*5))/2);
int n1 =  (((N%100)-(n50*50)-(n20*20)-(n10*10)-(n5*5)-(n2*2))/1);



printf("%d\n",N);
printf("%d nota(s) de R$ 100,00\n",n100);
printf("%d nota(s) de R$ 50,00\n",n50);
printf("%d nota(s) de R$ 20,00\n",n20);
printf("%d nota(s) de R$ 10,00\n",n10);
printf("%d nota(s) de R$ 5,00\n",n5);
printf("%d nota(s) de R$ 2,00\n",n2);
printf("%d nota(s) de R$ 1,00\n",n1);

    return 0;
}
>>>>>>> 55ebc8876db74fff13f0073c37443e027aeb3d92
