#include <stdio.h>

int main() {
    // ------------------------------------------------------
    // Simulação de movimento de peças de xadrez
    // Peças: Torre, Bispo, Rainha
    // Cada peça usa uma estrutura de repetição diferente
    // ------------------------------------------------------

    // Movimentação da Torre: 5 casas para a direita usando FOR
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação do Bispo: 5 casas na diagonal (Cima, Direita) usando WHILE
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo (5 casas diagonal Cima-Direita):\n");
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda usando DO-WHILE
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
