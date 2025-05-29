#include <stdio.h>
#include <string.h> // para poder usar o strcspn

int main() {
    // Declaração de variáveis
    char estado1, estado2;
    char codigo1[50], codigo2[50], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    // Início do jogo Super Trunfo Cidades
    printf("Super Trunfo Cidades!\n");
    printf("--------------------------\n");
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Neste jogo, você irá comparar estados com base em suas características.\n");
    printf("Cada estado possui atributos como população, área, PIB e número de pontos turísticos.\n");
    printf("Você deve escolher um estado representado por uma letra de 'A' a 'H'.\n");
    printf("Neste jogo serão comparadas as informações de duas cartas.\n");
    printf("--------------------------\n");
    
    // Solicitar dos dados da primeira carta

    printf("Para começar, informe os dados da primeira carta.\n");

    printf("Informe uma letra de 'A' a 'H' para representar um dos 8 estados: \n");
    scanf(" %c", &estado1);  // espaço para pular nova linha

    printf("Informe o código da carta (letra do estado acompanhada de um número de 01 a 04): \n");
    scanf("%s", codigo1);

    getchar(); // remover linha final antes de fgets
    printf("Insira o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin); // para ler uma linha inteira
    cidade1[strcspn(cidade1, "\n")] = '\0';  // remover linha final

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade (em bilhões de R$): ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);
    printf("--------------------------\n");

    // Exibição dos dados das cartas
    printf("A carta foi preenchida com os seguintes dados:\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", pontos_turisticos1);

    printf("--------------------------\n");
    
    // Solicitar dos dados da segunda carta

    printf("Agora informe os dados da segunda carta.\n");

    printf("Informe uma letra de 'A' a 'H' para representar um dos 8 estados: \n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (letra do estado acompanhada de um número de 01 a 04): \n");
    scanf("%s", codigo2);

    getchar(); 
    printf("Insira o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; 

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade (em bilhões de R$): ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);
    printf("--------------------------\n");

   // Exibição dos dados das cartas
    printf("A carta foi preenchida com os seguintes dados:\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", pontos_turisticos2);
    printf("--------------------------\n");

    return 0;
}
