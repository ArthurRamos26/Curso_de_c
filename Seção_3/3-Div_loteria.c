//. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao 
// valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador 
// apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor asdasd
#include<stdio.h>
int main(){
    float bet1, bet2, bet3, premio , val1 , val2, val3 ;
   

    printf("Digite as apostas feitas pelos amigos separadas por espaços e de enter para confirmar : ");
    scanf("%f%f%f",&bet1,&bet2,&bet3);
    printf("Digite  o valor do premio : ");
    scanf("%f",&premio);
  
    val1 =premio * (bet1  / (bet1 + bet2 + bet3));
    
    val2 =premio * (bet2  / (bet1 + bet2 + bet3));
    
    val3 =premio * (bet3  / (bet1 + bet2 + bet3));
    
    printf("Os valores ganhos proporcionais serão:\n\nDo primeiro amigo\nValor Apostado R$: %.2f \nValor Ganho R$: %.2f \n\nDo segundo amigo:\nValor Apostado R$: %.2f \nValor Ganho R$: %.2f \n\nDo terceiro  amigo:\nValor Apostado R$: %.2f \nValor Ganho R$: %.2f \n",bet1 , val1 , bet2 , val2 , bet3 , val3 );
    return 0;
    }