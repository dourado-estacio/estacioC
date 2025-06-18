#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    char estado1[2], estado2[2];
    char cod_carta1[3], cod_carta2[3];
    char nome_cidade1[20], nome_cidade2[20];
    int populacao1 = 1, populacao2;
    float area_cidade1, area_cidade2;
    float pib1, pib2;
    int num_pontos_turisticos1, num_pontos_turisticos2;

    // acrescentar duas variaveis desafio aventureiro

    float dens_populacao1, dens_populacao2;
    float pib_p_capita1, pib_p_capita2;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //primeira ficha
    printf("Carta 1\n");
    printf("Digite o Estado: ");
    scanf("%s", &estado1[2]);

    printf("Digite o codigo: ");
    scanf("%s", &cod_carta1[3]);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nome_cidade1[20]);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area_cidade1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos1);
    printf("\n\n");


    // segundo ficha

    printf("Carta 2\n\n");
    printf("Digite o Estado: ");
    scanf("%s", &estado2[2]);

    printf("Digite o codigo: ");
    scanf("%s", &cod_carta2[3]);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nome_cidade2[20]);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos2);
    printf("\n\n");

    // mostrar as cartas

    printf("Carta 1\n\n");
    printf("Estado: %s\n", &estado1[2]);
    printf("Codigo: %s\n", &cod_carta1[3]);
    printf("Nome da Cidade: %s\n", &nome_cidade1[20]);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area_cidade1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", num_pontos_turisticos1);

    // acrescentar dois itens para tarefa desafio aventureiro

    dens_populacao1 = (float) (populacao1 / area_cidade1);
    pib_p_capita1 = (float)(pib1 / populacao1);

    printf("Densidade populacional: %.2f habitantes por km quadrado\n", dens_populacao1);
    printf("PIB per capita: R$ %.2f por habitante\n\n", pib_p_capita1);

    
    printf("Carta 2\n\n");
    printf("Estado: %s\n", &estado2[2]);
    printf("Codigo: %s\n", &cod_carta2[3]);
    printf("Nome da Cidade: %s\n", &nome_cidade2[20]);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area_cidade2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", num_pontos_turisticos2);

    // acrescentar dois itens para tarefa desafio aventureiro

    dens_populacao2 = (float) (populacao2 / area_cidade2);
    pib_p_capita2 = (float)(pib2 / populacao2);

    printf("Densidade populacional: %.2f habitantes por km quadrado\n", dens_populacao2);
    printf("PIB per capita: R$ %.2f por habitante\n\n", pib_p_capita2);


    return 0;
}