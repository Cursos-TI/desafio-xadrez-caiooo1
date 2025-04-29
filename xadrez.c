#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças

    // Constantes para o número de casas que cada peça pode se mover
    const int movimentos_bispo = 5;
    const int movimentos_torre = 5;
    const int movimentos_rainha = 8;

    int i; // variável de controle para os loops

    // Implementação de Movimentação do Bispo
    // Movimenta 5 vezes: Cima e Direita (diagonal)
    printf("Movimentação do Bispo:\n");
    for (i = 0; i < movimentos_bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Movimenta 5 vezes para a Direita
    printf("\nMovimentação da Torre:\n");
    i = 0;
    while (i < movimentos_torre) {
        printf("Direita\n");
        i++;
    }

    // Implementação de Movimentação da Rainha
    // Movimenta 8 vezes para a Esquerda
    printf("\nMovimentação da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentos_rainha);

    return 0;
}
