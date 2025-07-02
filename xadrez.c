#include <stdio.h>

void moverBispo(int casas) {
    if (casas > 0) {
        printf("O Bispo se movimentou para Cima e para Direita.\n");
        moverBispo(casas - 1); // Chamada recursiva
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("A Rainha se movimentou para Esquerda.\n");
        moverRainha(casas - 1); // Chamada recursiva
    }
}

void moverTorre(int casas) {
    if (casas > 0) {
        printf("A Torre se movimentou para Direita.\n");
        moverTorre(casas - 1); // Chamada recursiva
    }
}

void moverCavalo() {
    int movimentoCompleto = 1; //Flag para controlar o movimento em L
    while (movimentoCompleto--) {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n"); // Imprime Cima duas vezes
        }
        printf("Direita\n"); // Imprime Direita uma vez
    }
}

int main(){
    // Declaração de variáveis
    char peca;
    int casas;

    // Inicio do jogo de Xadrez
    printf("Bem vindo ao Jogo de Xadrez!\n");
    printf("--------------------------\n");
    printf("Neste jogo, você irá movimentar três das peças do xadrez: Rainha, Torre e Bispo.\n");
    printf("Escolha a peça e diga quantas casas ela irá andar.\n");
    printf("Torre estará se movimentando apenas para direita, Bispo e Cavalo para cima e para direita e a Rainha para a esquerda por enquanto.\n");
    printf("--------------------------\n");    
    
    // Solicitar informações para o jogador
    printf("Escolha a peça que irá movimentar:\n");
    printf("Digite B para Bispo, C para Cavalo, R para Rainha e T para Torre:\n");
    scanf("%c", &peca);

    switch (peca)
    {
    case 'B':
        printf("Escolha quantas casas andar:\n");
        scanf("%d", &casas);
        
        moverBispo(casas); // Chamada da função recursiva para o Bispo
       
        break;
    case 'C':
        moverCavalo(casas); // Chamada da função recursiva para o Cavalo
        break;
    case 'R':
        printf("Escolha quantas casas andar:\n");
        scanf("%d", &casas);
        
        moverRainha(casas); // Chamada da função recursiva para a Rainha
        
        break;
    case 'T':
        printf("Escolha quantas casas andar:\n");
        scanf("%d", &casas);
        
        moverTorre(casas); // Chamada da função recursiva para a Torre
        
        break;
    default:
        break;
    }
    
    printf("--------------Fim de Jogo------------\n");

    return 0;
}
