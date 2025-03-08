#include <stdio.h>
#include <string.h>

int main() {
    char estado1[50] = "Ceará";
    char codigo1[4] = "A01";
    char cidade1[50] = "Fortaleza";
    unsigned long int populacao1 = 2428678;
    float area1 = 313.8;
    float pib1 = 73.4;
    int pontos_turisticos1 = 50;
    float densidade_populacional1 = (float)populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    char estado2[50] = "Ceará";
    char codigo2[4] = "A02";
    char cidade2[50] = "Caucaia";
    unsigned long int populacao2 = 355679;
    float area2 = 1.223;
    float pib2 = 5.7;
    int pontos_turisticos2 = 20;
    float densidade_populacional2 = (float)populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;
    float super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    char estado3[50] = "Maranhão";
    char codigo3[4] = "B01";
    char cidade3[50] = "Imperatriz";
    unsigned long int populacao3 = 273110;
    float area3 = 1.368;
    float pib3 = 7.7;
    int pontos_turisticos3 = 15;
    float densidade_populacional3 = (float)populacao3 / area3;
    float pib_per_capita3 = (pib3 * 1000000000.0) / populacao3;
    float super_poder3 = (float)populacao3 + area3 + pib3 + pontos_turisticos3 + pib_per_capita3 + (1.0 / densidade_populacional3);

    char estado4[50] = "Maranhão";
    char codigo4[4] = "B02";
    char cidade4[50] = "Balsas";
    unsigned long int populacao4 = 101767;
    float area4 = 13.141;
    float pib4 = 6.3;
    int pontos_turisticos4 = 10;
    float densidade_populacional4 = (float)populacao4 / area4;
    float pib_per_capita4 = (pib4 * 1000000000.0) / populacao4;
    float super_poder4 = (float)populacao4 + area4 + pib4 + pontos_turisticos4 + pib_per_capita4 + (1.0 / densidade_populacional4);

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n\n", super_poder1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n\n", super_poder2);

    printf("Carta 3:\n");
    printf("Estado: %s\n", estado3);
    printf("Código da Carta: %s\n", codigo3);
    printf("Cidade: %s\n", cidade3);
    printf("População: %lu\n", populacao3);
    printf("Área: %.3f km²\n", area3);
    printf("PIB: %.3f bilhões de reais\n", pib3);
    printf("Pontos Turísticos: %d\n", pontos_turisticos3);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional3);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita3);
    printf("Super Poder: %.2f\n\n", super_poder3);

    printf("Carta 4:\n");
    printf("Estado: %s\n", estado4);
    printf("Código da Carta: %s\n", codigo4);
    printf("Cidade: %s\n", cidade4);
    printf("População: %lu\n", populacao4);
    printf("Área: %.3f km²\n", area4);
    printf("PIB: %.3f bilhões de reais\n", pib4);
    printf("Pontos Turísticos: %d\n", pontos_turisticos4);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional4);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita4);
    printf("Super Poder: %.2f\n\n", super_poder4);

    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}