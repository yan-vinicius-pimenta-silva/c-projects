#include <stdio.h>

int main() {

    //nested-loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns);


    // Limpar o buffer de entrada para evitar problemas com o caractere residual
    

    getchar(); // Para consumir o caractere de nova linha residual
    
     //brocode used scanf("%c"); but it doesn't work

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++){

        for(int j = 1; j <= columns; j++){

            printf("%c", symbol);
        }
        printf("\n"); 
    }


    return 0; 
}