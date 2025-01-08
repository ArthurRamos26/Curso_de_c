//faça um programa que Leia quatro notas, calcule a média aritmética e imprima o resultado.
#include <stdio.h>
int main(){
    float  val1,val2,val3,val4 , media; 
    
    printf("Digite as quatro notas separadas por espaco e de enter para confirmar : ");
    scanf("%f%f%f%f",&val1 ,&val2 ,&val3 ,&val4);
    
    media = (val1 + val2 + val3 + val4)/4 ; 
    printf("As medias das notas %.2f , %.2f , %.2f ,%.2f sera : %.2f  ",val1 , val2 , val3 ,val4,media);
}