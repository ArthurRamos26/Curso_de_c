//1. Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o
//maior valor. 
#include <stdio.h>
int ler_e_armazenar_e_maior_vet (){ //juntei todos os pedidos em uma função só 
    int tam , maior = 0 ;
       
    printf("Digite o tamanho do vetor : ");
    scanf("%d",&tam);
    int vet [tam];
    for(int i = 0 ; i < tam ; i ++){
        printf("Digite um número : ");
        scanf("%d",&vet[i]);
        if(i == 0 ){
            maior = vet[i];

        }
        else if(vet[i] > maior){
            maior = vet[i];

        }
       
    }
    printf("O maior numero e : %d",maior);
    return 0 ; 

}
int main (){
    ler_e_armazenar_e_maior_vet();
    return 0 ;
}