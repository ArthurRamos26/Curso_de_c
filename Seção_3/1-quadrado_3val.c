// programa que le tres valores e apresenta a soma do quadrado deles.

#include <stdio.h>
#include <math.h>

int main() {
   
   int val1 , val2, val3, soma=0;
   
   printf("Digite tres valores separados por espacos e de enter para confirmar :");
   
   scanf("%d%d%d",&val1,&val2,&val3);
   
   soma = (pow(val1,2)+ pow(val2,2) + pow(val3,2));
   
   printf("A soma dos numeros e : %d",soma);
   
   return 0 ; 


}