// #include <stdio.h>

// int main() {

//     //switch = A more efficient alternative to using many "else if" statements
//     //         allows a value to be tested for equality against many cases


//     char grade;

//     printf("\nEnter a letter grade: ");
//     scanf("%c", &grade);

//     if(grade == 'A'){
//         printf("perfect!\n");
//     }
//     else if(grade == 'B'){
//         printf("You did good!\n" );
//     }
//     else if(grade == 'C'){
//         printf("You did okay\n");
//     }
//     else if(grade == 'D'){
//         printf("At least it's not an F\n");
//     }
//     else if(grade == 'F'){
//         printf("YOU FAILED\n");
//     }
//     else{
//         printf("This is not a valid grade\n");
//     }



//     return 0;
// }

//The switch statement can do better with less lines of code...
// It's considered poor practice to use lots of if statements...
// case 'W':
//  printf("A WINNER IS YOUUU!!");
//  break;

#include <stdio.h>

int main() {

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A' :
            printf("perfect!\n");
            break;
        case 'B' :
            printf("You did good!\n");
            break;
        case 'C' :
            printf("You did okay\n");
            break;
        case 'D' :
            printf("At least it's not an F!\n");
            break;
        case 'F' :
            printf("YOU FAILED!\n");
            break;
        default:
            printf("This is not a valid grade!\n");
        break;
    }

    return 0;

}