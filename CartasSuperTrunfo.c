#include <stdio.h>

int main(){

//Cadastro variáveis
    char estado1 = 'a', estado2 = 'b';
    char cod1[4], cod2[4], cidade1 [50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2; 
    int turistico1, turistico2;
        
//Cadastro Carta 1
    printf("|=======================================|\n");
    printf("|====== *Desafio Super Trunfo* =========|\n");
    printf("|=======================================|\n");
    printf("\nCARTA 1\n");
    printf("Digite o Estado..........: ");
    scanf("%s", &estado1);
    printf("Digite o Código..........: ");
    scanf("%s", cod1);
    printf("Digite o nome da Cidade..: ");
    scanf("%s", cidade1);
    printf("Digite a População.......: ");
    scanf("%d", &populacao1);
    printf("Digite a Área (km²)......: ");
    scanf("%f", &area1);
    printf("Digite o PIB.............: ");
    scanf("%f", &pib1);
    printf("Digite Pontos Turísticos.: ");
    scanf("%d", &turistico1);
        
    //Cadastro carta 2
    printf("\nCARTA 2\n");
    printf("Digite o Estado..........: ");
    scanf("%s", &estado2);
    printf("Digite o código..........: ");
    scanf("%s", cod2);
    printf("Digite a Cidade..........: ");
    scanf("%s", cidade2);
    printf("Digite a População.......: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (km²)......: ");
    scanf("%f", &area2);
    printf("Digite o PIB.............: ");
    scanf("%f", &pib2);
    printf("Digite Pontos Turísticos.: ");
    scanf("%d", &turistico2);     
    
return 0;
}