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

    // Menus interativos
    int escolha1, escolha2;

    // Primeiro atributo
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolha1);

    // Segundo atributo (garantindo que seja diferente do primeiro)
    printf("Escolha o segundo atributo para comparação:\n");
    printf("1. População%s", escolha1 != 1 ? "" : " (Indisponível)");
    printf("2. Área%s", escolha1 != 2 ? "" : " (Indisponível)");
    printf("3. PIB%s", escolha1 != 3 ? "" : " (Indisponível)");
    printf("4. Pontos Turísticos%s", escolha1 != 4 ? "" : " (Indisponível)");
    printf("5. Densidade Populacional%s\n", escolha1 != 5 ? "" : " (Indisponível)");
    do {
        scanf("%d", &escolha2);
        if (escolha2 == escolha1) {
            printf("Escolha um atributo diferente do primeiro!\n");
        }
    } while (escolha2 == escolha1);

    // Variáveis para armazenar os valores dos atributos e somas
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma_carta1, soma_carta2;

    // Lógica de comparação e cálculo das somas
    switch (escolha1) {
        case 1: // População
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2: // Área
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3: // PIB
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4: // Pontos Turísticos
            valor1_carta1 = pontos_turisticos1;
            valor1_carta2 = pontos_turisticos2;
            break;
        case 5: // Densidade Populacional
            valor1_carta1 = densidade_populacional1;
            valor1_carta2 = densidade_populacional2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    switch (escolha2) {
        case 1: // População
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2: // Área
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3: // PIB
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4: // Pontos Turísticos
            valor2_carta1 = pontos_turisticos1;
            valor2_carta2 = pontos_turisticos2;
            break;
        case 5: // Densidade Populacional
            valor2_carta1 = densidade_populacional1;
            valor2_carta2 = densidade_populacional2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Calcula as somas dos atributos
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    // Exibe os resultados
    printf("\nResultados da Comparação:\n");
    printf("País 1: %s\n", cidade1);
    printf("Atributo 1 (%d): %.2f\n", escolha1, valor1_carta1);
    printf("Atributo 2 (%d): %.2f\n", escolha2, valor2_carta1);
    printf("Soma: %.2f\n\n", soma_carta1);

    printf("País 2: %s\n", cidade2);
    printf("Atributo 1 (%d): %.2f\n", escolha1, valor1_carta2);
    printf("Atributo 2 (%d): %.2f\n", escolha2, valor2_carta2);
    printf("Soma: %.2f\n\n", soma_carta2);

    // Determina o vencedor
    if (soma_carta1 > soma_carta2) {
        printf("%s vence!\n", cidade1);
    } else if (soma_carta2 > soma_carta1) {
        printf("%s vence!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}