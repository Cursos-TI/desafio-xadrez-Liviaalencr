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
    int b = 0;
    printf("Movimento do Bispo.\n");
    while (b < Bispo) {  
        printf("Cima Direita.\n");
        b++; 
    }
    printf("\n");
    
    // Declarando movimento da peça Rainha.
    int Rainha = 8;
    int R = 0;
    printf("Movimento da Rainha.\n");
    do {
        printf("Movimento à esquerda.\n");
        R++;  
    } while (R < Rainha);

    return 0;
}

