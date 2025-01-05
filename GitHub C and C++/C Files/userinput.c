#include <stdio.h>
#include <string.h>

int main(){


    char name[25]; //bytes //array of strings
    int age;

    printf("What's your name?\n");
    //scanf("%s",&name); // doesn't receive space between names
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you?\n"); //printf is used to display something as output
    scanf("%d", &age); //scanf is used to read input; // the ampersand operator gives the memory address of age.

    printf("\nHello %s, how are you?",name);
    printf("\nYou are %d years old.",age);
    


    return 0;
}