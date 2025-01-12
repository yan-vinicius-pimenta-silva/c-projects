#include <stdio.h>
#include <stdbool.h> //If working with booleans include this library

int main() {

    // logical operators = && (AND) checks if two conditions are true

    // && = AND
    // || = OR
    // ! = NOT

    float temp = 25;
    bool sunny = true;


    if(temp >= 0 && temp <= 35 && sunny){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }



    return 0;
}