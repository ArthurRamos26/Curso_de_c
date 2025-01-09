// 2. Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo 
// seu valor na tela, até que seu valor seja 100000 (cem mil).
#include  <stdio.h>
int main(){
    for(int  i = 0 ; i <= 100000; i = i + 100 ){ 
        printf("%d\n",i); // printa o numero 
        //incrementa de 100 em 100 
    }
    return 0 ; 
}