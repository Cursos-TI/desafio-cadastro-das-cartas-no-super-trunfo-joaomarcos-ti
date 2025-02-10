#include <stdio.h>

#define NUM_ESTADOS 8
#define CIDADES_POR_ESTADO 4

// Estrutura para representar uma cidade
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cartas[NUM_ESTADOS * CIDADES_POR_ESTADO];
    char estados[NUM_ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int indice = 0;

    printf("Cadastro de Cartas - Super Trunfo: Países\n\n");
    
    // Cadastro das cartas
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < CIDADES_POR_ESTADO; j++) {
            sprintf(cartas[indice].codigo, "%c%02d", estados[i], j + 1);
            printf("Cadastro da cidade %s:\n", cartas[indice].codigo);
            
            printf("População: ");
            scanf("%d", &cartas[indice].populacao);
            
            printf("Área (km²): ");
            scanf("%f", &cartas[indice].area);
            
            printf("PIB (em bilhões): ");
            scanf("%f", &cartas[indice].pib);
            
            printf("Número de pontos turísticos: ");
            scanf("%d", &cartas[indice].pontos_turisticos);
            
            indice++;
            printf("\n");
        }
    }
    
    // Exibição dos dados cadastrados
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < NUM_ESTADOS * CIDADES_POR_ESTADO; i++) {
        printf("Código: %s\n", cartas[i].codigo);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontos_turisticos);
        printf("-----------------------------\n");
    }
    
    return 0;
}
