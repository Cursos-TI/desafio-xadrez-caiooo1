#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    const int movimentos_bispo = 5;
    const int movimentos_torre = 5;
    const int movimentos_rainha = 8;

    int i; // variável de controle

    // Implementação de Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (i = 0; i < movimentos_bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Implementação de Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    i = 0;
    while (i < movimentos_torre) {
        printf("Direita\n");
        i++;
    }

    // Implementação de Movimentação da Rainha

    printf("\nMovimentação da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentos_rainha);

    return 0;
}
