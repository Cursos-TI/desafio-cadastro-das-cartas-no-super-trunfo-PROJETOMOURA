#include <stdio.h>

int main(){

//Cadastro variáveis
    char estado1[4], estado2[4], cidade1[50],cidade2[50], cod1[4], cod2[4];
    unsigned long int populacao1, populacao2;
    int turistico1, turistico2;
    float pib1, pib2, area1, area2; 
    float densidade_p1, pib_per1, densidade_p2, pib_per2;
    float superPoder1, superpoder2;

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
    scanf("%ld", &populacao1);
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
    scanf("%ld", &populacao2);
    printf("Digite a Área Total: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &turistico2);     
    
    printf("\nSEGUNDA CARTA CADASTRADA COM SUCESSO!\n");

    /*no material do aluno consta que o valor do PIB é em bilhão de reais, 
    por isso a variável PIB foi multiplicada por 1bilhão.
    */ 
    densidade_p1 = (float)populacao1 / area1;
    pib_per1 = (float)pib1 * 1000000000 / populacao1;
    
    densidade_p2 = (float)populacao2 / area2;
    pib_per2 = (float)pib2 * 1000000000 / populacao2;

    superPoder1 = (float)populacao1 + area1 + pib1 + turistico1 + pib_per1 + (1 / densidade_p1);
    superpoder2 = (float)populacao2 + area2 + pib2 + turistico2 + pib_per2 + (1 / densidade_p2);

//Resultado
    
    printf("\n    ===== CARTA 1 =====\n");
   
    printf("Estado................: %s\n",estado1);
    printf("COD...................: %s\n", cod1);
    printf("Nome da Cidade........: %s\n", cidade1);
    printf("População.............: %ld\n", populacao1);
    printf("Área total............: %.2f km²\n", area1);
    printf("PIB...................: %.2f bilhões em reais\n", pib1);
    printf("Pontos Turísticos.....: %d\n", turistico1); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_p1);
    printf("PIB per Capita........: %.2f reais\n", pib_per1);

    printf("\n    ===== CARTA 2 =====\n");
   
    printf("Estado...............: %s\n",estado2);
    printf("COD...................: %s\n", cod2);
    printf("Nome da Cidade........: %s\n", cidade2);
    printf("População.............: %ld\n", populacao2);
    printf("Área total............: %.2f km²\n", area2);
    printf("PIB...................: %.2f bilhões em reais\n", pib2);
    printf("Pontos Turísticos.....: %d\n", turistico2); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_p2);
    printf("PIB per Capita........: %.2f reais\n", pib_per2);
   
    printf("\n***** CONFRONTO SUPER TRUNFO *****\n");
    printf("\n        CARTA 1 vs CARTA 2\n");
    
    printf("*** População ***\n");    
    printf("Carta 1: %ld - Resultado: %d\n", populacao1, populacao1 > populacao2);
    printf("Carta 2: %ld - Resultado: %d\n", populacao2, populacao2 > populacao1);
    
    printf("\n*** ÁREA ***\n");
    printf("Carta 1: %.2f - Resultado: %d\n", area1, area1 > area2);
    printf("Carta 2: %.2f - Resultado: %d\n", area2, area1 < area2);

    printf("\n*** PIB PER CAPITA ***\n");
    printf("Carta 1: %.2f  - Resultado: %d\n", pib1, pib1 > pib2);
    printf("Carta 2: %.2f  - Resultado: %d\n", pib2, pib1 < pib2);

    printf("\n*** PONTOS TURÍSTICOS ***\n");
    printf("Carta 1: %d    - Resultado: %d\n", turistico1, turistico1 > turistico2);
    printf("Carta 2: %d    - Resultado: %d\n", turistico2, turistico1 < turistico2);

    printf("\n*** DENSIDADE POPULACIONAL ***\n");
    printf("Carta 1: %.2f  - Resultado: %d\n", densidade_p1, densidade_p1 < densidade_p2);
    printf("Carta 2: %.2f  - Resultado: %d\n", densidade_p2, densidade_p1 > densidade_p2);
   
    printf("\n*** PIB PER CAPITA ***\n");
    printf("Carta 1: %.2f  - Resultado: %d\n", pib_per1, pib_per1 > pib_per2);
    printf("Carta 2: %.2f  - Resultado: %d\n", pib_per2, pib_per1 < pib_per2);

    printf("\n*** SUPER PODER ***\n");
    printf("Carta 1: %.2f  - Resultado: %d\n", superPoder1, superPoder1 > superpoder2);
    printf("Carta 2: %.2f  - Resultado: %d\n", superpoder2, superPoder1 < superpoder2);
return 0;


}