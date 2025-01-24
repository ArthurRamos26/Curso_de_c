// 2. Faça um programa que contenha duas variáveis inteiras. Leia estas variáveis do teclado. Em seguida,
// compare seus endereços e exiba o conteúdo do maior endereço.
#include <stdio.h>
int main(){
    int num1, num2 ; 
    int *p1 ; 
    int *p2 ; 
    printf("Digite um numero para comparar  seu endereco de memoria : ");
    scanf("%d",&num1);
    printf("Digite outro  numero para comparar  seu endereco de memoria : ");
    scanf("%d",&num2 );
    
    p1 = &num1 ; 
    p2 = &num2 ; 
    
  if (p1 > p2) {
        printf("O endereco do primeiro numero (%p) e maior, com o valor: %d\n", (void *)p1, *p1);
    } else {
        printf("O endereco do segundo numero (%p) e maior, com o valor: %d\n", (void *)p2, *p2);
    }

    return 0;
}