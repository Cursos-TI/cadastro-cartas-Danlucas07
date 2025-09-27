#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nome[20];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos;
} Carta;

int main(void) {
    Carta carta1, carta2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("\n=== SUPER TRUNFO - NÍVEL MESTRE ===\n\n");

    // Cadastro da carta 1
    printf("--- CADASTRO DA PRIMEIRA CARTA: ---\n");
    printf("Digite o estado da carta (A - H): ");
    scanf(" %c", &carta1.estado);

    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf("%s", carta1.nome);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (em Km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em Bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontos);

    // Cadastro da carta 2
    printf("\n--- CADASTRO DA SEGUNDA CARTA: ---\n");
    printf("Digite o estado da carta (A - H): ");
    scanf(" %c", &carta2.estado);

    printf("Código (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf("%s", carta2.nome);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (em Km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em Bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontos);

    // Cálculos
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    pibPerCapita1 = (carta1.pib * 1000000000.0) / carta1.populacao;
    pibPerCapita2 = (carta2.pib * 1000000000.0) / carta2.populacao;

    superPoder1 = (float)carta1.populacao + carta1.area + carta1.pib + carta1.pontos + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (float)carta2.populacao + carta2.area + carta2.pib + carta2.pontos + pibPerCapita2 + (1.0 / densidade2);

    // Apresentação das cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome: %s\n", carta1.nome);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome: %s\n", carta2.nome);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    printf("\n--- COMPARAÇÃO DAS CARTAS ---\n");
    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontos > carta2.pontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}