// . Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números
// maiores que 0.
#include <stdio.h>
int main (){
    int mult = 0, n=1 ; 
    while(mult != 5){
       if(n % 3 == 0 ){ //checa se o resto da divisão por 3 é 0 sendo assim multiplo 
        printf("%d E multiplo \n",n);
        mult++;
       }
        n++;
    }
    return 0 ; 
}