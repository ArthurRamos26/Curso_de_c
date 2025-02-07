/*1. Crie um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma
struct.*/
#include <stdio.h>
#include <string.h>
struct pessoa {
     char nome [10];
     int idade ; 
     char endereco [100];
     };
int main(){
   struct pessoa pes ;
   //parte para receber os dados 
   printf("Digite o nome da pessoa :  ");
   fgets(pes.nome,10,stdin);

   printf("Digite o endereço da pessoa : ");
   fgets(pes.endereco,100,stdin);

   printf("Digite a idade da pessoa : ");
   scanf(" %d",&pes.idade);
   getchar(); //tem que ter esse get char pois caso contrario vai printar as duas linhas em caso de loop outro meio de resolver e usando o fflush(stdin)

   printf("DADOS : \n");
   printf("O nome dele e : %s",pes.nome );

   printf("A idade e %d \n",pes.idade);
   printf("O  endereco dele é %s",pes.endereco);




    return 0 ; 
}