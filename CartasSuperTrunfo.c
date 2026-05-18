#include <stdio.h>

int main() {
  // --- VARIÁVEIS DA CARTA 1 ---
    char estado1;
    char codigo1[4]; // Suporta 3 caracteres + o terminador '\0'
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ================= CALASTRO DA CARTA 1 =================
    printf("=== CADASTRO DA CARTA 1 ===\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); 
    
    printf("Digite o Codigo da Carta (Ex: A01): ");
    scanf("%s \n", codigo1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1); 
    
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // ================= CADASTRO DA CARTA 2 =================
    printf("=== CADASTRO DA CARTA 2 ===\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Codigo da Carta (Ex: B02): ");
    scanf("%s \n", codigo2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);
    
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // ================= EXIBIÇÃO DOS DADOS =================
    printf("=========================================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("=========================================\n");


} 
