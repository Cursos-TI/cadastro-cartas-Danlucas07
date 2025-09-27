#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nome[20];
    int  populacao;
    float area;
    float pib;
    int  pontos;
} Carta;

int main(void) {
    Carta carta1, carta2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    printf("\n=== SUPER TRUNFO - PAISES ===\n\n");

    // Cadastro da carta 1
    printf("--- CADASTRO DA PRIMEIRA CARTA: ---\n");
    printf("Digite o estado da carta (A - H): "); 
    scanf(" %c", &carta1.estado); 

    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo); 

    printf("Nome da cidade: ");
    scanf("%s", carta1.nome);

    printf("População: ");
    scanf("%d", &carta1.populacao); 

    printf("Aréa (em Km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em Bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Pontos turisticos: ");
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
    scanf("%d", &carta2.populacao); 

    printf("Aréa (em Km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em Bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontos);

    // Cálculos
    densidade1 = carta1.populacao / carta1.area;
    pibPerCapita1 = (carta1.pib * 1000000000) / carta1.populacao;

    densidade2 = carta2.populacao / carta2.area;
    pibPerCapita2 = (carta2.pib * 1000000000) / carta2.populacao;

    // Apresentação
    printf("\n--- Apresentação das cartas: ---\n\n");

    printf("=== CARTA 1 ===\n\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    printf("=== CARTA 2 ===\n\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
