#include <stdio.h>
#include <stdlib.h>

// -------------------------------------------
// Funções recursivas para movimentos de peças
// -------------------------------------------

// Torre: recursiva, movendo para a direita
void moverTorre(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo: recursivo com loops aninhados (vertical -> horizontal)
void moverBispo(int casasVertical, int casasHorizontal) {
    if (casasVertical <= 0) return; // condição de parada externa

    // Loop interno horizontal (movimento à direita)
    for (int i = 0; i < casasHorizontal; i++) {
        printf("Cima, Direita\n");
    }

    // Chamada recursiva para o próximo movimento vertical
    moverBispo(casasVertical - 1, casasHorizontal);
}

// Rainha: recursiva, movendo para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// -------------------------------------------
// Função para o movimento do Cavalo
// Loops complexos com múltiplas variáveis e condições
// Cavalo move em "L": 2 casas para cima + 1 casa para direita
// -------------------------------------------
void moverCavalo(int movimentosL) {
    int vertical, horizontal;

    for (int m = 0; m < movimentosL; m++) { // loop externo para repetir movimentos "L"
        vertical = 0;
        horizontal = 0;

        while (1) { // loop interno controlando o "L"
            if (vertical < 2) {
                printf("Cima\n"); // mover para cima
                vertical++;
                continue; // continuar subindo até 2 casas
            }

            if (horizontal < 1) {
                printf("Direita\n"); // mover para a direita
                horizontal++;
                break; // movimento "L" concluído
            }
        }
    }
}

// -------------------------------------------
// Função principal
// -------------------------------------------
int main() {
    // -------------------------------------------
    // Movimento da Torre
    // -------------------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre);
    printf("\n");

    // -------------------------------------------
    // Movimento do Bispo
    // -------------------------------------------
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1; // uma casa à direita por movimento vertical
    printf("Movimento do Bispo (5 casas diagonal Cima-Direita):\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);
    printf("\n");

    // -------------------------------------------
    // Movimento da Rainha
    // -------------------------------------------
    int casasRainha = 8;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha);
    printf("\n");

    // -------------------------------------------
    // Movimento do Cavalo
    // -------------------------------------------
    int movimentosCavaloL = 1; // número de movimentos em "L" a realizar
    printf("Movimento do Cavalo (em L: 2 casas para cima, 1 para direita):\n");
    moverCavalo(movimentosCavaloL);
    printf("\n");

    return 0;
}
