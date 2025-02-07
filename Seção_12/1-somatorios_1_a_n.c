// 1. Crie um programa que tenha uma função recursiva que receba um número inteiro positivo N e calcula e
// apresente o somatório dos números de 1 a N. 
int calc_n(int n ){
    if (n == 0 ){
        return 0 ; 
    } 

    return calc_n(n-1) +n; //salva o valor do ultimo loop 
    
}
int main (){// parte do main que acessa a função recursiva 
    int num ; 
    num = 5 ;
    calc_n(num);
    printf("%d",calc_n(num) );
    return 0 ; 
    }