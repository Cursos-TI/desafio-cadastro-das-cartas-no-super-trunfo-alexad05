#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das cartas
    char estado1[50] = "Ceará";
    char codigo1[4] = "A01";
    char cidade1[50] = "Fortaleza";
    unsigned long int populacao1 = 2428678;
    float area1 = 313.8;
    float pib1 = 73.4;
    int pontos_turisticos1 = 50;
    float densidade_populacional1 = (float)populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;

    char estado2[50] = "Ceará";
    char codigo2[4] = "A02";
    char cidade2[50] = "Caucaia";
    unsigned long int populacao2 = 355679;
    float area2 = 1.223;
    float pib2 = 5.7;
    int pontos_turisticos2 = 20;
    float densidade_populacional2 = (float)populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    // Exibição dos dados das cartas (opcional)
    printf("Carta 1: %s - %s (%s)\n", cidade1, estado1, codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita1);

    printf("Carta 2: %s - %s (%s)\n", cidade2, estado2, codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita2);

    // Lógica de comparação (População)
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: As cartas empataram!\n");
    }

    return 0;
}