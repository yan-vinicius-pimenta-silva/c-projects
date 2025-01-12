#include <stdio.h>

int main(){

    const double PI = 3.14159; // It's a constant because i don't wanna anybody else to change this value.
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * (radius * radius);
    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);
 
    return 0;

}