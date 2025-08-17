#include <stdio.h>

int main(){
//variáveis para carta 1
    char estado1[2], codigo1[4], cidade1[50];
    int populacao1, p_turistico1;
    float area1, pib1;

//variáveis para carta 2
    char estado2[2], codigo2[4], cidade2[50];
    int populacao2, p_turistico2;
    float area2, pib2;

    printf("Está na hora de cadastrar sua primeira carta de Super Trunfo.\nNão utilize espaços, pontos, vírgulas ou caracteres especiais.\n");

//cadastro carta 1
    printf("Informe o Estado: ");
    scanf("%s", estado1);
    printf("Informe o Código: ");
    scanf("%s", codigo1);
    printf("Informe a Cidade: ");
    scanf("%s", cidade1);
    printf("Informe a População: ");
    scanf("%d", &populacao1);
    printf("Informe o Ponto Turístico: ");
    scanf("%d", &p_turistico1);
    printf("Informe a Área: ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%f", &pib1);
    printf("\n");
    printf("Carta 1 cadastrada com sucesso!\n");
    printf("\n");
    
//Cadastro da Carta 2
     printf("Informe o Estado: ");
    scanf("%s", estado2);
    printf("Informe o Código: ");
    scanf("%s", codigo2);
    printf("Informe a Cidade: ");
    scanf("%s", cidade2);
    printf("Informe a População: ");
    scanf("%d", &populacao2);
    printf("Informe o Ponto Turístico: ");
    scanf("%d", &p_turistico2);
    printf("Informe a Área: ");
    scanf("%f", &area2);
    printf("Informe o PIB: ");
    scanf("%f", &pib2);
    printf("\n");
    printf("Carta 2 cadastrada com sucesso!\n");
    printf("\n");
//Resultado
    printf("Confira o cadastro das suas Cartas Super Trunfo\n");
    printf("Carta 1\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nPonto Turístico: %d\nÁrea: %f\nPIB: %f\n\n", estado1, codigo1, cidade1, populacao1, p_turistico1,area1, pib1);
    printf("Carta 2\n\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nPonto Turístico: %d\nÁrea: %f\nPIB: %f", estado2, codigo2, cidade2, populacao2, p_turistico2,area2, pib2);

    return 0;
}