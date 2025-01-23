// 3. Faça um programa que tenha uma função que dado um valor numérico de entrada, gere e imprima como
// saída o número de linhas com pontos de exclamação, conforme exemplo abaixo (para n = 5):
// !
#include<stdio.h>

void gerar_linhas(int linha){
    for(int i = 0 ; i < linha ; i++){
        for(int j = 0;j <= i;j++ ){
            printf("!");

        }
        
        printf("\n");
        //no caso a função recebe a quantidade de linhas que serão necessárias para printar e caso de a quantidade das linhas pula e vai para a proxima 
    }
    return 0 ; 
}
int main(){
    int linhas ; 
    printf("Digite a quantidade de linhas");
    scanf("%d",&linhas);
    gerar_linhas(linhas);
    return 0 ;
}