// 3. Faça um programa que receba do usuário o nome de um arquivo texto e um caractere. Mostre na tela
// quantas vezes aquele caractere aparece dentro do arquivo.
#include<stdio.h>
#include<string.h>
int main (){
    FILE *arq;
    char c ,letra , nome_do_arquivo[10]  ; 
    int conta_letra = 0 ;

    printf("Digite o nome do arquivo (sem o .txt)\n"); //recebe o nome do arquivo
    scanf("%s", nome_do_arquivo); //nao precisa de & pq e vetor 
    strcat(nome_do_arquivo , ".txt"); // coloca a extensão.txt

    arq = fopen((nome_do_arquivo),"r"); 

    if(arq){
        printf("Digite a letra que voce deseja contar no arquivo : ");
        scanf(" %c",&letra);
        while((c = getc(arq))!= EOF ){
            if(c == letra){
                conta_letra++;

            }
        }
    printf("A letra %c \nFoi encontrada %d vezes no arquivo \n ",letra , conta_letra);
    }
    else{
        printf("Nao foi possivel achar o aquivo ");
    }
    fclose(arq);
    return 0 ; 
}