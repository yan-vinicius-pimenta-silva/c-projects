
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

// 9) Modifique o programa do exercício anterior para calcular a resistência de 4 equipamentos. Qual
// desses equipamentos possui maior menor resistividade? Seu programa deverá exibir a resposta na
// tela.



    float t1,t2,t3,t4,p1,p2,p3,p4;
    
    scanf("%f %f %f %f %f %f %f %f",&t1,&t2,&t3,&t4,&p1,&p2,&p3,&p4);

    float i1 = p1/t1;
    float r1 = t1/i1;

    float i2 = p2/t2;
    float r2 = t2/i2;
    
    float i3 = p3/t3;
    float r3 = t3/i3;
    
    float i4 = p4/t4;
    float r4 = t4/i4;

    float resistance[4] = {r1,r2,r3,r4}; //{1,2,3,4}
    float maxResistance = resistance[0]; //Sempre considere o valor inicial do array como sendo o maior.


    printf("O valor da resistência do resistor 1 é: %.2f ohms.\n",r1);
    printf("O valor da resistência do resistor 2 é: %.2f ohms.\n",r2);
    printf("O valor da resistência do resistor 3 é: %.2f ohms.\n",r3);
    printf("O valor da resistência do resistor 4 é: %.2f ohms.\n",r4);

    for(int i =0;i < 4;i++){
       if(resistance[i] > maxResistance){
        maxResistance = resistance[i];
       }
    }

    printf("A maior resistência é do resistor %.2f",maxResistance);
    

   
    return 0;
}