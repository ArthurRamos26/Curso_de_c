// 3. Crie um programa que tenha uma função recursiva que receba um valor inteiro e converta este número
// para binário.
#include <stdio.h>
#include<math.h>
void binario (int n){//void nao retorna nd 
    
    if (n > 1 ){ // nos dois primeiros casos nao tem como transformar em binario pois é dois 
    binario(n/2);//divide por dois em cada loop 
    }
    printf("%d",n%2); // printa  o resultado 
    return 0 ;
}
int main (){
    binario(11);
    return 0 ; 
}