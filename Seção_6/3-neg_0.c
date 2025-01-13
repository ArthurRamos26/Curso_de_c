// Faça um programa que leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
// possuírem valores negativos.
#include<stdio.h>
int main (){
    int vet[10];
    for (int i = 0 ; i < 10 ; i++){
        printf("Digite um numero ");
        scanf("%d",&vet[i]);
        if(vet[i] < 0 ){ // checa a condição dada 
            vet[i] = 0 ;
        }
    }
    for (int i = 0 ; i < 10 ; i ++ ){
        printf("Vet [%d] = %d\n", i , vet[i]);
    }
    return 0 ; 
}