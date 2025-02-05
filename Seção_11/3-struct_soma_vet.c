// 3. Considerando a estrutura que representa um vetor R3:
// struct Vetor{
// float x;
// float y;
// float z;
// };
// Implemente um programa que receba, calcule e apresente a soma de dois vetores.
typedef struct vetor{
    float x ; 
    float y ; 
    float z ;  
}vet ;


void soma_vetor(vet vet1 , vet vet2){
    float somax , somay , somaz;
    
    somax = vet1.x + vet2.x ; //acessa aos valores de x dos vetores e os soma nao necessita de * pois ja esta apontando pela flecha 
    somay = vet1.y + vet2.y; //acessa os valores de y e os soma 
    somaz = vet1.z + vet2.z;//acessa os valores de z e os soma 
    
    printf("\nA soma dos valores de x sao :\n %.2f ",somax);
    printf("\nA soma dos valores de y sao :\n %.2f ",somay);
    printf("\nA soma dos valores de z sao :\n %.2f ",somaz);

}
int main (){
    vet  vet1 , vet2 ; //declarei para acessar diretamente a struct

    
    printf("Digite  o valor x do vetor1 :\n");
    scanf("%f",&vet1.x);//variavel 
    
    printf("Digite  o valor y do vetor1 :\n");
    scanf("%f",&vet1.y);
   
    printf("Digite  o valor z do vetor1  :\n");
    scanf("%f",&vet1.z);
    
    printf("Digite  o valor x do vetor2 : \n");
    scanf("%f",&vet2.x);
    
    printf("Digite  o valor y do vetor2 : \n");
    scanf("%f",&vet2.y);
    
    printf("Digite  o valor z do vetor2 : \n");
    scanf("%f",&vet2.z);

    soma_vetor(vet1 , vet2);

    
    return 0 ;
}