#include <stdio.h>

int main() {
    // Declarando movimentação da peça Torre.
    int Torre = 5;
    printf("Movimento da Torre.\n");
    for (int i = 0; i < Torre; i++) {
        printf("Movimento à direita\n");
    }
    printf("\n");

    // Declarando movimentação da peça Bispo.
    int Bispo = 5;
    int j = 0;
    printf("Movimento do Bispo.\n");
    while (j < Bispo) {  
        printf("Cima Direita.\n");
        j++; 
    }
    printf("\n");
    
    // Declarando movimento da peça Rainha.
    int Rainha = 8;
    int k = 0;
    printf("Movimento da Rainha.\n");
    do {
        printf("Movimento à esquerda.\n");
        k++;  
    } while (k < Rainha);

    printf("\n");

    // Declarando movemento da peça Cavalo.
    printf("Movimento da peça Cavalo \n");

    for (int l = 0; l < 2; l++) {   //Loop para mover duas casas para baixo 
        printf("Baixo\n");
    }

    int m = 0;                     // Usando um loop while para mover uma casa para a esquerda
    while (m < 1) {
        printf("Esquerda\n");
        m++;
    }

    return 0;
}

