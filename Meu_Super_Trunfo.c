#include <stdio.h>

int main(){
//variáveis
    char codigo1[4], codigo2[4];
    int populacao1, populacao2, turistico1, turistico2;
    float area1, area2, pib1, pib2;
  
//cadastro carta 1
    printf("\n=== Cadastro Carta 1 ===\n");
    printf("Informe o Código: ");
    scanf("%s", codigo1);
    printf("Informe a População: ");
    scanf("%d", &populacao1);
    printf("Informe a Área: ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%f", &pib1);
    printf("Informe o Ponto Turístico: ");
    scanf("%d", &turistico1);
    printf("\n");
    printf("Cadastro feito com sucesso!\n");
    printf("\n");

//Cadastro da Carta 2
    printf("\n=== Cadastro Carta 2 ===\n");
    printf("Informe o Código: ");
    scanf("%s", codigo2);
    printf("Informe a População: ");
    scanf("%d", &populacao2);
    printf("Informe a Área: ");
    scanf("%f", &area2);
    printf("Informe o PIB: ");
    scanf("%f", &pib2);
    printf("Informe o Ponto Turístico: ");
    scanf("%d", &turistico2);
    printf("\n");
    printf("Cadastro feito com sucesso!\n");

//Resultado
    printf("\n==== CARTA 1 ====\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turistico1);

    printf("\n==== CARTA 2 ====\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turistico2);


    return 0;
}