#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, codigo1[4], nomeCidade1[50];
  int populacao1, pontosTuristicos1;
  float area1, pib1;

  char estado2, codigo2[4], nomeCidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2;
  
   // Área para entrada de dados
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

  // Área para exibição dos dados da cidade
  printf("\n ----- CARTA 1 -----\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);


  printf("\n ----- CARTA 2 -----\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);


return 0;
} 
