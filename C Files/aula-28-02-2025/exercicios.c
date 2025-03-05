#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
printf("*******************Exercise 1*******************\n");
   
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


if( age1 == age2){
    printf("The ages are equal\n");
}
else if( age1 < 0 || age2 < 0){
    printf("You haven't been born yet.");

} else if (age1 > age2){
    printf("The first age is greater than second age\n");
} else{
    printf("The second age is greater than first age\n");
}



printf("**************************************\n");

printf("*******************Exercise 2*******************\n");

//  2) Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou
//     "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si. Lembre-se de utilizar o
//     operador de resto da divisão (%).

int valueA;
int valueB;

printf("Type the first value:\n");
scanf("%d",&valueA);

printf("Type the second value:\n");
scanf("%d",&valueB);

float remainder = valueA % valueB;
float remainder2 = valueB % valueA;


if(remainder == 0 || remainder2 ==0){
    printf("Sao Multiplos\n");
}else{
    printf("Nao sao Multiplos\n");
}

printf("**************************************\n");

printf("*******************Exercise 3*******************\n");

// 3) Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade
// deste item. A seguir, calcule e mostre o valor da conta a pagar.





printf("**************************************\n");

int codigo;
int quantidade;
float preco;
float total;

printf("1 - Cachorro Quente: R$4.00\n");
printf("2 - X-Salada: R$4.50\n");
printf("3 - X-Bacon: R$5.00\n");
printf("4 - Torrada Simples: R$2.00\n");
printf("5 - Refrigerante: R$1.50\n");

printf("Digite qual o item que deseja comprar e a quantidade:");
scanf("%d %d",&codigo,&quantidade);

switch(codigo){
    case 1:
        preco = 4.00;
         break;
    case 2:
        preco = 4.50;
        break;
    case 3:
        preco = 5.00;
        break;
    case 4:
        preco = 2.00;
        break;
    case 5:
        preco = 1.50;
        break;

}

total = quantidade * preco;

printf("O total a pagar e $%.2f\n",total);

printf("*******************Exercise 4*******************\n");
// 4) Crie um programa que resolva a questão da função horária da posição do Movimento Retilíneo
//    Uniforme:
//    S = 20 + 3*t
//    Leia dois instantes de tempo e exiba as respostas na tela para cada um. Verifique se os resultados
//    são iguais, caso contrário, indique o maior e o menor.

float tempo1;
float tempo2;

printf("Digite aqui o primeiro valor de tempo:\n");
scanf("%f",&tempo1);
printf("Digite aqui o segundo valor de tempo:\n");
scanf("%f",&tempo2);

float posicao1 = (20)+(3*(tempo1));
float posicao2 = (20)+(3*(tempo2));

if(posicao1 == posicao2){
    printf("As posicoes sao iguais.\n");
} else if(posicao1 > posicao2){
    printf("A posicao 1 e maior que a posicao 2.\n");
}else{
    printf("A posicao 2 e maior que a posicao 1.\n");
}


printf("**************************************\n");

printf("*******************Exercise 5*******************\n");

// 5) Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos
//    (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

float valor;
int positivos = 0;

for (int i = 0; i <6; i++){
    scanf("%f",&valor);

    while(valor ==0){
        printf("Este valor nao e valido!Digite outro numero\n");
        scanf("%f",&valor);
    }

    if(valor>0){
        positivos++;
    }
}

printf("O total de valores positivos e:%d\n",positivos);




printf("**************************************\n");

printf("*******************Exercise 6*******************\n");


// 6) Faça um programa que calcule e exiba na tela os volumes de três esferas, sendo fornecido o valor
//    de seu raio (R). A fórmula para o cálculo é:
//    V = 4/3 * PI * R 3
//    Considere PI = 3.14159
//    Além disso, seu programa deve ser capaz de indicar qual dos volumes é o maior dentre todos.

float raio1,raio2,raio3;
float vol1,vol2,vol3;

printf("Digite o raio 1:\n");
scanf("%f",raio1);
printf("Digite o raio 2:\n");
scanf("%f",raio2);
printf("Digite o raio 3:\n");
scanf("%f",raio3);

vol1 = (4/3) * 3.14159 * (raio1*raio1*raio1);
vol2 = (4/3) * 3.14159 * (raio2*raio2*raio2);
vol3 = (4/3) * 3.14159 * (raio3*raio3*raio3);

if(vol1 == vol2 == vol3){
    printf("Os volumes são iguais\n");
} else if(vol1 > vol2 && vol1 > vol3){
    printf("O volume 1 é maior que todos\n");
} else if(vol2> vol1 && vol2> vol3){
    printf("O volume 2 é maior que todos\n");
} else{
    printf("O volume 3 é maior que todos\n");
}



printf("**************************************\n");

printf("*******************Exercise 7*******************\n");

// 7) Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto
//    em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um
//    dos eixos cartesianos ou na origem (x = y = 0).
//    Se o ponto estiver na origem, escreva a mensagem “Origem”.
//    Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

float x;
float y;

printf("Digite o valor de x:\n");
scanf("%f",&x);
printf("Digite o valor de y:\n");
scanf("%f",&y);

if(x == 0 && y == 0){
    printf("O ponto está na origem do plano cartesiano\n");
}
else if(x == 0 && y !=0){
    printf("O ponto está no eixo Y.\n");
}
else if(y == 0 && x !=0){
    printf("O ponto está no eixo X.\n");
}
else if(x>0 && y>0){
    printf("O ponto está no Q1\n");
}else if(x>0 && y<0){
    printf("O ponto está no Q4\n");
}else if(x<0 && y>0){
    printf("O ponto está no Q2\n");
}else if(x<0 && y<0){
    printf("O ponto está no Q3\n");
}


printf("**************************************\n");

printf("*******************Exercise 8*******************\n");

printf("**************************************\n");





return 0;
}