// 2. Faça um programa que receba do usuário o nome de um arquivo texto e mostre na tela quantas linhas
// este arquivo possui.
#include<stdio.h>
int main(){
    FILE *arq ;
    int contador_pula_linha = 1  ; // o contador começa em um pois a ultima linha nao possui /n portanto nao contabilizaria usando esse raciocinio 
    char c ; 
    arq = fopen("arq.txt","r");
    if (arq){
    while ((c = getc(arq))!= EOF ){
        if (c == '\n'){
            contador_pula_linha++;
        }
    }
    printf("O arquivo possui %d linhas ",contador_pula_linha);
    }
    
    else{
        printf("Arquivo nao encontrado ");
        
    }
    fclose(arq);
    
    return 0 ; 
}