#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

  double number;
  scanf("%lf",&number);
  
  int integer = number;
  int n100 = integer/100 ;
  int n50 = integer%100/50;
  int n20 = (integer%100%50)/20;
  int n10 = (integer%100%50%20)/10;
  int n5 = (integer%100%50%20%10)/5;
  int n2 = (integer%100%50%20%10%5)/2;
  int c1 = (integer%100%50%20%10%5%2)/1;
  


  double centavos = fmod(number,1.0);
  int centavos_int = round(centavos*100);

  int c050 = centavos_int/50;
  centavos_int %= 50;
  int c025 = centavos_int/25;
  centavos_int %= 25;
  int c010 = centavos_int/10 ;
  centavos_int %= 10;
  int c005 = centavos_int/5;
  centavos_int %= 5;
  int c001 = centavos_int / 1;


  printf("NOTAS:\n");
  printf("%d nota(s) de R$100.00\n",n100);
  printf("%d nota(s) de R$50.00\n",n50);
  printf("%d nota(s) de R$20.00\n",n20);
  printf("%d nota(s) de R$10.00\n",n10);
  printf("%d nota(s) de R$5.00\n",n5);
  printf("%d nota(s) de R$2.00\n",n2);
  printf("MOEDAS:\n");

  printf("%d moeda(s) de R$1.00\n",c1);
  printf("%d moeda(s) de R$0.50\n",c050);
  printf("%d moeda(s) de R$0.25\n",c025);
  printf("%d moeda(s) de R$0.10\n",c010);
  printf("%d moeda(s) de R$0.05\n",c005);
  printf("%d moeda(s) de R$0.01\n",c001);


  return 0;
}