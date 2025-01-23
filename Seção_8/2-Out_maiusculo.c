// 2. Faça um programa que tenha uma função que, dado um caractere qualquer de entrada, retorne o mesmo
// caractere sempre em maiúsculo. 
// a função toupper() serve para colocar o caractere em maiúsculo

#include <stdio.h>
#include<ctype.h>

char retorna_caractere (char letra){
    printf("A letra em maisculo fica : %c",toupper(letra)) ;
    return 0 ;  

}
int main(){
    char letra ; 
    printf("Digite uma letra para retornar ela em maiusculo : ");

    scanf("%c",&letra);
    retorna_caractere(letra);

    return 0 ; 
} 