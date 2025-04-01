#include <stdio.h>

// Função recursiva para o movimento da Torre
void movimentacaoTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    movimentacaoTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void movimentacaoRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    movimentacaoRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo (com loop aninhado)
void movimentacaoBispo(int vertical, int horizontal) {
    if (vertical == 0) return; // parada

    for (int i = 0; i < horizontal; i++) {
        printf("Cima Direita\n");
    }

    movimentacaoBispo(vertical - 1, horizontal + 1);
}

// Função para movimentar o Cavalo (duas casas para cima e uma para a direita)
void movimentacaoCavalo() {
    printf("Movimento da peça Cavalo: \n");

    for (int i = 0; i < 2; i++) {   // Movendo duas casas para cima
        printf("Cima\n");

        }
    for (int j = 0; j < 1; j++)
    {
        printf("Direita \n");
    }
    printf("\n");
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    movimentacaoTorre(5);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    movimentacaoBispo(5, 1);            // Vertical = 5, Horizontal = 1
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    movimentacaoRainha(8);
    printf("\n");

    // Movimento do Cavalo
    movimentacaoCavalo();

    return 0;
}
