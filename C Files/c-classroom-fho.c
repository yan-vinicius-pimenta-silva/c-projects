#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exercícios referentes à aula do dia 21-02-2025 de Programação Avançada em C;

int main(){

    //     1) Crie um programa que leia dois valores inteiros do teclado e escreva na tela:
    //     a. O dobro do primeiro número;
    //     b. A multiplicação entre o primeiro e o segundo número;
    //     c. O resto da divisão entre o primeiro e o segundo número;
    //     d. A divisão inteira entre o primeiro e o segundo número.


    printf("*******************Exercise 1*******************\n");

    int value1;
    int value2;

    printf("Type the first value: "); 
    scanf("%d", &value1); // % means format specifier
                          // & means Address of operator



    printf("Type the second value: ");
    scanf("%d", &value2);

    int doubleValue = value1 * 2;
    printf("The double value of the first value is: %d\n",doubleValue);

    int multiplicationValue = value1 * value2;

    printf("The multiplication of the first valuen and the second value is %d\n",multiplicationValue);

    int remainder = value1 % value2;

    printf("The remainder of the division is: %d\n",remainder);

    int integerDivision = value1 / value2;

    printf("The integer division of the two values is: %d\n", integerDivision);

    printf("**************************************\n");


    printf("*******************Exercise 2*******************\n");
   
    //     2) Faça um programa que calcule sua idade em dias e exiba a resposta na tela respeitando a
    //        seguinte formatação “A idade de 35 anos corresponde, aproximadamente, 12775 dias
    //        de vida”. Considere que um ano possua 365 dias. Depois, modifique o programa para
    //        aceitar duas idades e descobrir qual pessoa é a mais velha.

    int age;

    printf("Type here your age:\n ");
    scanf("%d",&age);

    int ageDays = (age * 365);

    printf("The age of %d corresponds to, approximately, %d days of life.\n",age,ageDays);

    int age1;
    int age2;

    printf("Type here the first age:\n");
    scanf("%d",&age1);
    printf("Type here the second age:\n");
    scanf("%d",&age2);

    if( age1 < 0 || age2 < 0){
        printf("You haven't been born yet.");

    } else if (age1 > age2){
        printf("The first age is greater than second age\n");
    } else{
        printf("The second age is greater than first age\n");
    }






    printf("**************************************\n");

    printf("*******************Exercise 3*******************\n");


//     3) Crie um programa que resolva a questão da função horária da posição do Movimento
//        Retilíneo Uniforme. Peça ao usuário que informe a quantidade de tempo para a seguinte
//        função horária:
//        Seu programa deve ser capaz de ler dois instantes de tempo e exibir as respostas na tela.

//        S = 12 + 2.8*t

        float time1;
        float time2;

        printf("Type the first time in seconds:\n");
        scanf("%f",&time1);

        printf("Type the second time in seconds:\n");
        scanf("%f",&time2);

        float position1 = (12 + (2.8*time1));
        float position2 = (12 + (2.8*time2));

        printf("The first position is %.2f meters\n",position1);
        printf("The second position is %.2f meters\n",position2);


    printf("**************************************\n");


    printf("*******************Exercise 4*******************\n");

//  4) Faça um programa que calcule e exiba na tela os volumes de três esferas, sendo fornecido
//     o valor de seu raio (R). A fórmula para o cálculo é:
//     V = 4/3 * PI * R³

//     Considere PI = 3.14159

    float radius1;
    float radius2;
    float radius3;

    printf("Type the first value of the radius:\n");
    scanf("%f",&radius1);

    printf("Type the second value of the radius:\n");
    scanf("%f",&radius2);

    printf("Type the third value of the radius:\n");
    scanf("%f",&radius3);

    float volumeOfSphere1 = ((4/3)*3.14159) * (radius1*radius1*radius1);
    float volumeOfSphere2 = ((4/3)*3.14159) * (radius2*radius2*radius2);
    float volumeOfSphere3 = ((4/3)*3.14159) * (radius3*radius3*radius3);

    printf("The volume of the sphere is %f\n",volumeOfSphere1);
    printf("The volume of the sphere is %f\n",volumeOfSphere2);
    printf("The volume of the sphere is %f\n",volumeOfSphere3);

    printf("**************************************\n");


    printf("*******************Exercise 5*******************\n");

//     5) Renatinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma
//        viagem, utilizando um automóvel que faz 13.8 KM/L. Para isso, ele pediu sua ajuda para
//        desenvolver um programa. Para efetuar o cálculo, é necessário informar o tempo gasto na
//        viagem (em horas) e a velocidade média durante ela (em km/h). Assim, pode-se obter
//        distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o
//        valor com 3 casas decimais após o ponto.

    float timeSpent;
    float velocity;

    printf("Type the time spent in hours:\n");
    scanf("%f",&timeSpent);

    printf("Type the velocity in km/h:\n");
    scanf("%f",&velocity);

    float position = velocity * timeSpent;
    float fuelLiters = position/13.8;

    printf("%.3f liters of fuel are necessary to make this travel.\n");







    printf("**************************************\n");


    return 0;
}