#include <stdio.h>
#include <string.h> // para poder usar o strcspn
 
int main() {
    // Declaração de variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2, escolha1, escolha2, resultado, resultadoSoma;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibc1, pibc2, superPoder1, superPoder2, soma1, soma2;
 
    // Início do jogo Super Trunfo Cidades
    printf("Super Trunfo Cidades!\n");
    printf("--------------------------\n");
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Neste jogo, você irá comparar estados com base em suas características.\n");
    printf("Cada estado possui atributos como população, área, PIB, número de pontos turísticos, densidade demográfica, PIB per Capita e super poder.\n");
    printf("Você deve escolher um estado representado por uma letra de 'A' a 'H'.\n");
    printf("E um código representativo para a carta sendo a letra escolhida seguida por um número de 01 à 04.\n");
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
    scanf("%lu", &populacao1);
 
    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area1);
 
    printf("Insira o PIB da cidade (em bilhões de R$): ");
    scanf("%f", &pib1);
 
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);
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
    scanf("%lu", &populacao2);
 
    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area2);
 
    printf("Insira o PIB da cidade (em bilhões de R$): ");
    scanf("%f", &pib2);
 
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    printf("--------------------------\n");
 
    // Cálculos
 
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    pibc1 = (pib1 * 1000000000) / populacao1;
    pibc2 = (pib2 * 1000000000) / populacao2;
 
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibc1 + (1/densidade1);
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibc2 + (1/densidade2);

    soma1 = superPoder1 + densidade1 + pibc1 + pib1 + populacao1 + area1 + pontosTuristicos1;
    soma2 = superPoder2 + densidade2 + pibc2 + pib2 + populacao2 + area2 + pontosTuristicos2;

   // Exibição dos dados das cartas

    printf("As cartas foram preenchidas com os seguintes dados:\n");
 
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibc1);
    printf("Super Poder: %.2f pontos\n", superPoder1);
    printf("--------------------------\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibc2);
    printf("Super Poder: %.2f pontos\n", superPoder2);
    printf("--------------------------\n");
    
    getchar();
    printf("É hora do duelo!\n");
    printf("Agora você deve escolher dois atributos iguais ou diferentes para serem comparados.\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha1);

    printf("Escolha o segundo atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha2);
   
    printf("--------------------------\n");
    printf("Resultados!\n");
    
    // Comparação das cartas
    switch (escolha1)
    {
    case 1:
        switch (escolha2)
        {
        case 1:
            printf("A cidade %s duelou com a cidade %s utilizando o atributo: Poupulação.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo População da cidade %s: %lu\n", cidade1, populacao1);
            printf("Atributo População da cidade %s: %lu\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (populacao1 < populacao2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            } 
            break;
        case 2:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Poupulação e Área.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo População da cidade %s: %lu\n", cidade1, populacao1);
            printf("Atributo Área da cidade %s: %.2f\n", cidade2, area2);
            
            if (populacao1 > area2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (populacao1 < area2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 3:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Poupulação e PIB.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Poupulação da cidade %s: %lu\n", cidade1, populacao1);
            printf("Atributo PIB da cidade %s: %.2f\n", cidade2, pib2);

            if (populacao1 > pib2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (populacao1 < pib2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 4:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Poupulação e Número de Pontos Turísticos.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Poupulação da cidade %s: %lu\n", cidade1, populacao1);
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade2, pontosTuristicos2);

            if (populacao1 > pontosTuristicos2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (populacao1 < pontosTuristicos2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 5:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Poupulação e Densidade Demográfica.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Poupulação da cidade %s: %lu\n", cidade1, populacao1);
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade2, densidade2);

            if (populacao1 > densidade2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else if (populacao1 < densidade2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 6:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Poupulação e PIB per Capita.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Poupulação da cidade %s: %lu\n", cidade1, populacao1);
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade2, pibc2);

            if (populacao1 > pibc2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (populacao1 < pibc2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 7:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Poupulação e Super Poder.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Poupulação da cidade %s: %lu\n", cidade1, populacao1);
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade2, superPoder2);
            
            if (populacao1 > superPoder2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (populacao1 < superPoder2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        default:
            printf("Escolha inválida!\n");
            break;
        }
    case 2:
        switch (escolha2)
        {
        case 1:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Área e Poupulação.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Área da cidade %s: %.2f\n", cidade1, area1);
            printf("Atributo População da cidade %s: %lu\n", cidade2, populacao2);

            if (area1 > populacao2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (area1 < populacao2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            } 
            break;
        case 2:
            printf("A cidade %s duelou com a cidade %s utilizando o atributo: Área.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Área da cidade %s: %.2f\n", cidade1, area1);
            printf("Atributo Área da cidade %s: %.2f\n", cidade2, area2);
            
            if (area1 > area2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (area1 < area2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 3:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Área e PIB.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Área da cidade %s: %.2f\n", cidade1, area1);
            printf("Atributo PIB da cidade %s: %.2f\n", cidade2, pib2);

            if (area1 > pib2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (area1 < pib2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 4:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Área e Número de Pontos Turísticos.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Área da cidade %s: %.2f\n", cidade1, area1);
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade2, pontosTuristicos2);

            if (area1 > pontosTuristicos2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (area1 < pontosTuristicos2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 5:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Área e Densidade Demográfica.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Área da cidade %s: %.2f\n", cidade1, area1);
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade2, densidade2);

            if (area1 > densidade2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else if (area1 < densidade2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 6:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Área e PIB per Capita.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Área da cidade %s: %.2f\n", cidade1, area1);
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade2, pibc2);

            if (area1 > pibc2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (area1 < pibc2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 7:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Área e Super Poder.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Área da cidade %s: %.2f\n", cidade1, area1);
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade2, superPoder2);
            
            if (area1 > superPoder2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (area1 < superPoder2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        default:
            printf("Escolha inválida!\n");
            break;
        }
    case 3:
        switch (escolha2)
        {
        case 1:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB e Poupulação.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB da cidade %s: %.2f\n", cidade1, pib1);
            printf("Atributo População da cidade %s: %lu\n", cidade2, populacao2);

            if (pib1 > populacao2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pib1 < populacao2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            } 
            break;
        case 2:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB e Área.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB da cidade %s: %.2f\n", cidade1, pib1);
            printf("Atributo Área da cidade %s: %.2f\n", cidade2, area2);
            
            if (pib1 > area2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pib1 < area2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 3:
            printf("A cidade %s duelou com a cidade %s utilizando o atributo: PIB.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB da cidade %s: %.2f\n", cidade1, pib1);
            printf("Atributo PIB da cidade %s: %.2f\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pib1 < pib2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 4:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB e Número de Pontos Turísticos.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB da cidade %s: %.2f\n", cidade1, pib1);
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade2, pontosTuristicos2);

            if (pib1 > pontosTuristicos2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pib1 < pontosTuristicos2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 5:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB e Densidade Demográfica.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB da cidade %s: %.2f\n", cidade1, pib1);
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade2, densidade2);

            if (pib1 > densidade2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else if (pib1 < densidade2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 6:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB e PIB per Capita.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB da cidade %s: %.2f\n", cidade1, pib1);
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade2, pibc2);

            if (pib1 > pibc2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pib1 < pibc2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 7:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB e Super Poder.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB da cidade %s: %.2f\n", cidade1, pib1);
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade2, superPoder2);
            
            if (pib1 > superPoder2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pib1 < superPoder2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        default:
            printf("Escolha inválida!\n");
            break;
        }
    case 4:
        switch (escolha2)
        {
        case 1:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Número de Pontos Turísticos e Poupulação.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade1, pontosTuristicos1);
            printf("Atributo População da cidade %s: %lu\n", cidade2, populacao2);

            if (pontosTuristicos1 > populacao2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pontosTuristicos1 < populacao2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            } 
            break;
        case 2:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Número de Pontos Turísticos e Área.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade1, pontosTuristicos1);
            printf("Atributo Área da cidade %s: %.2f\n", cidade2, area2);
            
            if (pontosTuristicos1 > area2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pontosTuristicos1 < area2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 3:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Número de Pontos Turísticos e PIB.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade1, pontosTuristicos1);
            printf("Atributo PIB da cidade %s: %.2f\n", cidade2, pib2);

            if (pontosTuristicos1 > pib2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pontosTuristicos1 < pib2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 4:
            printf("A cidade %s duelou com a cidade %s utilizando o atributo: Número de Pontos Turísticos.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade1, pontosTuristicos1);
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 5:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Número de Pontos Turísticos e Densidade Demográfica.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade1, pontosTuristicos1);
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade2, densidade2);

            if (pontosTuristicos1 > densidade2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else if (pontosTuristicos1 < densidade2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 6:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Número de Pontos Turísticos e PIB per Capita.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade1, pontosTuristicos1);
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade2, pibc2);

            if (pontosTuristicos1 > pibc2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pontosTuristicos1 < pibc2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 7:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Número de Pontos Turísticos e Super Poder.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade1, pontosTuristicos1);
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade2, superPoder2);
            
            if (pontosTuristicos1 > superPoder2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pontosTuristicos1 < superPoder2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        default:
            printf("Escolha inválida!\n");
            break;
        }
    case 5:
        switch (escolha2)
        {
        case 1:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Densidade Demográfica e Poupulação.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade1, densidade1);
            printf("Atributo População da cidade %s: %lu\n", cidade2, populacao2);

            if (densidade1 > populacao2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (densidade1 < populacao2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            } 
            break;
        case 2:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Densidade Demográfica e Área.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade1, densidade1);
            printf("Atributo Área da cidade %s: %.2f\n", cidade2, area2);
            
            if (densidade1 > area2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (densidade1 < area2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 3:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Densidade Demográfica e PIB.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade1, densidade1);
            printf("Atributo PIB da cidade %s: %.2f\n", cidade2, pib2);

            if (densidade1 > pib2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (densidade1 < pib2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 4:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Densidade Demográfica e Número de Pontos Turísticos.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade1, densidade1);
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade2, pontosTuristicos2);

            if (densidade1 > pontosTuristicos2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (densidade1 < pontosTuristicos2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 5:
            printf("A cidade %s duelou com a cidade %s utilizando o atributo: Densidade Demográfica.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade1, densidade1);
            printf("Atributo Densidade Demográficada cidade %s: %.2f\n", cidade2, densidade2);

            if (densidade1 > densidade2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else if (densidade1 < densidade2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 6:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Densidade Demográfica e PIB per Capita.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade1, densidade1);
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade2, pibc2);

            if (densidade1 > pibc2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (densidade1 < pibc2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 7:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Densidade Demográfica e Super Poder.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade1, densidade1);
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade2, superPoder2);
            
            if (densidade1 > superPoder2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (densidade1 < superPoder2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        default:
            printf("Escolha inválida!\n");
            break;
        }
    case 6:
        switch (escolha2)
        {
        case 1:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB per Capita e Poupulação.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade1, pibc1);
            printf("Atributo População da cidade %s: %lu\n", cidade2, populacao2);

            if (pibc1 > populacao2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pibc1 < populacao2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            } 
            break;
        case 2:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB per Capita e Área.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade1, pibc1);
            printf("Atributo Área da cidade %s: %.2f\n", cidade2, area2);
            
            if (pibc1 > area2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pibc1 < area2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 3:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB per Capita e PIB.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade1, pibc1);
            printf("Atributo PIB da cidade %s: %.2f\n", cidade2, pib2);

            if (pibc1 > pib2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pibc1 < pib2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 4:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB per Capita e Número de Pontos Turísticos.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade1, pibc1);
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade2, pontosTuristicos2);

            if (pibc1 > pontosTuristicos2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pibc1 < pontosTuristicos2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 5:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB per Capita e Densidade Demográfica.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade1, pibc1);
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade2, densidade2);

            if (pibc1 > densidade2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else if (pibc1 < densidade2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 6:
            printf("A cidade %s duelou com a cidade %s utilizando o atributo: PIB per Capita.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade1, pibc1);
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade2, pibc2);

            if (pibc1 > pibc2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pibc1 < pibc2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 7:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: PIB per Capita e Super Poder.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade1, pibc1);
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade2, superPoder2);
            
            if (pibc1 > superPoder2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (pibc1 < superPoder2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        default:
            printf("Escolha inválida!\n");
            break;
        }
    case 7:
        switch (escolha2)
        {
        case 1:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Super Poder e Poupulação.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade1, superPoder1);
            printf("Atributo População da cidade %s: %lu\n", cidade2, populacao2);

            if (superPoder1 > populacao2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (superPoder1 < populacao2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            } 
            break;
        case 2:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Super Poder e Área.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade1, superPoder1);
            printf("Atributo Área da cidade %s: %.2f\n", cidade2, area2);
            
            if (superPoder1 > area2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (superPoder1 < area2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 3:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Super Poder e PIB.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade1, superPoder1);
            printf("Atributo PIB da cidade %s: %.2f\n", cidade2, pib2);

            if (superPoder1 > pib2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (superPoder1 < pib2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 4:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Super Poder e Número de Pontos Turísticos.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade1, superPoder1);
            printf("Atributo Número de Pontos Turísticos da cidade %s: %d\n", cidade2, pontosTuristicos2);

            if (superPoder1 > pontosTuristicos2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (superPoder1 < pontosTuristicos2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 5:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Super Poder e Densidade Demográfica.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade1, superPoder1);
            printf("Atributo Densidade Demográfica da cidade %s: %.2f\n", cidade2, densidade2);

            if (superPoder1 > densidade2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else if (superPoder1 < densidade2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 6:
            printf("A cidade %s duelou com a cidade %s utilizando os atributos: Super Poder e PIB per Capita.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade1, superPoder1);
            printf("Atributo PIB per Capita da cidade %s: %.2f\n", cidade2, pibc2);

            if (superPoder1 > pibc2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (superPoder1 < pibc2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        case 7:
            printf("A cidade %s duelou com a cidade %s utilizando o atributo: Super Poder.\n", cidade1, cidade2);
            printf("Os atributos tinham os seguintes valores:\n");
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade1, superPoder1);
            printf("Atributo Super Poder da cidade %s: %.2f\n", cidade2, superPoder2);
            
            if (superPoder1 > superPoder2) {
                printf("A carta 1 ganhou!\n");
                resultado == 1;
            } else if (superPoder1 < superPoder2) {
                printf("A carta 2 ganhou!\n");
                resultado == 2;
            } else {
                printf("As cartas empataram!\n");
                resultado == 0;
            }
            break;
        default:
            printf("Escolha inválida!\n");
            break;
        }
    default:
            printf("Escolha inválida!\n");
            break;
    }
    

    printf("-----------------------\n");
    printf("A soma de todos os atributos das cartas 1 e 2 indica que:\n");
    if(soma1 == soma2){
        printf("As cartas empataram!\n");
        resultadoSoma = 0;
    } else if (soma1 > soma2)
    {
        printf("A carta 1 ganhou!\n");
        resultadoSoma = 1;
    } else{
        printf("A carta 2 ganhou!\n");
        resultadoSoma = 2;
    }
    
    printf("Portanto, o resultado final é:\n");
    if (resultado == 1 && resultadoSoma == 1){
        printf("Carta 1 ganhou!\n");
    } else if (resultado == 2 && resultadoSoma == 2){
        printf("Carta 1 ganhou!\n");
    } else{
        printf("As cartas empataram!\n");
    }
    
    printf("--------------Fim de Jogo------------\n");
    return 0;
}
