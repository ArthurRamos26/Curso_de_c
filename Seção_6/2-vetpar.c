/*2. Faça um programa que leia um vetor de 10 posições. Conte e mostre quantos valores pares ele possui */
#include <stdio.h>
int main (){
    int vet[10] ,   pares = 0;
    int par[10] , j = 0 ;
    for (int i = 0 ; i <10 ; i++ ){
        printf("Digite um numero ");
        scanf("%d",&vet[i]);

        if ( vet[i] % 2 == 0 ){
            par[j++] = vet[i];
            pares ++;
        }
    }
    printf("\nTotal de numeros pares: %d\n", pares);
    printf("Numeros pares: ");
    for (int i = 0; i < pares; i++) {
        printf("%d ", par[i]); 
    }
    return 0 ; 
}
