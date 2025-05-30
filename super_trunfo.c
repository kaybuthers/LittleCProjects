#include <stdio.h>
#include <string.h> // para poder usar o strcspn

int main() {
    // Declaração de variáveis
    char estado1, estado2;
    char codigo1[50], codigo2[50], cidade1[50], cidade2[50];
    long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibc1, pibc2, superPoder1, superPoder2;

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

    // Cálculos: PIB per Capita, Densidade populacional, Super Poder

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    pibc1 = (pib1 * 1000000000) / populacao1;
    pibc2 = (pib2 * 1000000000) / populacao2;

    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pibc1 + (1/densidade1);
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pibc2 + (1/densidade2);
    
    // Exibição dos dados das cartas
    printf("A carta foi preenchida com os seguintes dados:\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibc1);
    printf("Super Poder: %.2f pontos\n", superPoder1);
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
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibc2);
    printf("Super Poder: %.2f pontos\n", superPoder2);
    printf("--------------------------\n");

    printf("É hora do duelo!\n");
    printf("Comparando as cartas...\n");

    // Comparação das cartas
    printf("Resultados da comparação:\n");
    if (populacao1 > populacao2) {
        printf("A carta 1 tem uma população maior que a carta 2!\n");
    } else if (populacao1 < populacao2) {
        printf("A carta 2 tem uma população maior que a carta 1!\n");
    } else {
        printf("As cartas têm a mesma população!\n");
    }
    if (area1 > area2) {
        printf("A carta 1 tem uma área maior que a carta 2!\n");
    } else if (area1 < area2) {
        printf("A carta 2 tem uma área maior que a carta 1!\n");
    } else {
        printf("As cartas têm a mesma área!\n");
    }
    if (pib1 > pib2) {
        printf("A carta 1 tem um PIB maior que a carta 2!\n");
    } else if (pib1 < pib2) {
        printf("A carta 2 tem um PIB maior que a carta 1!\n");
    } else {
        printf("As cartas têm o mesmo PIB!\n");
    }
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("A carta 1 tem mais pontos turísticos que a carta 2!\n");
    } else if (pontos_turisticos1 < pontos_turisticos2) {
        printf("A carta 2 tem mais pontos turísticos que a carta 1!\n");
    } else {
        printf("As cartas têm o mesmo número de pontos turísticos!\n");
    }
    if (densidade1 > densidade2) {
        printf("A carta 1 tem uma densidade populacional maior que a carta 2!\n");
    } else if (densidade1 < densidade2) {
        printf("A carta 2 tem uma densidade populacional maior que a carta 1!\n");
    } else {
        printf("As cartas têm a mesma densidade populacional!\n");
    }
    if (pibc1 > pibc2) {
        printf("A carta 1 tem um PIB per capita maior que a carta 2!\n");
    } else if (pibc1 < pibc2) {
        printf("A carta 2 tem um PIB per capita maior que a carta 1!\n");
    } else {
        printf("As cartas têm o mesmo PIB per capita!\n");
    }
    if (superPoder1 > superPoder2) {
        printf("A carta 1 é mais poderosa que a carta 2!\n");
    } else if (superPoder1 < superPoder2) {
        printf("A carta 2 é mais poderosa que a carta 1!\n");
    } else {
        printf("As cartas são iguais em poder!\n");
    }

    printf("--------------------------\n");
    return 0;
}
