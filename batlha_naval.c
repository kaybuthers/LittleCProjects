#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Definindo o tamanho do tabuleiro

    int tabuleiro[10][10];  // Declaração de uma matriz 10x10 para o tabuleiro

    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Mudando para inteiros para alinhar com o tabuleiro

    // Inicializando o tabuleiro com água (0)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;  // 0 representa água
        }
    }

    // Coordenadas iniciais dos navios
    int linhaNavioVertical = 4; // Linha inicial do navio vertical (índice 4)
    int colunaNavioVertical = 7; // Coluna inicial do navio vertical (índice 7)
    int linhaNavioHorizontal = 4; // Linha inicial do navio horizontal (índice 4)
    int colunaNavioHorizontal = 2; // Coluna inicial do navio horizontal (índice 2)

    // Posicionando o navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3;  // 3 representa o navio
    }

    // Posicionando o navio horizontal
    for (int j = 0; j < TAMANHO_NAVIO; j++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + j] = 3;  // 3 representa o navio
    }

    // Exibindo as colunas
    printf("  ");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf(" %c ", colunas[i]);
    }
    printf("\n");

    // Exibindo o tabuleiro com as linhas
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d", linhas[i]);  // Exibindo o número da linha
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 0) {
                printf(" 0 ");  // Água
            } else if (tabuleiro[i][j] == 3) {
                printf(" X ");  // Navio
            }
        }
        printf("\n");
    }

    return 0;
}
