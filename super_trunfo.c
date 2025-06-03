#include <stdio.h>

int main(){

    char estado1, estado2;
    char cod_carta1[3], cod_carta2[3];
    char nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2;
    float area_cidade1, area_cidade2;
    float pib1, pib2;
    int num_pontos_turisticos1, num_pontos_turisticos2;

    //primeira ficha
    printf("Carta 1\n");
    printf("Estado: ");
    scanf("%s", &estado1);

    printf("Codigo: ");
    scanf("%s", &cod_carta1[3]);

    printf("Nome da Cidade: ");
    scanf("%s", &nome_cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area_cidade1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos1);
    printf("\n\n");


    // segundo ficha

    printf("Carta 2\n");
    printf("Estado: ");
    scanf("%s", &estado2);

    printf("Codigo: ");
    scanf("%s", &cod_carta2[3]);

    printf("Nome da Cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area_cidade2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos2);
    printf("\n\n");
    
    return 0;

}