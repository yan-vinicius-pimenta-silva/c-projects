#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(){

    // logical operators = || (OR) checks if at least one condition is true

    float temp = -1000;

    if(temp <= 0 || temp >= 30 || ){
        printf("\nThe weather is bad!");
    }
    else if(temp >= 30){
        printf("\nThe weather is bad");
    }
    else{
        printf("\nThe weather is good!");
    }

    return 0;
}