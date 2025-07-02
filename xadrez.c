#include <stdio.h>

int main(){
    // Declaração de variáveis
    char peca;
    int casas, i = 0;
    int movimentoCompleto = 1; //Flag para controlar o movimento em L

    // Inicio do jogo de Xadrez
    printf("Bem vindo ao Jogo de Xadrez!\n");
    printf("--------------------------\n");
    printf("Neste jogo, você irá movimentar três das peças do xadrez: Rainha, Torre e Bispo.\n");
    printf("Escolha a peça e diga quantas casas ela irá andar.\n");
    printf("Bispo e Torre estarão se movimentando apenas para direita, o Cavalo para baixo e para esquerda e a Rainha para a esquerda por enquanto.\n");
    printf("--------------------------\n");    
    
    // Solicitar informações para o jogador
    printf("Escolha a peça que irá movimentar:\n");
    printf("Digite B para Bispo, C para Cavalo, R para Rainha e T para Torre:\n");
    scanf("%c", &peca);
    printf("Escolha quantas casas andar:\n");
    scanf("%d", &casas);

    switch (peca)
    {
    case 'B':
        // Loop para o Bispo
        do{
            printf("O Bispo se movimentou para Cima e para Direita.\n"); // Imprime direção do movimento
            i++; // Incremento do contador
        } while (i < casas);
        break;
    case 'C':
        // Loop para o Cavalo
        while (movimentoCompleto--)
        {
            for (int i = 0; i<2; i++){
                printf("Cima\n"); //Imprime Cima duas vezes
            }
            printf("Direita\n"); //Imprime Direita uma vez
        }
        break;
    case 'R':
        // Loop para a Rainha
        while (i < casas){
            printf("A Rainha se movimentou para Esquerda.\n"); // Imprime direção do movimento
            i++; // Incremento do contador
        }
    case 'T':
        // Loop para Torre
        for(i; i < casas; i++){
            printf("A Torre se movimentou para Direita.\n"); // Imprime direção do movimento
        }
        break;
    default:
        break;
    }
    
    printf("--------------Fim de Jogo------------\n");

    return 0;
}
