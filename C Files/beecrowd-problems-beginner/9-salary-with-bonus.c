#include <stdio.h>

int main(){

    char name[25];
    scanf("%s",&name);

    float salary;
    float extra_sale;

    scanf("%f",&salary);
    scanf("%f",&extra_sale);

    double bonus = ((0.15*extra_sale)+salary);

    printf("TOTAL = R$ %.2lf\n",bonus);









    return 0;
}