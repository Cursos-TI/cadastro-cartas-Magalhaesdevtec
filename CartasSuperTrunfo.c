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
    float densidadepopular;
    float pibpercapita;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopular2;
    float pibpercapita2;

    // ================= CALASTRO DA CARTA 1 =================
    printf("=== CADASTRO DA CARTA 1 ===\n");
    
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estado1); 
    
    printf("Digite o Codigo da Carta (Ex A1): \n");
    scanf(" %3s", codigo1);
    
    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1); 
    
    printf("Digite a Populacao: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a Area (em km²): \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhoes de reais): \n");
    scanf("%f", &pib1);
    
    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Densidade Populacional: \n", densidadepopular);
    scanf("%f", &densidadepopular);
    printf("\n");

    // ================= CADASTRO DA CARTA 2 =================
    printf("=== CADASTRO DA CARTA 2 ===\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Codigo da Carta (Ex: B02): ");
    scanf(" %3s", codigo2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Area (em km²): \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhoes de reais): \n");
    scanf("%f", &pib2);
    
    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    printf("\n");
    
    printf("Densidade Populacional: \n", densidadepopular);
    scanf("%f", &densidadepopular);
    // Sera inseridos os dados para calculos dos dados

    densidadepopular = (float)populacao1 / area1;
    pibpercapita = (pib1 * 1000000000.0) / populacao1;

    // para a seguna carta 
    densidadepopular2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;

    // ================= EXIBIÇÃO DOS DADOS =================
    printf("=========================================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopular);
    printf("PIB per capita R$: %.2f\n\n", pibpercapita);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopular2);
    printf("PIB per capita R$: %.2f\n", pibpercapita2);

  printf("______-----Programa Finalizado-----______");
    printf("=========================================\n");

    return 0;

} 
