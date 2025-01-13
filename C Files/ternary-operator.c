#include <stdio.h>



int findMax(int x, int y)
{

    // if(x>y)
    // {
    //     return x;
    // }
    // else 
    // {
    //     return y;
    // }

    // The if/else statement above can be substituted by the following ternary statement:
    // return (x > y) ? x : y ;
    return (x > y) ? x : y;

    // Traduzindo : retorne o valor de 'x' se 'x' for maior que 'y', caso contrário, retorne o valor de 'y'.

}

int main() 

{

    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false

    int max = findMax(5, 4);

    printf("%d",max);


    return 0;

}