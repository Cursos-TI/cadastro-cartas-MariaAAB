#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis para a Carta 1
  char estado[2], codigoCartas[4], cidade[50];
  int populacao, pontosTuristicos;
  float area, pib;

  // Variáveis para a Carta 2
  char estado2[2], codigoCartas2[4], cidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2;

  // Área para entrada de dados
  printf("Digite as informações da Carta 1\n");
  printf("Estado: \n");
  scanf(" %s", estado);
  printf("Código: \n");
  scanf(" %s", codigoCartas);
  printf("Nome da Cidade: \n");
  scanf(" %[^\n]", cidade);

  printf("População: \n");
  scanf("%d", &populacao);
  printf("Área: Km2 \n");
  scanf("%f", &area);
  printf("Pib: \n");
  scanf("%f", &pib);
  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &pontosTuristicos);

  printf("\n");

  printf("\nDigite as informações da Carta 2\n");
  printf("Estado: \n");
  scanf(" %s", estado2);
  printf("Código: \n");
  scanf(" %s", codigoCartas2);
  printf("Nome da Cidade: \n");

  getchar();
  fgets(cidade2, 50, stdin);

  cidade2[strcspn(cidade2, "\n")] = '\0';

  printf("População: \n");
  scanf("%d", &populacao2);
  printf("Área: Km2 \n");
  scanf("%f", &area2);
  printf("Pib: \n");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &pontosTuristicos2);

  printf("\n");

  // Área para exibição dos dados da cidade
  // Informacoes da Carta 1

  printf("Carta: 1\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s%s\n", estado, codigoCartas);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("Pib: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

  printf("\n");

  // Informacoes da Carta 2
  printf("Carta: 2\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s%s\n", estado2, codigoCartas2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("Pib: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  return 0;
}
