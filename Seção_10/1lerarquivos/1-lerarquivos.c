// 1. Faça um programa que:
// a) Crie/abra um arquivo texto de nome “arq.txt”;
// b) Permita que o usuário grave diversos caracteres neste arquivo, até que o usuário entre com o caractere
// ‘0’;
// c) Feche o arquivo;
// d) Abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados. 
#include<stdio.h>
int main (){
    FILE *arq ; 
    char  palavra [100] , C ; //vetor que vai armazenar a palavra que vai ser digitada d e ate 100 caracteres , o c serve para representar  o caractere percorrido 
    arq = fopen("arquivo.txt","w");//comando para criar o arquivo w pra escrever no arquivo 

    if (arq==NULL){
        printf("O arquivo nao foi encontrado ");
        return 1 ; //erro caso o arquivo seja nulo 
    }
    else{
            while(1) {//while true pois se colocar  a condição aqui ela contabiliza o zero 
                printf("Digite uma palavra que será armazenada no arq.txt para sair digite 0 \n ");
                fgets(palavra,10,stdin);//stdin indica que a entrada sera a padrao e que a quantidade será de 10 caracteres 
                if (palavra [0]== '0'){
                   printf("Os caracteres armazenados foram : \n");
                    break ; //comando para sair do while 
                }
                else {
                    fprintf(arq,"%s",palavra);
                }
                
            }
        }
        
    
    fclose(arq);
    arq = fopen("arquivo.txt","r");
    if (arq){  //checa se o arquivo e nulo 
        while((C = getc(arq))!= EOF ){//eof o final do arquivo 
            printf(" %c",C); //tem um jeito de printar mais otimizado porem ele printa por palavras ja esse por caractere
          
        }
        }
   
}