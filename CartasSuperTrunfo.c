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

    // Menu interativo
    int escolha;
    printf("Escolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolha);

    // Lógica de comparação com switch e if-else aninhados
    switch (escolha) {
        case 1: // População
            printf("Comparando População:\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("%s vence!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("%s vence!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2: // Área
            printf("Comparando Área:\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            if (area1 > area2) {
                printf("%s vence!\n", cidade1);
            } else if (area2 > area1) {
                printf("%s vence!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("%s vence!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("%s vence!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4: // Pontos Turísticos
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d\n", cidade1, pontos_turisticos1);
            printf("%s: %d\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("%s vence!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("%s vence!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5: // Densidade Populacional
            printf("Comparando Densidade Populacional:\n");
            printf("%s: %.2f\n", cidade1, densidade_populacional1);
            printf("%s: %.2f\n", cidade2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) { // Menor densidade vence
                printf("%s vence!\n", cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("%s vence!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}