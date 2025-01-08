// Leia um número e imprima seu quadrado 
#include<stdio.h>
#include<math.h>
int main(){
    float num , pot;
    
    printf("Digite um número : ");
    
    scanf("%f",&num);
    
    pot = pow( num ,  2  );
    
    printf(" O numero ao quadrado e : %f", pot);
    
    return 0;
}