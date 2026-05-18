#include <stdio.h>

int main() {
  char estado;
  char codigo [4];
  char cidade [30];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;




// Cadastrado de carta 2

char estado2;
char codigo2 [4];
char cidade2 [30];
int populacao2;
float area2;
float pib2;
int pontos_turisticos2;


// Iremos fazer a coleta de dados
// Utilizando as funções printf e scanf

printf("+++++++++++++++++++Coleta de dados+++++++++++++++++++\n");
printf("======================CT1====================\n");

printf("CARTA 1: \n");
printf("Digite o estado: (Letras de A - H): \n");
scanf(" %c", &estado);
printf("Digite o Código: ");
scanf(" %s \n", codigo);
printf("Digite o nome da cidade: ");
scanf(" %[^\n] \n", cidade);
printf("Digite o Número da População: \n");
scanf("%d", &populacao);
printf("Digite a Área em km²: ");
scanf("%f", &area);
printf("Digite o PIB: (Produto interno Bruto do estado) \n");
scanf("%f", &pib);
printf("Digite o número de pontos Turisticos: \n");
scanf("%d", &pontos_turisticos);
printf("\n");


// Coleta de informações dos dados 2


printf("+++++++++++++++++++Coleta de dados+++++++++++++++++++\n");
printf("========================CT2====================\n");


printf("CARTA 2: ");
printf("Digite o estado: (Letras de A - H): \n");
scanf(" %c \n", &estado2);
printf("Digite o Código: \n");
scanf("%s \n", codigo2);
printf("Digite o nome da cidade: ");
scanf(" %[^\n] \n", cidade2);
printf("Digite o Número da População: \n");
scanf("%d", &populacao2);
printf("Digite a Área em km²: ");
scanf("%f", &area2);
printf("Digite o PIB: (Produto interno Bruto do estado) \n");
scanf("%f", &pib2);
printf("Digite o número de pontos Turisticos: \n");
scanf("%d", &pontos_turisticos2);
printf("\n");

// Nesta partes faremos a exibição das informações coletadas

printf("EXIBIR AS INFORMAÇÕES COLETADAS:  \n");

printf("Carta 1 (um): ");
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("População: %d\n " ,populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f Bilhões de reais\n", pib);
printf("Número de Pontos Túristicos: %d\n", pontos_turisticos);


// EXIBIR INFORMAÇÕES DA CARTA2


printf("EXIBIR AS INFORMAÇÕES COLETADAS:  \n");

printf("Carta 2 (dois):\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n" ,populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Túristicos: %d\n", pontos_turisticos2);

return 0;

} 
