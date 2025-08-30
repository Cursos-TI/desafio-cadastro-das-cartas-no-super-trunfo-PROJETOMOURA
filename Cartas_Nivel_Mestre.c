#include <stdio.h>

int main(){

//Cadastro variáveis
    char estado1 = 'A', estado2 = 'B';
    char cod1[4], cod2[4], cidade1 [50], cidade2[50];
    int turistico1, turistico2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_percapita1, pib_percapita2;
    float superpoder1, superpoder2;
    unsigned long int populacao1, populacao2;

//Cadastro Carta 1
    printf("|=======================================|\n");
    printf("|====== *Desafio Super Trunfo* =========|\n");
    printf("|=======================================|\n");
    printf("\nCARTA 1\n");
    printf("Estado %c\n", estado1);
    printf("Digite o Código..........: ");
    scanf("%s", cod1);
    printf("Digite o nome da Cidade..: ");
    scanf("%s", cidade1);
    printf("Digite a População.......: ");
    scanf("%ld", &populacao1);
    printf("Digite a Área (km²)......: ");
    scanf("%f", &area1);
    printf("Digite o PIB.............: ");
    scanf("%f", &pib1);
    printf("Digite Pontos Turísticos.: ");
    scanf("%d", &turistico1);
        
    //Cadastro carta 2
    printf("\nCARTA 2\n");
    printf("Estado %c\n", estado2);
    printf("Digite o código..........: ");
    scanf("%s", cod2);
    printf("Digite a Cidade..........: ");
    scanf("%s", cidade2);
    printf("Digite a População.......: ");
    scanf("%ld", &populacao2);
    printf("Digite a Área (km²)......: ");
    scanf("%f", &area2);
    printf("Digite o PIB.............: ");
    scanf("%f", &pib2);
    printf("Digite Pontos Turísticos.: ");
    scanf("%d", &turistico2);     
    
    printf("\n<<<<< Carta 1 >>>>>\n");

    densidade1 = (float)populacao1 / area1;
    pib_percapita1 = pib1 / (float)populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + turistico1 + pib_percapita1 + (1 / densidade1);

    printf("Estado................: %c\n",estado1);
    printf("COD...................: %s\n", cod1);
    printf("Nome da Cidade........: %s\n", cidade1);
    printf("População.............: %ld\n", populacao1);
    printf("Área total............: %.2f km²\n", area1);
    printf("PIB...................: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos.....: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);
    printf("PIB per Capita........: R$ %.2f\n", pib_percapita1);
    printf("Super Poder...........: %.2f\n", superpoder1);
    printf("\n<<<<< Carta 2 >>>>>\n");
   //calculo da densidade populacional e do Pib per capita.
   
    densidade2 = (float)populacao2 / area2;
    pib_percapita2 = pib2 / (float)populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + turistico2 + pib_percapita2 + (1 / densidade2);
   
    printf("Estado...............: %c\n",estado2);
    printf("COD...................: %s\n", cod2);
    printf("Nome da Cidade........: %s\n", cidade2);
    printf("População.............: %ld\n", populacao2);
    printf("Área total............: %.2f km²\n", area2);
    printf("PIB...................: R$ %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos.....: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade2);
    printf("PIB per Capita........: R$ %.2f\n", pib_percapita2);
    printf("Super Poder...........: %.2f\n", superpoder2);

    printf("\n***** CONFRONTO SUPER TRUNFO *****\n");
    printf("\n        CARTA 1 vs CARTA 2\n");
  
    printf("*** População ***\n");
    printf("Carta 1: %ld - resultado: %d\n", populacao1, populacao1 > populacao2);
    printf("Carta 2: %ld - resultado: %d\n", populacao2, populacao2 > populacao1);

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
    printf("Carta 1: %.2f  - Resultado: %d\n", densidade1, densidade1 < densidade2);
    printf("Carta 2: %.2f  - Resultado: %d\n", densidade2, densidade1 > densidade2);
   
    printf("\n*** PIB PER CAPITA ***\n");
    printf("Carta 1: %.2f  - Resultado: %d\n", pib_percapita1, pib_percapita1 > pib_percapita2);
    printf("Carta 2: %.2f  - Resultado: %d\n", pib_percapita2, pib_percapita1 < pib_percapita2);

    printf("\n*** SUPER PODER ***\n");
    printf("Carta 1: %.2f  - Resultado: %d\n", superpoder1, superpoder1 > superpoder2);
    printf("Carta 2: %.2f  - Resultado: %d\n", superpoder2, superpoder1 < superpoder2);
    
    return 0;
}