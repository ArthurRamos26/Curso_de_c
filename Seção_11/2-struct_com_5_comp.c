// 2. Crie um programa que tenha uma struct chamada aluno contendo nome, número de matrícula e curso.
// Leia do usuário a informação de 5 alunos, armazene em um vetor desta estrutura e imprima os dados na
// tela.
#include<stdio.h>
#include<string.h>
struct  alunos {//criei a struct alunos 
    char nome [100];
    int matricula ;
    char curso [100];


}alunos;
int main (){//parte do codigo para receber os elementos que serão armazenadosn no vetor da struct
    struct alunos al [5] ; //criei um vetor que aponta para a structu alunos 

    for (int i = 0 ; i < 5 ; i++){
        printf("\nDigite o nome do aluno %d : ",i+1);
        fgets(al[i].nome,10,stdin);
        fflush(stdin); //este comando serve para limpar o buffer pois se nao armazena o enter como /n e pula a linha 
        
        printf("Digite o numero de matricula : ");
        scanf("%d",&al[i].matricula);
        fflush(stdin);

        printf("Digite o curso do aluno : ");
        fgets(al[i].curso,50,stdin);
        fflush(stdin);

        
    }  
    for(int i = 0 ; i < 5 ; i++){//parte do codigo para printar os elementos armazenados na struct
        printf("----------Dados Do aluno %d----------\n",i+1);
        printf("O Nome do aluno : %s",al[i].nome);
        printf("Matricula : %d\n",al[i].matricula);
        printf("O curso : %s\n",al[i].curso);

    } 
}