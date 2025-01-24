// 3. Faça um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética
// de ponteiros, leia este array do teclado e imprima o dobro de cada valor lido.
#include <stdio.h>
int main(){
    int * p ; 
    int vetor[5]; //declara o vetor 
    
    for (int i = 0 ; i < 5 ; i++){ // recebe os valores do vetor 
        printf("Digite o numero %d/5  : ", i + 1  );
        scanf("%d" , &vetor[i]);
        
    }
    for (int  i = 0 ; i < 5 ; i++){
        p = &vetor[i] ; //da o endereço do ponteiro como o vetor 
        *p = *p * 2 ; // incrementa o ponteiro 
        
        printf("%d \n",vetor[i]);
        
    }
}