// 2. Crie um programa que tenha uma função recursiva que calcule e retorne o fatorial de um número inteiro N. dado a formula de fatoria fat = n*(n-1).......

#include<stdio.h>
int calc_fatorial(int n){
    if((n == 0 )||(n == 1 )){ //caso de ser o fatorial 0 ou fatorial de 1 
        return 1;
    }
   
    return n * (calc_fatorial(n-1)); //por se tratar de fatorial é a soma dele com o seu anterior e aq é so -1 pois vai empilhando os valores apos cada execuçes ;
    
}
int main (){
    int num ;
    printf("Digite um numero : ");
    scanf("%d",&num);    
    printf("%d",calc_fatorial(num));
    return 0  ;
}
