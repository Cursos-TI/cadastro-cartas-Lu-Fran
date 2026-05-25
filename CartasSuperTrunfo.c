#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[20], codigo_carta[5], cidade[30];
  int populacao, num_pontos_turisticos;
  float area, pib, densidade_populacional, pib_per_capita;

  char estado2[20], codigo_carta2[5], cidade2[30];
  int populacao2, num_pontos_turisticos2;
  float area2, pib2, densidade_populacional2, pib_per_capita2;

  // Área para entrada de dados
  printf("Estado: \n");
  scanf("%s", &estado);

  printf("Código carta: \n");
  scanf("%s", &codigo_carta);

  printf("Cidade: \n");
  scanf("%s", &cidade);

  printf("População: \n");
  scanf("%d", &populacao);

  printf("Quantidade pontos turísticos: \n");
  scanf("%d", &num_pontos_turisticos);
    
  printf("Área: \n");
  scanf("%f", &area);

  printf("Pib: \n");
  scanf("%f", &pib);

  //Calcular a Densidade Populacional: Divida a população da cidade pela sua área
  densidade_populacional = (float) populacao / area;

  //Calcular o PIB per Capita: Divida o PIB da cidade pela sua população
  pib_per_capita = (float) pib / populacao;

  printf("Estado Nº2: \n");
  scanf("%s", &estado2);

  printf("Código carta Nº2: \n");
  scanf("%s", &codigo_carta2);

  printf("Cidade Nº2: \n");
  scanf("%s", &cidade2);

  printf("População Nº2: \n");
  scanf("%d", &populacao2);

  printf("Quantidade pontos turísticos Nº2: \n");
  scanf("%d", &num_pontos_turisticos2);
    
  printf("Área Nº2: \n");
  scanf("%f", &area2);

  printf("Pib Nº2: \n");
  scanf("%f", &pib2);

  //Calcular a Densidade Populacional: Divida a população da cidade pela sua área
  densidade_populacional2 = (float) populacao2 / area2;

  //Calcular o PIB per Capita: Divida o PIB da cidade pela sua população
  pib_per_capita2 = (float) pib2 / populacao2;

  // Área para exibição dos dados da cidade
  printf("Estado: %s \nCarta: %s\nPopulação: %s\nQuantidade pontos turísticos: %d\nÁrea: %f\nPib: %f\n", estado, codigo_carta, cidade, populacao, num_pontos_turisticos, area, pib);
  //Exibir os Resultados Densidade populacional, Pib per Capita:
  printf("Densidade populacional: %.2f\n", densidade_populacional);
  printf("Pib per Capita: %.2f\n", pib_per_capita);

  printf("Estado: %s \nCarta: %s\nPopulação: %s\nQuantidade pontos turísticos: %d\nÁrea: %f\nPib: %f", estado2, codigo_carta2, cidade2, populacao2, num_pontos_turisticos2, area2, pib2);
  //Exibir os Resultados Densidade populacional, Pib per Capita:
  printf("Densidade populacional: %.2f\n", densidade_populacional2);
  printf("Pib per Capita: %.2f\n", pib_per_capita2);
  
  return 0;
} 
