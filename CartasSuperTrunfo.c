#include <stdio.h>

int main(){
    char estado [50];
    char codigo [50];
    char cidade [50];
    int populacao;
    float area;
    float pib; 
    int pontos_turiscos;

    printf("Digite o estado:");
    scanf("%s", estado);
    printf("O estado é: %s\n", estado);

    printf("Digite o código da carta:");
    scanf("%s", codigo);
    printf("O código da carta é: %s\n", codigo);

    printf("Digite o nome da cidade:");
    scanf("%s", cidade);
    printf("O nome da cidade é: %s\n", cidade);

    printf("Digite a população:");
    scanf("%d", &populacao);
    printf("A população é: %d\n", populacao);

    printf("Digite a área em km²:");
    scanf("%f", &area);
    printf("A área em km² é: %f\n", area);

    printf("Digite o PIB:");
    scanf("%f", &pib); 
    printf("O pib é: %f\n", pib);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontos_turiscos); 
    printf("O número de pontos turísticos é: %d\n", pontos_turiscos);

    return 0;

}