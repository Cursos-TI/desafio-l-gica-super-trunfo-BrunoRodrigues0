#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1[50], codigo1[50], cidade1[50];
    unsigned long int populacao1;
    float area1, PIB1;
    int pontosTuristicos1;
    float densidade1, PIBperCapita1;

    // Declaração das variáveis da Carta 2
    char estado2[50], codigo2[50], cidade2[50];
    unsigned long int populacao2;
    float area2, PIB2;
    int pontosTuristicos2;
    float densidade2, PIBperCapita2;

    // Entrada dos dados da Carta 1
    printf("Informe o estado da primeira carta:\n");
    scanf("%s", estado1);

    printf("Informe a cidade da primeira carta:\n");
    scanf("%s", cidade1);

    printf("Informe o código da primeira carta:\n");
    scanf("%s", codigo1);

    printf("Informe a população da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Informe a área da cidade:\n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade:\n");
    scanf("%f", &PIB1);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    PIBperCapita1 = PIB1 / populacao1;

    // Entrada dos dados da Carta 2
    printf("\nInforme o estado da segunda carta:\n");
    scanf("%s", estado2);

    printf("Informe a cidade da segunda carta:\n");
    scanf("%s", cidade2);

    printf("Informe o código da segunda carta:\n");
    scanf("%s", codigo2);

    printf("Informe a população da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Informe a área da cidade:\n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade:\n");
    scanf("%f", &PIB2);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    PIBperCapita2 = PIB2 / populacao2;

    // Menu interativo
    int escolha;
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    printf("\n>>> Comparação entre %s e %s\n", cidade1, cidade2);

    switch (escolha) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", cidade1, PIB1);
            printf("%s: %.2f\n", cidade2, PIB2);

            if (PIB1 > PIB2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (PIB2 > PIB1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade Demográfica (menor vence!)
            printf("Atributo: Densidade Demográfica (menor vence!)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);

            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 5.\n");
    }

    return 0;
}