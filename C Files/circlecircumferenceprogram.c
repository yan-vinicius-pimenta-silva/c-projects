#include <stdio.h>
#include <math.h>

int main() {

    double circumferenceRadius;

    const double PI  = M_PI;
    printf("%.15lf\n", PI);


    printf("Type the value of the radius:\n");
    scanf("%lf", &circumferenceRadius);
    double circumferenceValue = (2 * PI * circumferenceRadius);

    printf("The value of the circumference is: %.15lf units of measure\n ", circumferenceValue);


    return 0;
}