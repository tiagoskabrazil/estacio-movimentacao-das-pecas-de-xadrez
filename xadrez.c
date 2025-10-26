#include <stdio.h>
#include <stdlib.h>

int main() {
    // ------------------------------------------------------
    // Simulação de movimento de peças de xadrez
    // Peças: Torre, Bispo, Rainha, Cavalo
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
    printf("\n");

    // Movimentação do Cavalo: Movimento em "L" (2 casas para baixo e 1 para a esquerda)
    // Usando loops aninhados: FOR dentro de WHILE
    int movimentosCavaloBaixo = 2; // 2 casas para baixo
    int movimentosCavaloEsquerda = 1; // 1 casa para esquerda
    int contadorCavalo = 0;

    printf("Movimento do Cavalo (em L: 2 casas para baixo, 1 para esquerda):\n");
    while (contadorCavalo < 1) { // loop externo para realizar o movimento completo do "L"
        // Primeiro, mover 2 casas para baixo usando FOR
        for (int i = 0; i < movimentosCavaloBaixo; i++) {
            printf("Baixo\n");
        }
        // Depois, mover 1 casa para a esquerda usando FOR
        for (int i = 0; i < movimentosCavaloEsquerda; i++) {
            printf("Esquerda\n");
        }
        contadorCavalo++;
    }

    return 0;
}
