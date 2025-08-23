#include <stdio.h>

int main(){

//Cadastro variáveis
    char estado1[4], estado2[4], cidade1[50],cidade2[50], cod1[4], cod2[4];
    int populacao1, populacao2, turistico1, turistico2;
    float pib1, pib2, area1, area2; 
    float densidade_p1, pib_per1, densidade_p2, pib_per2;


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
    printf("Digite a Área total: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &turistico1);
        
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
    printf("Digite a Área Total: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &turistico2);     
    
    printf("\nSEGUNDA CARTA CADASTRADA COM SUCESSO!\n");

    /*para imprimir o PIB per Capita em bilhão foi preciso multiplicar a variável pib por 1bilhão.
    já que o valor atribuído tem apenas 3 digitos.
    */ 
        densidade_p1 = (float)populacao1 / area1;
        pib_per1 = (float)pib1 * 1000000000 / populacao1;
    
        densidade_p2 = (float)populacao2 / area2;
        pib_per2 = (float)pib2 * 1000000000 / populacao2;

//Resultado
    
    printf("\n    ===== CARTA 1 =====\n");
   
    printf("Estado................: %s\n",estado1);
    printf("COD...................: %s\n", cod1);
    printf("Nome da Cidade........: %s\n", cidade1);
    printf("População.............: %d\n", populacao1);
    printf("Área total............: %.2f km²\n", area1);
    printf("PIB...................: %.2f bilhões em reais\n", pib1);
    printf("Pontos Turísticos.....: %d\n", turistico1); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_p1);
    printf("PIB per Capita........: %.2f reais\n", pib_per1);

    printf("\n    ===== CARTA 2 =====\n");
   
    printf("Estado...............: %s\n",estado2);
    printf("COD...................: %s\n", cod2);
    printf("Nome da Cidade........: %s\n", cidade2);
    printf("População.............: %d\n", populacao2);
    printf("Área total............: %.2f km²\n", area2);
    printf("PIB...................: %.2f bilhões em reais\n", pib2);
    printf("Pontos Turísticos.....: %d\n", turistico2); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_p2);
    printf("PIB per Capita........: %.2f reais\n", pib_per2);
   
return 0;


}