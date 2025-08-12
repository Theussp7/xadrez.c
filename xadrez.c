#include <stdio.h>

// ------------------------------------------
// Função recursiva para movimento da Torre
// A Torre move-se em linha reta (horizontal ou vertical)
// Neste exemplo: move-se "Direita" n vezes
// ------------------------------------------
void moverTorre(int casas) {
    if (casas == 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// ------------------------------------------
// Função recursiva para movimento da Rainha
// A Rainha move-se em qualquer direção
// Neste exemplo: move-se "Esquerda" n vezes
// ------------------------------------------
void moverRainha(int casas) {
    if (casas == 0) return; // Condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// ------------------------------------------
// Função recursiva para movimento do Bispo
// E também utiliza loops aninhados
// O loop externo representa o movimento vertical (Cima)
// O loop interno representa o movimento horizontal (Direita)
// ------------------------------------------
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0) return; // Condição de parada

    for (int i = 0; i < casasHorizontais; i++) {
        printf("Cima Direita\n"); // Movimento na diagonal
    }

    moverBispo(casasVerticais - 1, casasHorizontais); // Chamada recursiva
}

// ------------------------------------------
// Movimento do Cavalo com loops aninhados e controle com break/continue
// O Cavalo move-se em "L": duas casas para cima e uma casa à direita
// ------------------------------------------
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");

    int maxVertical = 2;
    int maxHorizontal = 1;

    for (int m = 0; m < movimentos; m++) {
        for (int i = 0; i <= maxVertical; i++) {
            if (i == 0) continue; // Ignora o primeiro valor (só para demonstrar uso de continue)
            printf("Cima\n");
            if (i == maxVertical) {
                for (int j = 0; j < maxHorizontal; j++) {
                    if (j > 2) break; // Nunca entra aqui, só para demonstrar uso de break
                    printf("Direita\n");
                }
            }
        }
    }

    printf("\n");
}

// ------------------------------------------
// Função principal
// ------------------------------------------
int main() {
    // Número de casas para cada peça
    int casasTorre = 5;
    int casasBispoVerticais = 3;
    int casasBispoHorizontais = 2;
    int casasRainha = 8;
    int movimentosCavalo = 2;

    // -------------------------------
    // Movimento da Torre (Recursivo)
    // -------------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // -------------------------------
    // Movimento do Bispo (Recursivo + Loops Aninhados)
    // -------------------------------
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispoVerticais, casasBispoHorizontais);
    printf("\n");

    // -------------------------------
    // Movimento da Rainha (Recursivo)
    // -------------------------------
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // -------------------------------
    // Movimento do Cavalo (Loops complexos)
    // -------------------------------
    moverCavalo(movimentosCavalo);

    return 0;
}
