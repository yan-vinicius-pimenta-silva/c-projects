//5-1-2025

#include <stdio.h>
#include <math.h>

int main() {

    // hypotenuse = sqrt((a * a) + (b * b));

    const float a;
    const float b;
    


    printf("\nType the value of the side A of the triangle:");
    scanf("%f", &a );

    printf("\nType the value of the side B of the triangle:");
    scanf("%f", &b);

    const float hypotenuse = sqrt((a*a)+(b*b));

    printf("\nThe value of the hypotenuse is: %.2f",hypotenuse);



    return 0;
}