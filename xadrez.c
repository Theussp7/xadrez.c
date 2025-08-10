#include <stdio.h>

int main() {
    // -------------------------------
    // Simulação do movimento da Torre
    // -------------------------------
    // A Torre move-se em linha reta horizontal ou vertical.
    // Neste caso, ela vai se mover 5 casas para a DIREITA.

    int casasTorre = 5; // Número de casas que a Torre vai se mover
    printf("Movimento da Torre:\n");

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -------------------------------
    // Simulação do movimento do Bispo
    // -------------------------------
    // O Bispo move-se na diagonal.
    // Neste caso, ele vai se mover 5 casas na diagonal para CIMA e à DIREITA.

    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");

    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // --------------------------------
    // Simulação do movimento da Rainha
    // --------------------------------
    // A Rainha move-se em todas as direções.
    // Neste caso, ela vai se mover 8 casas para a ESQUERDA.

    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    printf("\n");

    // --------------------------------
    // Simulação do movimento do Cavalo
    // --------------------------------
    // O Cavalo move-se em "L": duas casas numa direção e uma casa perpendicularmente.
    // Neste caso: 2 casas para BAIXO, depois 1 casa para a ESQUERDA.
    // Vamos usar: um loop FOR (para o movimento para baixo) e um loop WHILE (para a esquerda)

    int movimentosCavalo = 1; // Número de movimentos completos do cavalo em "L"
    int passosBaixo = 2;      // Casas para baixo
    int passosEsquerda = 1;   // Casas para a esquerda

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentosCavalo; i++) {
        // Primeiro, duas casas para baixo
        for (int j = 0; j < passosBaixo; j++) {
            printf("Baixo\n");
        }

        // Depois, uma casa para a esquerda
        int contadorEsquerda = 0;
        while (contadorEsquerda < passosEsquerda) {
            printf("Esquerda\n");
            contadorEsquerda++;
        }
    }

    return 0;
}
