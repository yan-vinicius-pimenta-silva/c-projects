#include <stdio.h>
#include <stdbool.h>

int main() {

    // logical operatros = ! (NOT) reverses the state of a condition

    bool sunny = false;

    if(!sunny){ //true represents 1 and false represents 0 
                // you can either use (sunny == true), (sunny == 1) and (sunny).
                // !sunny 
        printf("\nIt's cloudy outside!");
    }
    else{
        printf("\nIt's sunny outside!");

    }
    return 0;
}