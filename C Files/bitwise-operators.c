#include <stdio.h>
#include <stdlib.h>

int main(){

    // BITWISE OPERATORS = special operators used in bit level programming
    //                     (knowing binary is important for this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift

    int x = 6; //Binary representation = 0110 in 8bits = 1byte = 00000110
    int y = 12; //Binary representation = 1100 in 8bits = 00001100
    int z = 0; //Binary representation = 0000 in 8bits = 000000000
    //                                                   000000100

    z = x & y;
    printf("AND = %d\n",z);

    z = x | y;
    printf("OR = %d\n",z);

    z = x ^ y;
    printf("XOR = %d\n",z);

    z = x << 1;
    printf("SHIFT LEFT = %d\n",z);

    z = x >> 1;
    printf("SHIFT RIGHT = %d\n",z);

    


    return 0;
} 