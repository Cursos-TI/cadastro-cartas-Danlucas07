#include <stdio.h>

typedef struct { // Estrutura (é um recurso da linguagem C, que permite agrupar variáveis de tipos diferentes ou iguais em um "único pacote")

    
    char estado;        // Elemento "estado" da estrutura "carta"
    char codigo[4];     // Elemento "codigo" da estrutura "carta"
    char nome[20];      // Elemento "nome" da estrutura "carta"
    int  populacao;     // Elemento "população" da estrutura "carta"
    float area;         // Elemento "area" da estrutura "carta"
    float pib;          // Elemento "PIB" da estrutura "carta"
    int  pontos;        // Elemento "pontos" da estrutura "carta"

} Carta; //apelidio da estrutura

int main(void) {
    Carta carta1, carta2; //(typedef)estrutura variavel1, variavel2;

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
     printf("\n --- CADASTRO DA SEGUNDA CARTA: ---\n");
    printf("Digite o estado da carta (A - H): \n"); 
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

    printf("\n ---Apresentação das cartas: ---\n\n");


    printf("=== CARTA 1 ===\n\n"); // Apresentação da carta 1
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f Km²\n", carta1.area);
    printf("PIB: %.2f Bilhões de reais\n", carta1.pib);
    printf("Pontos turisticos: %d\n\n", carta1.pontos);


    // Apresentação da carta 2
    printf("=== CARTA 2 ===\n\n"); // Apresentação da carta 2
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f Km²\n", carta2.area);
    printf("PIB: %.2f Bilhões de reais\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos);

    return 0; //finalização
}
