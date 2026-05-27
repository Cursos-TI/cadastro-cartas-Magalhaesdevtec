#include <stdio.h>

int main() {
    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1;
    char codigo1[4]; 
    char cidade1[50];
    unsigned long int populacao1; // Requisito: unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopular1; 
    float pibpercapita1;     
    float super_poder1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopular2;
    float pibpercapita2;
    float super_poder2;

    // ================= CADASTRO DA CARTA 1 =================
    printf("=== CADASTRO DA CARTA 1 ===\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); 
    
    printf("Digite o Codigo da Carta (Ex A1): ");
    scanf(" %3s", codigo1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); 
    
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1); // %lu para unsigned long int
    
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
    
    printf("Digite o Codigo da Carta (B02): ");
    scanf(" %3s", codigo2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a Populacao: "); 
    scanf("%lu", &populacao2); // %lu para unsigned long int
    
    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");
    
    // ================= PROCESSAMENTO E CÁLCULOS =================
    // Cálculos da Carta 1 (Feitos após a leitura dos dados)
    densidadepopular1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibpercapita1 + (1.0f / densidadepopular1);

    // Cálculos da Carta 2
    densidadepopular2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibpercapita2 + (1.0f / densidadepopular2);

    // ================= EXIBIÇÃO DOS DADOS =================
    printf("=========================================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopular1);
    printf("PIB per capita R$: %.2f\n\n", pibpercapita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopular2);
    printf("PIB per capita R$: %.2f\n\n", pibpercapita2);

    // ================= COMPARAÇÃO DOS RESULTADOS =================
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopular1 < densidadepopular2); // Menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);
    
    printf("\n______-----Programa Finalizado-----______\n");
    printf("=========================================\n");
    return 0;

} 
