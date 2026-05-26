#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[20], codigo_carta[5], cidade[30];
  int num_pontos_turisticos;
  float area, pib, densidade_populacional, pib_per_capita, inversao_densidade_populacional, super_poder; //super_poder, inversao_densidade_populacional
  unsigned long int populacao; //unsigned long int

  char estado2[20], codigo_carta2[5], cidade2[30];
  int num_pontos_turisticos2;
  float area2, pib2, densidade_populacional2, pib_per_capita2 super_poder2, inversao_densidade_populacional2; //super_poder2, inversao_densidade_populacional2
  unsigned long int populacao2; //unsigned long int

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
  inversao_densidade_populacional = 1 / densidade_populacional;

  //Calcular o PIB per Capita: Divida o PIB da cidade pela sua população
  pib_per_capita = (float) pib / populacao;

  //Calcular o Super Poder: somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
  super_poder = populacao + area + pib + num_pontos_turisticos + pib_per_capita + inversao_densidade_populacional;

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
  inversao_densidade_populacional2 = 1 / densidade_populacional2;

  //Calcular o PIB per Capita: Divida o PIB da cidade pela sua população
  pib_per_capita2 = (float) pib2 / populacao2;

  //Calcular o Super Poder: somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    super_poder2 = populacao2 + area2 + pib2 + num_pontos_turisticos2 + pib_per_capita2 + inversao_densidade_populacional2;

  //Comparar corretamente as cartas atributo por atributo, considerando a regra específica para densidade populacional.
  int num_pontos_turistico_comparacao;
  float area_comparacao, pib_comparacao, pib_per_capita_comparacao, inversao_densidade_populacional_comparacao, super_poder_comparacao; 
  num_pontos_turistico_comparacao = num_pontos_turisticos > num_pontos_turisticos2;
  area_comparacao = area > area2;
  pib_comparacao = pib > pib2;
  pib_per_capita_comparacao = pib_per_capita > pib_per_capita2;
  inversao_densidade_populacional_comparacao = inversao_densidade_populacional > inversao_densidade_populacional2;
  super_poder_comparacao = super_poder > super_poder2;

  // Área para exibição dos dados da cidade
  printf("Estado: %s \nCarta: %s\nPopulação: %s\nQuantidade pontos turísticos: %d\nÁrea: %f\nPib: %f\n", estado, codigo_carta, cidade, populacao, num_pontos_turisticos, area, pib);
  //Exibir os Resultados Densidade populacional, Pib per Capita:
  printf("Densidade populacional: %.2f\n", densidade_populacional);
  printf("Pib per Capita: %.2f\n", pib_per_capita);

  printf("Estado: %s \nCarta: %s\nPopulação: %s\nQuantidade pontos turísticos: %d\nÁrea: %f\nPib: %f\n", estado2, codigo_carta2, cidade2, populacao2, num_pontos_turisticos2, area2, pib2);
  //Exibir os Resultados Densidade populacional, Pib per Capita:
  printf("Densidade populacional: %.2f\n", densidade_populacional2);
  printf("Pib per Capita: %.2f\n", pib_per_capita2);

  //Exibir os resultados das comparações de forma clara e organizada
  printf("Resultado comparação (Número pontos turísticos) entre 1º carta e 2º carta: %d\n", num_pontos_turistico_comparacao);
  printf("Resultado comparação (Área) entre 1º carta e 2º carta: %f\n", area_comparacao);
  printf("Resultado comparação (Pib) entre 1º carta e 2º carta: %f\n", pib_comparacao);
  printf("Resultado comparação (Pib per capita) entre 1º carta e 2º carta: %f\n", pib_per_capita_comparacao);
  printf("Resultado comparação (Densidade populacional) entre 1º carta e 2º carta: %f\n", inversao_densidade_populacional_comparacao);
  printf("Resultado comparação (Todos atributos) entre 1º carta e 2º carta: %f\n", super_poder_comparacao);
  
  return 0;
} 
