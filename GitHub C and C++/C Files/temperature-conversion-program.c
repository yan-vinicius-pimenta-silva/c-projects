#include <stdio.h>
#include <ctype.h>

int main() {

    char temperatureUnit;

    float temperatureValue;

    char convertTo;

  



    printf("Is the temperature in (C), (F) or (K) ?\n");
    scanf("%c",&temperatureUnit);
    printf("What's the value of the temperature?");
    scanf("%f", &temperatureValue);
    while (getchar() !=)



    float celsiusToFahrenheit = ((temperatureValue * (9.0/5.0)) + 32);
    float celsiusToKelvin = (temperatureValue + 273.15);

    float fahrenheitToCelsius = ((temperatureValue-32) / 1.8);
    float fahrenheitToKelvin = (((temperatureValue - 32)/1.8) + 273.15);

    float kelvinToCelsius = (temperatureValue - 273.15);
    float kelvinToFahrenheit = (((temperatureValue - 273.15) * (9.0/5.0)) + 32);




    switch(temperatureUnit){
        case 'C':
            printf("To which temperature you want to convert it?\n");
            scanf("%c",&convertTo);

            switch(convertTo){
                case 'C':
                    printf("The temperature is already converted!\n");
                break;

                case 'F':
                    printf("The temperature is: %f", celsiusToFahrenheit);
                break;

                case 'K':
                    printf("The temperature is: %f",celsiusToKelvin);
                break;

                default:
                    printf("This is not a valid temperature!\n");
                break;
            }

        break;

        case 'F':
            printf("To which temperature you want to convert it?\n");
            scanf("%c",convertTo);

            switch(convertTo) {
                case 'C':
                    printf("The temperature is: %f",fahrenheitToCelsius);
                break;

                case 'F':
                    printf("The temperature is already converted!\n");
                break;

                case 'K':
                    printf("The temperature is: %f", fahrenheitToKelvin);
                break;

                default:
                    printf("This is not a valid temperature!");
                break;
            }

        break;

        case 'K':
            printf("To which temperature you want to convert it?\n");
            scanf("%c",convertTo);

            switch(convertTo){

                case 'C':
                    printf("The temperature is: %f",kelvinToCelsius);
                break;

                case 'F':
                    printf("The temperature is %f",kelvinToFahrenheit);
                break;

                case 'K':
                    printf("The temperature is already converted!");
                break;

                default:
                    printf("This is not a valid temperature!");
                break;

            }

        break;
    }


    return 0;
}