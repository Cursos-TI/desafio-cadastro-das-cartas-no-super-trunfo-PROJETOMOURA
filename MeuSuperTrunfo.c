#include <stdio.h>

int main (){
    
    //variáveis para carta 1
    char estado1[2], codigo1[4], cidade1[50];
    int polulacao1, p_turisco1;
    float area1, pib1;
    
    //variáveis para carta 2
    char estado2[2], codigo2[4], cidade2[50];
    int populacao2, p_turistico2;
    float area2, pib2;

//cadastramento da carta1
    printf("Está na hora de cadastrar sua primeira carta de Super Trunfo.\nEscreva os nomes e números sem acrescentar espaços, pontos, vígulas ou caracteres especiais.\n");
    printf("Informe o Estado para cadastro (exemplos: RJ, SP, etc.): \n");
    scanf("%s", estado1);
    printf("Informe o código de cadastro da UF com no máximo 4 caracteres: \n");
    scanf("%s", codigo1);
    printf("Informe a Cidade: \n");
    scanf("%s", cidade1);
    printf("Informe a quantidade populacional da cidade: \n");
    scanf("%d", &polulacao1);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &p_turisco1);
    printf("Informe o tamanho da área(KM²) apenas números: \n");
    scanf("%f", &area1);
    printf("Informe o valor do PIB: \n");
    scanf("%f", &pib1);
    printf("\n");
    printf("Primeira carta cadastrada com sucesso.\n\nCadastre a Carta 2\n");
//Cadastro da Carta 2
    printf("Informe o Estado para cadastro (exemplos: RJ, SP, etc.): \n");
    scanf("%s", estado2);
    printf("Informe o código de cadastro da UF com no máximo 4 caracteres: \n");
    scanf("%s", codigo2);
    printf("Informe a Cidade: \n");
    scanf("%s", cidade2);
    printf("Informe a quantidade populacional da cidade: \n");
    scanf("%d", &populacao2);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &p_turistico2);
    printf("Informe o tamanho da área(KM²) apenas números: \n");
    scanf("%f", &area2);
    printf("Informe o valor do PIB: \n");
    scanf("%f", &pib2);
    printf("\n");
    printf("Cadatrado feito com sucesso.\n\nConfira os dados cadastratos e boa diversão!\n\n");
    
    


}