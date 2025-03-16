#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d years old", *pAge);
}

int main(){

    //pointer = a "variable-like" reference that holds a memory address to another variable,
    //array etc
    //some tasks are performed more easily with pointers
    // * = indirection operator (value at address)

    // Advantages of using pointers;
    // Less time in program execution;
    // Working on the original variable;
    // With the help of pointers, we can create data structures(linked-list,stack,queue);
    // Returning more than one values from functions;
    // Searching and sorting large data very easily;
    // Dynamically memory allocation;

    int age = 21;
    int *pAge = NULL;
    pAge = &age;


    // printf("Address of age: %p\n", &age);
    // printf("Address of pAge: %p\n", pAge);

    // printf("Size of age: %d bytes\n", sizeof(age));
    // printf("Size of age: %d bytes\n", sizeof(pAge));


    // printf("Value of age: %d\n",age);
    // printf("Value at stored address : %d\n",*pAge); //dereferencing

    printAge(age);



    return 0;
}