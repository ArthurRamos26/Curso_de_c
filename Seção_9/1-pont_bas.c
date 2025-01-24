// 1. Faça um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe
// as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os
// valores das variáveis antes e após a modificação. 
#include <stdio.h>
int incrementa_inteiro (int*ponteiro_int){ //função para incrementar o valor int 
    
    *ponteiro_int = *ponteiro_int  + 9; 
    printf("Depois do incremento(Inteiro) : %d\n", *ponteiro_int );
    
    return 0  ; 
     

}
char mudar_caractere (char* ponteiro_char ){ // função para incrementar  o valor char 
    
    *ponteiro_char = ((int)*ponteiro_char) +30;
    printf("Depois do incremento(Caractere) : %c\n", *ponteiro_char );
    return 0 ; 

}
float incrementa_real (float*ponteiro_float ){ // função para incrementar o valor float 
    
    *ponteiro_float = *ponteiro_float + 2.5 ; //sempre que acessa o ponteiro tem que referenciar 
    printf("Depois do incremento(Real) : %.2f\n", *ponteiro_float );
    return 0 ; 

}

int main(){
    int num_int;
    int *ponteiro_int;//declara com o asterisco ja que é ponteiro 
    char caractere ; 
    char *ponteiro_char;
    float num_float ;
    float *ponteiro_float ; 
    
    printf("Digite um numero inteiro : ");
    scanf("%d",&num_int);

    printf("Digite um caractere : "); //tem que deixar um espaço antes da máscara do caractere pois se não ele quebra linha 
    scanf(" %c",&caractere);
    
    printf("Digite um numero real : ");
    scanf("%f",&num_float);

     
    ponteiro_int = &num_int;
    ponteiro_char = &caractere; //dando o endereço do ponteiro 
    ponteiro_float = &num_float;  
    
    printf("Antes do incremento : \nInteiro : %d\nCaractere : %c\nReal : %f ",num_int , caractere , num_float); // antes do incremento 
    incrementa_inteiro(ponteiro_int);
    mudar_caractere(ponteiro_char);
    incrementa_real(ponteiro_float);
    
    return 0 ;
}