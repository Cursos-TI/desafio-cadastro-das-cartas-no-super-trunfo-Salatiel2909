#include <stdio.h>

int main() {

    char estado1[100];  
    char codi1[100];
    char cidade1[100];
    unsigned long int popu1;
    float area1;
    float pib1;
    int pnt1;
    float DensidadePopu1;
    float PIBperCap1;

    printf("\n");   

    printf("----- Dados da primeira carta ----- \n");

        printf("\n");
    
    printf("Estado: Uma letra de 'A' a 'H' (Representando um dos oito estados) \n");
    scanf("%s", estado1);
        printf("\n");   
    printf("Codigo da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codi1);
        printf("\n");
    printf("Escolha a cidade desejada (ex: Rio De Janeiro): \n");
    scanf(" %[^\n]", cidade1);
        printf("\n");
    printf("Qual a populaçao da Cidade escolhida? (ex: 15000): \n");
    scanf("%lu", &popu1);
        printf("\n");
    printf("Area da cidade escolhida em quilômetros quadrados (ex: 564.50): \n");
    scanf("%f", &area1);
        printf("\n");
    printf("PIB da cidade em bilhoes (ex: 564.50): \n");
    scanf("%f", &pib1);
        printf("\n");
    printf("Quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pnt1);

    DensidadePopu1 = (float) popu1 / area1;
    PIBperCap1 = (float) popu1 / pib1;

        printf(" ----- Resultados da primeira carta ----- \n");
        printf("\n");
    printf("Estado: %s\n", estado1);
        printf("\n");
    printf("Codigo: %s\n", codi1);
        printf("\n");
    printf("Cidade: %s\n", cidade1);
        printf("\n");
    printf("População: %lu\n", popu1);
        printf("\n");
    printf("Area: %.2f km2\n", area1);
        printf("\n");
    printf("Pib: R$ %.2f bilhões\n", pib1);
        printf("\n");
    printf("Número de Pontos Turísticos: %d\n", pnt1);
        printf("\n");
    //inf adicionais
    printf("Densidade Populacional: %.2f\n", DensidadePopu1);
        printf("\n");
    printf("PIB per Capita: %.2f\n", PIBperCap1);
        printf("\n");
//comparação

    printf("Comparação das cartas: \n");
        printf("\n");
    printf("População: %lu\n", popu1);
        printf("\n");
    printf("Área: %f\n", area1);
        printf("\n");
    printf("PIB: %.2f\n", pib1);
        printf("\n");
    printf("Pontos Turísticos: %d\n", pnt1);
        printf("\n");
    printf("Densidade Populacional: %.2f\n", DensidadePopu1);
        printf("\n");
    printf("PIB per Capita: %.2f\n", PIBperCap1);
        printf("\n");
    printf("Super Poder:");



    return 0;

}
