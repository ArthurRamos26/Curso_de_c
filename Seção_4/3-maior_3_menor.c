// 3. Faça um programa que leia 10 números e escreva o maior e o menor valor lido
#include <stdio.h> 
int main(){
    int menor , maior ,   numero ; 
    for(int i = 1 ; i <= 10 ; i++){
        printf("Digite o %d numero : ",i);
        scanf("%d",&numero);
            if(i == 1 ){//considera o primeiro numero como o maior e menor  pois é a única entrada
                menor = maior = numero ; 
            }
                else if(maior < numero  ){ // checa se o numero atual é maior que o considerado maior caso seja salva como maior 
                    maior = numero;
                }
                    else if(numero < menor ){// checa se o numero atual é menor caso seja salva como o menor 
                        menor = numero;
                    

                }
        }
    printf("%d e o maior  \n%d e o menor",maior, menor);
    
    return 0 ; 
}