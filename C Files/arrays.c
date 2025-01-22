#include <stdio.h>

int main() {

    // array = a data structure that can store many values of the same data type

    double prices[5];

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 25.0;
    prices[4] = 30.0;
    prices[5] = 35.0;

    printf("%.2lf", prices[1]);
    return 0;
}