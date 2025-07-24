#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Definindo o tamanho do tabuleiro

    int tabuleiro[10][10];  // Declaração de uma matriz 10x10 para o tabuleiro
    int podePosicionar = 1;
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Mudando para inteiros para alinhar com o tabuleiro

    // Inicializando o tabuleiro com água (0)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;  // 0 representa água
        }
    }

    // Coordenadas iniciais dos navios
    int linhaNavioVertical = 4; // Linha inicial do navio vertical
    int colunaNavioVertical = 7; // Coluna inicial do navio vertical
    int linhaNavioHorizontal = 4; // Linha inicial do navio horizontal
    int colunaNavioHorizontal = 2; // Coluna inicial do navio horizontal
    int linhaNavioDiagonal = 1; // Linha inicial do navio diagonal
    int colunaNavioDiagonal = 1; // Coluna inicial do navio diagonal
    int linhaNavioDiagonal2 = 3; // Linha inicial do navio diagonal
    int colunaNavioDiagonal2 = 7; // Coluna inicial do navio diagonal

    // Posicionando o navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if(tabuleiro[linhaNavioVertical + i][colunaNavioVertical] != 0) {
            podePosicionar = 0; // Verifica se já existe um navio na posição
            break;        
        }
        if(podePosicionar){
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3;  // 3 representa o navio
            }
        } else{
            printf("Sobreposição detectada no navio vertical!\n");
        }
    }
    podePosicionar = 1; // Reseta a variável para o próximo navio

    // Posicionando o navio horizontal
    for (int j = 0; j < TAMANHO_NAVIO; j++) {
        if(tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + j] != 0) {
            podePosicionar = 0; // Verifica se já existe um navio na posição
            break;        
        }
        if(podePosicionar){
            for (int j = 0; j < TAMANHO_NAVIO; j++) {
                tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + j] = 3;
            }
        } else{
            printf("Sobreposição detectada no navio horizontal!\n");
        }
    }
    podePosicionar = 1; // Reseta a variável para o próximo navio

    // Posicionando o navio diagonal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if(tabuleiro[linhaNavioDiagonal + i][colunaNavioDiagonal + i] != 0) {
            podePosicionar = 0; // Verifica se já existe um navio na posição
            break;        
        }
        if(podePosicionar){
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linhaNavioDiagonal + i][colunaNavioDiagonal + i] = 3;
            }
        } else{
            printf("Sobreposição detectada no navio diagonal!\n");
        }
    }

    podePosicionar = 1; // Reseta a variável para o próximo navio

    // Posicionando o navio diagonal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if(tabuleiro[linhaNavioDiagonal2 + i][colunaNavioDiagonal2 + i] != 0) {
            podePosicionar = 0; // Verifica se já existe um navio na posição
            break;        
        }
        if(podePosicionar){
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linhaNavioDiagonal2 + i][colunaNavioDiagonal2 + i] = 3;
            }
        } else{
            printf("Sobreposição detectada no navio diagonal!\n");
        }
    }

    // Validando se os navios estão dentro dos limites do tabuleiro
    if (linhaNavioVertical < 0 || linhaNavioVertical + TAMANHO_NAVIO > TAMANHO_TABULEIRO ||
        colunaNavioVertical < 0 || colunaNavioVertical >= TAMANHO_TABULEIRO ||
        linhaNavioHorizontal < 0 || linhaNavioHorizontal >= TAMANHO_TABULEIRO ||
        colunaNavioHorizontal < 0 || colunaNavioHorizontal + TAMANHO_NAVIO > TAMANHO_TABULEIRO ||
        linhaNavioDiagonal < 0 || linhaNavioDiagonal + TAMANHO_NAVIO > TAMANHO_TABULEIRO ||
        colunaNavioDiagonal < 0 || colunaNavioDiagonal + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Um ou mais navios estão fora dos limites do tabuleiro!\n");
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
