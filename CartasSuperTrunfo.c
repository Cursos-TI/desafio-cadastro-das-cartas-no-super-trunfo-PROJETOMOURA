#include <stdio.h>

int main(){

//Cadastro variáveis
    char estado1[4], estado2[4], cidade1[50],cidade2[50], cod1[4], cod2[4];
    int populacao1, populacao2, turistico1, turistico2;
    float pib1, pib2, area1, area2;

//Cadastro Carta 1
    printf("|=======================================|\n");
    printf("|====== *Desafio Super Trunfo* =========|\n");
    printf("|=======================================|\n");
    printf("\n===== CADASTRO CARTA 1 =====\n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado1);
    printf("Digite o Código da Carta: \n");
    scanf("%s", cod1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a População: \n");
    scanf("%d", &populacao1);
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &turistico1);
    printf("Digite a Área total: \n");
    scanf("%f", &area1);
    printf("Digite o valaor do PIB: \n");
    scanf("%f", &pib1);
    printf("\nPRIMEIRA CARTA CADASTRADA COM SUCESSO!\n");
    
    //Cadastro carta 2
    printf("\n===== CADASTRO CARTA 2 =====\n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado2);
    printf("Digite o código da Carta: \n");
    scanf("%s", cod2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a População: \n");
    scanf("%d", &populacao2);
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &turistico2);
    printf("Digite a Área Total: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("\nSEGUNDA CARTA CADASTRADA COM SUCESSO!\n");

//Resultado
    printf("\n    ===== CARTA 1 =====\n");
    printf("COD - %s                  \n", cod1);
    printf("Estado................: %s\n",estado1);
    printf("Nome da Cidade........: %s\n", cidade1);
    printf("População.............: %d\n", populacao1);
    printf("Pontos Turísticos.....: %d\n", turistico1);
    printf("Área total............: %.2f\n", area1);
    printf("PIB...................: %.2f\n", pib1);

    printf("\n    ===== CARTA 2 =====\n");
    printf("COD - %s                  \n", cod2);
    printf("Estado................: %s\n",estado2);
    printf("Nome da Cidade........: %s\n", cidade2);
    printf("População.............: %d\n", populacao2);
    printf("Pontos Turísticos.....: %d\n", turistico2);
    printf("Área total............: %.2f\n", area2);
    printf("PIB...................: %.2f\n", pib2);
    
   
return 0;


}