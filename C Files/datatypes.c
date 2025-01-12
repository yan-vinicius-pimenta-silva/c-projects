#include <stdio.h>

int main(){
    int num = 10;     // Inteiro
    float pi = 3.14;  // Ponto flutuante
    char letter = 'A'; // Caractere
    unsigned int age = 25; // Apenas positivo
    long int bigNumber = 123456789; // Número grande

    printf("Integer:%d\n",num);
    printf("Float:%.2f\n",pi);
    printf("Char: %c\n", letter);
    printf("Unsigned: %u\n",age);
    printf("Long Int: %ld\n",bigNumber);

    return 0;
}