#include <stdio.h>

int main(){

    int code1;
    int units1;
    float price1;

    int code2;
    int units2;
    float price2;

    scanf("%d %d %f",&code1,&units1,&price1);
    scanf("%d %d %f",&code2,&units2,&price2);

    float total1 = units1 *price1;
    float total2 = units2 *price2;
    float final_total = total1+total2;

    printf("VALOR A PAGAR: R$ %.2f\n",final_total);


    return 0;
}