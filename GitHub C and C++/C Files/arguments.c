#include <stdio.h>

void birthday(char x[], int y) { //parameters are what a fucntion expects when it's invoked

    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!", y);
}

int main() {


    char name[] = "Bro"; //arguments are what you're sending a function
    int age = 21;
     

    birthday(name,age); 


    return 0;

}

//functions can't see insider another functions
//arguments are what you're sending a function
//parameters are what a fucntion expects when it's invoked

//Parâmetros são as variáveis na declaração da função que esperam receber os valores.
//Argumentos são os valores passados para a função durante sua chamada;