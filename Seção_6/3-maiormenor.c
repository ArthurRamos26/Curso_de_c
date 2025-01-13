/*3. Faça um programa que leia 10 números e escreva o maior e o menor valor lido.*/ 
//obs essa é a questaop 3 da ultima lista refeita utilizando vetores 
#include <stdio.h>

int main(){
    int vet[10], maior = 0 , menor = 0 ;
    for (int i = 0 ; i < 10 ; i++){
        printf("Digite um numero ");
        scanf("%d",&vet[i]);
        if (i == 0 ){
            maior = menor = vet[i]; // caso seja o primeiro numero 

        }
        else if(vet[i]< menor){
            menor = vet[i];
        }
        else if(maior < vet[i]){
            maior = vet[i];
        }
    
    }
    printf("O maior numero lido foi : %d\n e o menor numero lido foi: %d",maior , menor);
    return 0 ; 
}