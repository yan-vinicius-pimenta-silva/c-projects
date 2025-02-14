#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int MIN = 1;//for constants we declare the variables in UPPERCASE;    
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    //uses the current time as a seed to generate random numbers
    srand(time(0));

    //generate a random number between MIN & MAX
    answer = (rand() % (MAX - MIN + 1)) + MIN;

    // printf("Random number: %d", answer);

    do{
        printf("Enter a guess: ");
        scanf("%d",&guess);
        if(guess > answer){
            printf("Too high!\n");
        }
        else if (guess < answer){
            printf("Too low!\n");
        }
        else{
            printf("CORRECT!\n");
        }
        guesses++;

    }while(guess != answer);
    
    printf("************************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("************************\n");

    return 0;
}