#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades - Nível Novato
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  int populacao1; 
  int pontosTuristicos1;
  float area1; 
  float pib1; 
  float densidadePopulacional1; // Variáveis para armazenar os cálculos automáticos da carta 1 - Nível Aventureiro
  float pibpercarpita1; // Variáveis para armazenar os cálculos automáticos da carta 1 - Nível Aventureiro

  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2; 
  int pontosTuristicos2;
  float area2; 
  float pib2; 
  float densidadePopulacional2; // Variáveis para armazenar os cálculos automáticos da carta 2 - Nível Aventureiro
  float pibpercarpita2; // Variáveis para armazenar os cálculos automáticos da carta 2 - Nível Aventureiro
  
   // Área para entrada de dados - Nível Novato
  printf("-- Cadastro da Carta 1 -- \n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Código Da Carta (ex: A01):");
  scanf("%s", codigo1);
  printf("Nome Da Cidade: ");
  scanf("%s", nomeCidade1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área (km²): ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Número De Pontos Turísticos:");
  scanf("%d", &pontosTuristicos1);
  
  // --- PROCESSAMENTO DE DADOS (Nível Aventureiro) ---
// O sistema calcula automaticamente os novos atributos baseados nos dados inseridos
// Usei (float) para garantir que a divisão entre inteiros não perca as casas decimais
  densidadePopulacional1 = (float) populacao1 / area1;
  pibpercarpita1 = pib1 / (float) populacao1;



  printf("\n-- Cadastro da Carta 2 --\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Código Da Carta (ex: A01):");
  scanf("%s", codigo2);
  printf("Nome Da Cidade: ");
  scanf("%s", nomeCidade2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área (km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Número De Pontos Turísticos:");
  scanf("%d", &pontosTuristicos2);


    // --- PROCESSAMENTO DE DADOS (Nível Aventureiro) ---
// O sistema calcula automaticamente os novos atributos baseados nos dados inseridos
// Usei (float) para garantir que a divisão entre inteiros não perca as casas decimais
  densidadePopulacional2 = (float) populacao2 / area2;
  pibpercarpita2 = pib2 / (float) populacao2;

  // Área para exibição dos dados da cidade
  printf("\n ----- CARTA 1 -----\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("Pib Per Capita: %.2f reais\n", pibpercarpita1);


  printf("\n ----- CARTA 2 -----\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("Pib Per Capita: %.2f reais\n", pibpercarpita2);


return 0;
} 
