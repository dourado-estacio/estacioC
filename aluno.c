#include <stdio.h>

int main(){

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("\nNome do aluno: %s - Matricula: %d", nome, matricula);

    // na variavel float uma forma de se forçar a impressão de apenas duas casas decimais
    // eh se digititando ".2" a frente, ou ".3 .4 .5 etc"
    printf("\nIdade: %d - Altura: %.2f\n\n", idade, altura);
    
    return 0;

}