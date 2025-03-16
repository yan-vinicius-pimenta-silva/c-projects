#include <stdio.h>

int main(){

    //   Imagine you have a mailbox, and inside it, there's a letter. The mailbox has an address,
    //   and that address tells you where the letter is stored.

    //   Now, in programming:

    // - A variable is like the letter - it holds some information(a number, a word,etc.).
    // - A pointer is like the address of the mailbox -it tells you where the information is stored,
    //   instead of holding the actual information.

    //   Example:
    //   Let's say you have a number:

    //   int number = 10;

    //   This means number is a box holding 10.

    //   Now, we create a pointer:
    //   int *pointer = &number;

    //   Here's what happens:
      
    //   -pointer doesn't store 10, but instead, it stores the address of number;
    //   -&number means "get the address of number".

    //   To get the value from the pointer, we use * (this is called dereferencing);

    //   printf("%d",*pointer); // This prints 10

    //   Why use pointers?

    //   1.Efficiency - Instead of copying big chunks of data, we just pass the address;
    //   2.Memory management - We can manually control memory allocation;
    //   3.Dynamic data structures - Like linked lists and trees;

    // %p means pointer
    // & address of operator = operador de endereço
    // % placeholder = used to indicate that a specific type of value will be inserted at that point
    // in the string.




    int number = 10;
    int *pointer = &number;

    printf("The value of number is:%d\n",number);
    printf("The address of number is:%p\n",&number);
    printf("The value at the address of the number is:%d\n",*pointer);








    return 0;
}